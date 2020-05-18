// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "MyDude.h"
#include "AnimInstanceReplicator.generated.h"

/**
 * 
 */
UCLASS(transient, Blueprintable, BlueprintType)
class UAnimInstanceReplicator: public UAnimInstance
{
	GENERATED_BODY()
public:
	UAnimInstanceReplicator();

	AMyDude * Belica;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bools, Replicated)
		bool isMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bools, Replicated)
		bool moveForward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bools, Replicated)
		bool moveBackwards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bools, Replicated)
		bool moveLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bools, Replicated)
		bool movetoRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bools, Replicated)
		bool inAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bools, Replicated)
		bool isAiming;




	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutlifetimeProps) const override;

	


};
