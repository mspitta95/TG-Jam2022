// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectVillainGameMode.h"
#include "ProjectVillainCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectVillainGameMode::AProjectVillainGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
