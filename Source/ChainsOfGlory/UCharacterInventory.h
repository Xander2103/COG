// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FinventoryItem.h"
#include "UCharacterInventory.generated.h"
/**
 * 
 */
UCLASS()
class CHAINSOFGLORY_API UCharacterInventory : public UObject
{
	GENERATED_BODY()
private:
	static UCharacterInventory* _instance;
public:
    
	static UCharacterInventory* GetInstance();

	UFUNCTION(BlueprintCallable)
	void Print();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FinventoryItem> InventoryItems; 

	int InventorySize = 64;

	int InventoryRowSize = 8;

	UCharacterInventory();
};

UCharacterInventory* UCharacterInventory::_instance = nullptr;

