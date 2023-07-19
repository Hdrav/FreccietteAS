// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ParPlayer.h"
#include "MySortingLibrary.generated.h"
/**
 * 
 */
UCLASS()
class DARTSUNREAL_API UMySortingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	UMySortingLibrary();
    UFUNCTION(BlueprintCallable, Category = "Sorting")
    static void SortPlayersByProperty(UPARAM(ref,DisplayName="Players Array") TArray<UParPlayer*>& PlayersArray);
	
};
