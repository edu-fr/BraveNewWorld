// Fill out your copyright notice in the Description page of Project Settings.


#include "Utils.h"

void UUtils::PrintError(const UObject* WorldContextObject, const FText InText)
{
	if (GEngine)
	{
		if (GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) || USE_LOGGING_IN_SHIPPING // Do not Print in Shipping or Test unless explictly enabled.
			UKismetSystemLibrary::PrintString(WorldContextObject, InText.ToString(), true, true, FLinearColor(255, 0, 0, 1), 10);
#endif
		}
	}
}
