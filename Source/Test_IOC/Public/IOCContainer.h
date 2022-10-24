// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/TypeContainer.h"
#include "IOCContainer.generated.h"

/**
 * 
 */
UCLASS()
class TEST_IOC_API UIOCContainer : public UObject
{
	GENERATED_BODY()

public:
	
	static TTypeContainer<> Container;
};
