// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChainsOfGloryGameMode.h"
#include "ChainsOfGloryCharacter.h"
#include "UCharacterInventory.h"
#include "UObject/ConstructorHelpers.h"

AChainsOfGloryGameMode::AChainsOfGloryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

UCharacterInventory* AChainsOfGloryGameMode::GetCharacterInventory()
{
	return UCharacterInventory::GetInstance();
}