// Copyright Epic Games, Inc. All Rights Reserved.

#include "MBGameMode.h"
#include "MBCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMBGameMode::AMBGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
