// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericFuncLib.h"

void UGenericFuncLib::HealthConditionCpp(float currentHealth, float maxHealth, bool& evaluateCondition, float& health) {
	health = currentHealth / maxHealth;
	evaluateCondition = health <= 0;

}

