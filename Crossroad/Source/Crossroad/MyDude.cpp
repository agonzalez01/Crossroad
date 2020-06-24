// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDude.h"
#include "CrossroadProjectile.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "AnimInstanceReplicator.h"
#include "Engine/Engine.h"
#include "Math/Rotator.h"
#include "Math/UnrealMathUtility.h"
#include "Components/TimelineComponent.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AMyDude::AMyDude()
{

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetReplicates(true);
	bReplicates = true;

	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	canMove = false;
	movingBack = false;
	movingRight = false;
	movingLeft = false;
	isMoving = false;
	isAiming = false;
	isShooting = false;
	isADS = false;

	CameraFOV = 90.f;
	InitialFOV = 90.f;
	FinalFOV = 60.f;

	RecoilUp = -.2f;
	RecoilSideways = -.2f;
	isRecoil = false;
	isRightRecoil = false;
	isLeftRecoil = false;
	
	RecoilUpCount = 0;
	RecoilSidewaysCount = 0;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	CameraArm->SetupAttachment(GetCapsuleComponent());
	CameraArm->TargetArmLength = 500.f;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(CameraArm);
	//CameraComponent->SetRelativeLocation(FVector(-40.f, 1.75f, 65.f));
	CameraComponent->bUsePawnControlRotation = true;

	/*DudeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Dude Mesh"));
	DudeMesh->SetupAttachment(CameraComponent);
	DudeMesh->bCastDynamicShadow = true;
	DudeMesh->CastShadow = false;*/

	//SocketLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Socket"));
	//SocketLocation->SetupAttachment(GetMesh(), FName("SMG_Barrel"));
	//SocketLocation->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepWorldTransform, FName("SMG_Barrel"));
	////SocketLocation->SetRelativeLocation(GetMesh()->GetSocketLocation(FName("SMG_Barrel")));

	//RotateBro = CameraArm->GetComponentRotation();
	//SetRootComponent(CameraComponent);
	CameraTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
	InterpFunction.BindUFunction(this, FName("TimelineProgress"));

	RecoilTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Recoil timeline"));
	RecoilInterpFunction.BindUFunction(this, FName("RecoilTimelineProgress"));

	/*SidewaysTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Recoil sideways Timeline"));
	RecoilSidewaysInterpFunction.BindUFunction(this, FName("RecoilSidewaysTimelineProgress"));*/



}

void AMyDude::TImelineProgress(float value)
{
	CameraComponent->SetFieldOfView(FMath::Lerp(InitialFOV, FinalFOV, value));
}

void AMyDude::RecoilTimelineProgress(float value)
{
	if (SideRecoil)
	{
		if (RecoilSidewaysCount > 10)
		{
			AddControllerYawInput(FMath::Lerp(0.2f, RecoilSideways, value));
		}

		else
		{
			AddControllerYawInput(FMath::Lerp(-.1f, RecoilSideways, value));
		}
	}

	else 
	{
		AddControllerPitchInput(FMath::Lerp(0.f, RecoilUp, value));
	}
}

//void AMyDude::RecoilSidewaysTimelineProgress(float value)
//{
//	AddControllerYawInput(FMath::Lerp(0.f, RecoilSideways, value));
//}

//

// Called when the game starts or when spawned
void AMyDude::BeginPlay()
{
	Super::BeginPlay();
	if (CurveFloat)
	{
		CameraTimeline->AddInterpFloat(CurveFloat, InterpFunction);
		CameraTimeline->SetLooping(false);
	}

	if (RecoilCurveFloat)
	{
		RecoilTimeline->AddInterpFloat(RecoilCurveFloat, RecoilInterpFunction);
		RecoilTimeline->SetLooping(false);
	}

	if (RecoilSidewaysCurveFloat)
	{
		SidewaysTimeline->AddInterpFloat(RecoilSidewaysCurveFloat, RecoilSidewaysInterpFunction);
		SidewaysTimeline->SetLooping(false);
	}

	
}

void AMyDude::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyDude, isMoving);
	DOREPLIFETIME(AMyDude, canMove);
	DOREPLIFETIME(AMyDude, movingLeft);
	DOREPLIFETIME(AMyDude, movingRight);
	DOREPLIFETIME(AMyDude, movingBack);
	DOREPLIFETIME(AMyDude, isAiming);
	DOREPLIFETIME(AMyDude, isShooting);
}

// Called every frame
void AMyDude::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotateBro =  FRotator(0, CameraComponent->GetComponentRotation().Yaw, CameraComponent->GetComponentRotation().Roll);
	if (canMove||movingBack||movingLeft||movingRight)
	{
		FQuat ArmRotation = FQuat(RotateBro);
		SetActorRotation(ArmRotation, ETeleportType::None);
	}

	if (GetVelocity().Size() != 0)
	{
		isMoving = true;
	}

	else if((GetVelocity().Size() == 0))
	{
		isMoving = false;
	}

	//SetAllVariables();

	/*FVector ArmForward = CameraArm->GetForwardVector();
	FRotator ArmRotator = CameraArm->GetComponentRotation();
	FQuat ArmRotation = FQuat(RotateBro);*/
	/*GetCapsuleComponent()->SetWorldRotation(ArmRotation, false, 0, ETeleportType::None);
	SetActorRotation(ArmRotation, ETeleportType::None);*/
}

// Called to bind functionality to input
void AMyDude::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyDude::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyDude::StopJumping);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyDude::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AMyDude::StopFire);
	

	PlayerInputComponent->BindAction("ADS", IE_Pressed, this, &AMyDude::ADS);
	PlayerInputComponent->BindAction("ADS", IE_Released, this, &AMyDude::UnADS);


	PlayerInputComponent->BindAxis("MoveForward", this, &AMyDude::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyDude::MoveRight);


	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);


}

void AMyDude::OnFire()
{
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();

		if (World != NULL)
		{
			const FRotator SpawnRotation = GetControlRotation();
			const FVector SpawnLocation = GetActorLocation();

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
			World->SpawnActor<ACrossroadProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);

		}
	}
}

void AMyDude::StartFire()
{

	if (isAiming || isMoving)
	{
		FireShot();
		GetWorldTimerManager().SetTimer(HandleFireRate, this, &AMyDude::FireShot, FireRate, true);
	}

	else 
	{
		isAiming = true;
		GetWorldTimerManager().SetTimer(HandleFireRate, this, &AMyDude::FireShot, FireRate, true);
	}
	
}

void AMyDude::FireShot()
{
	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Called fire shot"));
	isShooting = true;
	isAiming = true;
	FHitResult hit;

	const float Range = 20000.f;
	const FVector StartTrace = GetMesh()->GetSocketLocation(FName("SMG_Barrel"));
	const FVector EndTrace = (CameraComponent->GetForwardVector() * Range) + StartTrace;
		//(CameraComponent->GetForwardVector() * Range) + StartTrace; (SocketLocation->GetForwardVector() * Range) + StartTrace;

	FCollisionQueryParams QueryParams = FCollisionQueryParams(SCENE_QUERY_STAT(WeaponTrace), false, this);

	if (GetWorld()->LineTraceSingleByChannel(hit, StartTrace, EndTrace, ECC_Visibility, QueryParams))
	{
		if (ImpactParticles != NULL)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticles, FTransform(hit.ImpactNormal.Rotation(), hit.ImpactPoint));
		}
	}

	if (MuzzleParticle != NULL)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleParticle, FTransform(GetMesh()->GetSocketRotation(FName("SMG_Barrel")), GetMesh()->GetSocketLocation(FName("SMG_Barrel")), FVector(0.3f, 0.3f, 0.3f)));
	}

	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		PlayAnimMontage(FireAnimation, 1.f);
		/* Get the animation object for the arms mesh
		UAnimInstance* AnimInstance =GetMesh()->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		} */
	}
	if (!isRecoil)
	{
		isRecoil = true;
		RecoilTimeline->PlayFromStart();
	}

	if (RecoilUpCount < 10)
	{
		RecoilUpCount += 1;
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString::FromInt(RecoilUpCount));// TEXT("Setting can run"));
	}

	if (RecoilUpCount >= 10)
	{
		if (!isLeftRecoil)
		{
			isLeftRecoil = true;
			RecoilTimeline->Stop();
			SideRecoil = true;
			RecoilTimeline->PlayFromStart();
		}
		RecoilSidewaysCount += 1;

		if (RecoilSidewaysCount > 10 && !isRightRecoil)
		{
			isRightRecoil = true;
			RecoilTimeline->Stop();
			RecoilSideways = .4f;
			RecoilTimeline->PlayFromStart();
		}
	}

	

	//AddControllerPitchInput(-.15f);
}

void AMyDude::StopFire()
{
	GetWorldTimerManager().ClearTimer(HandleFireRate);
	isShooting = false;
	isRecoil = false;
	isLeftRecoil = false;
	isRightRecoil = false;
	SideRecoil = false;
	RecoilTimeline->Stop();
	SidewaysTimeline->Stop();
	RecoilUpCount = 0;
	RecoilSidewaysCount = 0;
	RecoilSideways = -.2f;
	if (!isADS)
	{
		isAiming = false;
	}
}

void AMyDude::ADS()
{
	isAiming = true;
	isADS = true;
	CameraTimeline->PlayFromStart();
}

void AMyDude::UnADS()
{
	if (!isShooting)
	{
		isAiming = false;
	}

	isADS = false;
	CameraTimeline->Reverse();
}

void AMyDude::MoveForward(float value)
{

	if (value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), value);
		//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Setting rotation"));

		if (value > 0.f)
		{
			//FQuat ArmRotation = FQuat(RotateBro);
			//GetCapsuleComponent()->SetWorldRotation(ArmRotation, false, 0, ETeleportType::None);
			//SetActorRotation(ArmRotation, ETeleportType::None);
			canMove = true;
			movingBack = false;
		}

		else if (value < 0.f)
		{
			canMove = false;
			movingBack = true;

		}
	}

	else
	{
		canMove = false;
		movingBack = false;
	}
}

void AMyDude::MoveRight(float value)
{
	if (value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), value);

		if (value > 0)
		{
			movingLeft = false;
			movingRight = true;
		}

		else if (value < 0)
		{
			movingRight = false;
			movingLeft = true;
		}
	}

	else
	{
		movingRight = movingLeft = false;
	}
}

void AMyDude::TurnAtRate(float rate)
{
	AddControllerYawInput(rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyDude::LookUpAtRate(float rate)
{
	AddControllerPitchInput(rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}







void AMyDude::JustSetThem()
{
	canMove = canMove;
	movingBack = movingBack;
	movingRight = movingRight;
	movingLeft = movingLeft;
	isMoving = isMoving;
	isAiming = isAiming;
	isShooting = isShooting;
	isADS = isADS;
}

void AMyDude::OnRep_isMoving()
{
	isMoving = isMoving;
}

void AMyDude::OnRep_canMove()
{
	canMove = canMove;
}

void AMyDude::OnRep_movingBack()
{
	movingBack = movingBack;
}

void AMyDude::OnRep_movingLeft()
{
	movingLeft = movingLeft;
}

void AMyDude::OnRep_movingRight()
{
	movingRight = movingRight;
}

void AMyDude::OnRep_isAiming()
{
	isAiming = isAiming;
}

void AMyDude::OnRep_isShooting()
{
	isShooting = isShooting;
}

void AMyDude::SetAllVariables_Implementation()
{
	canMove = true;
	movingBack = movingBack;
	movingRight = movingRight;
	movingLeft = movingLeft;
	isMoving = isMoving;
	isAiming = isAiming;
	isShooting = isShooting;
	isADS = isADS;
}

