// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceReplicator.h"
#include "Kismet/GameplayStatics.h"
#include "MyDude.h"
#include "Engine/Engine.h"
#include "MyDude.h"
#include "GameFramework/CharacterMovementComponent.h"

UAnimInstanceReplicator::UAnimInstanceReplicator()
{
	isMoving = false;
	moveForward = false;
	moveBackwards = false;
	movetoRight = false;
	moveLeft = false;
	inAir = false;
	isAiming = false;

}

//void UAnimInstanceReplicator::UpdateAnimation(float delta)
//{
//
//	AActor* OwningActor = GetOwningActor();
//	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("checking actor"));
//
//	if (OwningActor == NULL)
//	{
//		UE_LOG(LogTemp, Warning, TEXT("could not get owner"));
//	}
//
//	if (OwningActor != NULL)
//	{
//		if (OwningActor->GetVelocity().Size() > 0)
//		{
//			canRun = true;
//			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Setting can run"));
//			UE_LOG(LogTemp, Warning, TEXT("got the owner"));
//		}
//
//		/*else if (OwningActor->GetVelocity().Size() < 0)
//		{
//			moveBackwards = true;
//		}
//
//		else 
//		{
//			canRun = false;
//			moveBackwards = false;
//		}*/o
//	}
//}

void UAnimInstanceReplicator::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	AActor* OwningActor = GetOwningActor();
	Belica = Cast<AMyDude>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (Belica != NULL)
	{
		isAiming = Belica->isAiming;

		inAir = Belica->GetCharacterMovement()->IsFalling();

		if (Belica->GetVelocity().Size() == 0)
		{
			isMoving = false;
			moveForward = false;
			moveBackwards = false;
			movetoRight = false;
			moveLeft = false;

			//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Setting can run"));
		}

		else
		{
			isMoving = true;

			if (Belica->canMove)
			{
				moveForward = true;
				moveBackwards = false;
			}

			else if (Belica->movingBack)
			{
				moveForward = false;
				moveBackwards = true;
			}

			else
			{
				moveForward = false;
				moveBackwards = false;
			}

			if (Belica->movingRight)
			{
				moveLeft = false;
				movetoRight = true;
			}

			else if (Belica->movingLeft)
			{
				movetoRight = false;
				moveLeft = true;
			}

			else
			{
				movetoRight = false;
				moveLeft = false;
			}

		}

	}
}
