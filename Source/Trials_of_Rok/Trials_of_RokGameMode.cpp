// Copyright Epic Games, Inc. All Rights Reserved.

#include "Trials_of_RokGameMode.h"
#include "Trials_of_RokCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrials_of_RokGameMode::ATrials_of_RokGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
