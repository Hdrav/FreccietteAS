// Fill out your copyright notice in the Description page of Project Settings.
#include "ParPlayer.h"
#include "MySortingLibrary.h"

UMySortingLibrary::UMySortingLibrary()
{
}

void UMySortingLibrary::SortPlayersByProperty(TArray<UParPlayer*>& PlayersArray)
{
	//std::sort(PlayersArray.begin(), PlayersArray.end(), [](const TArray& a, const TArray& b) { return a.Value < b.Value; })
	PlayersArray.Sort([](UParPlayer& a, UParPlayer& b) { return a.getTotalScore() < b.getTotalScore(); });
}