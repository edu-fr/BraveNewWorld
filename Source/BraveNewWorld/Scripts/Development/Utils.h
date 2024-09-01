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
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, Keywords = "log print error", DevelopmentOnly), Category="Development")
	static void PrintError(const UObject* WorldContextObject, const FText InText);

	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, Keywords = "on cast error print log"), Category="Development")
	static void OnCastFailed(const UObject* WorldContextObject, const FText CallerName = INVTEXT("base"));
};