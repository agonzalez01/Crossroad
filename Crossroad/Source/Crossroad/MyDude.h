// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyDude.generated.h"

UCLASS()
class CROSSROAD_API AMyDude : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* DudeMesh;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraComponent;




public:
	// Sets default values for this character's properties
	AMyDude();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnFire();

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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera)
		float BaseTurnRate; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ACrossroadProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* FireAnimation;

};
