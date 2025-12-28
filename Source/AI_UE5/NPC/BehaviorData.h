// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BehaviorData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class AI_UE5_API UBehaviorData : public UDataAsset
{
	GENERATED_BODY()
	

public:

	/* Territory */

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Territory")
	float WanderRadius = 1500.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Territory")
	float MaxChaseDistance = 2500.f;

	/* A.I. Perception */

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A.I. Perception")
	float LoseInterestDelay = 3.0f;

	/* Seach Behavior */

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Search Behavior")
	int32 MaxSearchPoints = 5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Search Behavior")
	float SearchRadius = 800.0f;
};
