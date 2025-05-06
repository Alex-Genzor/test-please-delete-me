// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericFuncLib.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_CLASE_2025_API UGenericFuncLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static void HealthConditionCpp(float currentHealth, float maxHealth, bool& evaluateCondition, float& health);
	
};
