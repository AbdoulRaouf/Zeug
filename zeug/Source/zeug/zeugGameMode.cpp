// Copyright Epic Games, Inc. All Rights Reserved.

#include "zeugGameMode.h"
#include "zeugCharacter.h"
#include "UObject/ConstructorHelpers.h"

AzeugGameMode::AzeugGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
