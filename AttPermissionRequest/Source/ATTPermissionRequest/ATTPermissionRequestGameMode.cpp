// Copyright Epic Games, Inc. All Rights Reserved.

#include "ATTPermissionRequestGameMode.h"
#include "ATTPermissionRequestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AATTPermissionRequestGameMode::AATTPermissionRequestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
