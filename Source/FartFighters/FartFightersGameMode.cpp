// Copyright Epic Games, Inc. All Rights Reserved.

#include "FartFightersGameMode.h"
#include "FartFightersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFartFightersGameMode::AFartFightersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
