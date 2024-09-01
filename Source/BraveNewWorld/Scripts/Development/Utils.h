// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Utils.generated.h"

/**
 * 
 */
UCLASS()
class BRAVENEWWORLD_API UUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Utils")
	static void PrintError(const UObject* WorldContextObject, const FText InText);
};