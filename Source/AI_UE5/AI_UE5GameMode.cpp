// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_UE5GameMode.h"
#include "AI_UE5Character.h"
#include "UObject/ConstructorHelpers.h"

AAI_UE5GameMode::AAI_UE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
