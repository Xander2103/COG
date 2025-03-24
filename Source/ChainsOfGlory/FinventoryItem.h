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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Row = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Column = 0;
	
	FinventoryItem()
	{
		Count = 0;
		Row = 0;
		Column = 0;
	}

	FinventoryItem(int row, int column)
	{
		Row = row;
		Column = column;
	}
};
