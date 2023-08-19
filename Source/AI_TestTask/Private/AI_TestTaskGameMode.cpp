// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_TestTaskGameMode.h"
#include "UObject/ConstructorHelpers.h"

AAI_TestTaskGameMode::AAI_TestTaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Core/Blueprints/BP_PlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
