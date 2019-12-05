// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "UC_GMB.generated.h"

/**
 * 
 */
UCLASS()
class UNREALCRAFT_API AUC_GMB : public AGameMode
{
	GENERATED_BODY()

	public:
		UFUNCTION(BlueprintCallable, Category="UNREAL CRAFT CPP")
		float PerlinNoise3(float X, float Y, float Z);
	
};
