// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ParPlayer.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DARTSUNREAL_API UParPlayer : public UDataAsset
{
	GENERATED_BODY()
	
	
public:
	UParPlayer();	
	UFUNCTION(BlueprintCallable, Category = "score")
	float getTotalScore();

protected:
	UPROPERTY(BlueprintReadWrite)
	float TotalScore;
	UPROPERTY(BlueprintReadWrite)
	int Missed;
	UPROPERTY(BlueprintReadWrite)
	int BaloonDestroyed;
};
