// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CrossroadGameMode.h"
#include "CrossroadHUD.h"
#include "CrossroadCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrossroadGameMode::ACrossroadGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACrossroadHUD::StaticClass();
}
