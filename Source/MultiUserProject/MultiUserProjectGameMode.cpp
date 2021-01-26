// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MultiUserProjectGameMode.h"
#include "MultiUserProjectPlayerController.h"
#include "MultiUserProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiUserProjectGameMode::AMultiUserProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMultiUserProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}