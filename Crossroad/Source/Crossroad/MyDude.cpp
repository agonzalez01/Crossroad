// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDude.h"
#include "CrossroadProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"


// Sets default values
AMyDude::AMyDude()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->SetRelativeLocation(FVector(-40.f, 1.75f, 65.f));
	CameraComponent->bUsePawnControlRotation = true;

	DudeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Dude Mesh"));
	DudeMesh->SetupAttachment(CameraComponent);
	DudeMesh->bCastDynamicShadow = true;
	DudeMesh->CastShadow = false;

}

// Called when the game starts or when spawned
void AMyDude::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDude::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyDude::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyDude::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyDude::StopJumping);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyDude::OnFire);
	

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyDude::OnFire);

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

void AMyDude::MoveForward(float value)
{
	if (value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), value);
	}
}

void AMyDude::MoveRight(float value)
{
	if (value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), value);
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

