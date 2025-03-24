#pragma once
#include "FInventoryItemDefinition.h"

#include "FinventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FinventoryItem
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Count = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryItemDefinition ItemDefinition;

	FinventoryItem()
	{
		Count = 0;
	}
};
