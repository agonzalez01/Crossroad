// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Character.h"
#include "MyDude.generated.h"

class UCurveFloat;

UCLASS()
class CROSSROAD_API AMyDude : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* DudeMesh;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraComponent;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraArm;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* SocketLocation;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UTimelineComponent* CameraTimeline;




public:
	// Sets default values for this character's properties
	AMyDude();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnFire();

	void StartFire();

	void FireShot();

	void StopFire();

	FTimerHandle HandleFireRate; 

	void ADS();

	void UnADS();

	void MoveForward(float value);

	void MoveRight(float value);

	void TurnAtRate(float rate);

	void LookUpAtRate(float rate);

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void TImelineProgress(float value);

	UPROPERTY()
	FTimeline CurveTimeline;

	FOnTimelineFloat InterpFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Timeline)
	UCurveFloat* CurveFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Timeline)
		float InitialFOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Timeline)
		float FinalFOV;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera)
		float BaseTurnRate; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool isMoving;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool canMove;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool movingBack;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool movingRight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool movingLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool isAiming;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool isShooting;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool isADS;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		FRotator RotateBro;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera)
		float CameraFOV;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ACrossroadProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float FireRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UParticleSystem* MuzzleParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UParticleSystem* ImpactParticles;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimBlueprint* AnimationHandler;

	/*USTRUCT(BlueprintType)
		struct FAttachmentTransformRules
	{
		EAttachmentRule InRule;
		bool bInWeldSimulatedBodies;
	};*/
		
	

};
