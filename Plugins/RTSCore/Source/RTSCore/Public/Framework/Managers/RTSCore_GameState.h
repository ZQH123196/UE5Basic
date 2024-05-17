// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "RTSCore_GameState.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class RTSCORE_API ARTSCore_GameState : public AGameStateBase {
	GENERATED_BODY()

public:
	ARTSCore_GameState(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;
};
