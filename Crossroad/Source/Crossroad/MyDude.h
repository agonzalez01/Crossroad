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

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

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

	//Called to bind functionality to input
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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, ReplicatedUsing = OnRep_isMoving)
		bool isMoving;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, ReplicatedUsing = OnRep_canMove)
		bool canMove;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, Replicated)
		bool movingBack;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, Replicated)
		bool movingRight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, Replicated)
		bool movingLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, ReplicatedUsing = OnRep_isAiming)
		bool isAiming;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, ReplicatedUsing = OnRep_isShooting)
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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay, Replicated)
		class UParticleSystem* MuzzleParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay, Replicated)
		class UParticleSystem* ImpactParticles;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay, Replicated)
		class UAnimBlueprint* AnimationHandler;

	UFUNCTION(Server, Reliable)
		void SetAllVariables();

	UFUNCTION()
		void JustSetThem();

	UFUNCTION()
		void OnRep_isMoving();

	UFUNCTION()
		void OnRep_canMove();

	UFUNCTION()
		void OnRep_movingBack();

	UFUNCTION()
		void OnRep_movingLeft();

	UFUNCTION()
		void OnRep_movingRight();

	UFUNCTION()
		void OnRep_isAiming();

	UFUNCTION()
		void OnRep_isShooting();

	
		
	

};
