// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ReplayGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CROSSROAD_API UReplayGameInstance : public UGameInstance
{
	GENERATED_BODY()

		UReplayGameInstance();

		UPROPERTY(EditDefaultsOnly, Category = "Replay")
		FString RecordingName;

	UPROPERTY(EditDefaultsOnly, Category = "Replay")
	FString FriendlyRecordingName;

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StopRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartReplay();


	
};
