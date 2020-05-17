// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDude.h"
#include "CrossroadProjectile.h"
#include "Animation/AnimInstance.h"
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


// Sets default values
AMyDude::AMyDude()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	SocketLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Socket"));
	//SocketLocation->SetupAttachment(GetMesh(), FName("SMG_Barrel"));
	SocketLocation->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepWorldTransform, FName("SMG_Barrel"));
	//SocketLocation->SetRelativeLocation(GetMesh()->GetSocketLocation(FName("SMG_Barrel")));

	RotateBro = CameraArm->GetComponentRotation();
	//SetRootComponent(CameraComponent);
	CameraTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
	InterpFunction.BindUFunction(this, FName("TimelineProgress"));


}

void AMyDude::TImelineProgress(float value)
{
	CameraComponent->SetFieldOfView(FMath::Lerp(InitialFOV, FinalFOV, value));
}

// Called when the game starts or when spawned
void AMyDude::BeginPlay()
{
	Super::BeginPlay();
	if (CurveFloat)
	{
		CameraTimeline->AddInterpFloat(CurveFloat, InterpFunction);
		CameraTimeline->SetLooping(false);
	}

	
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

	if (isAiming)
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
	isShooting = true;
	isAiming = true;
	FHitResult hit;

	const float Range = 20000.f;
	const FVector StartTrace = GetMesh()->GetSocketLocation(FName("SMG_Barrel"));
	const FVector EndTrace = (SocketLocation->GetForwardVector() * Range) + StartTrace;
		//(CameraComponent->GetForwardVector() * Range) + StartTrace;

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
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance =GetMesh()->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AMyDude::StopFire()
{
	GetWorldTimerManager().ClearTimer(HandleFireRate);
	isShooting = false;
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

