// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "RTSCore_GameInstance.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class RTSCORE_API URTSCore_GameInstance : public UGameInstance {
	GENERATED_BODY()
public:
	URTSCore_GameInstance(const FObjectInitializer& ObjectInitializer);
};
