// Copyright Epic Games, Inc. All Rights Reserved.

#include "uen_testGameMode.h"
#include "uen_testCharacter.h"
#include "UObject/ConstructorHelpers.h"

Auen_testGameMode::Auen_testGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
