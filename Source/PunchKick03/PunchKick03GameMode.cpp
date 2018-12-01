// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PunchKick03GameMode.h"
#include "PunchKick03Character.h"
#include "UObject/ConstructorHelpers.h"

APunchKick03GameMode::APunchKick03GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
