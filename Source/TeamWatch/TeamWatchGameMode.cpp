// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TeamWatchGameMode.h"
#include "TeamWatchHUD.h"
#include "TeamWatchCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeamWatchGameMode::ATeamWatchGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATeamWatchHUD::StaticClass();
}
