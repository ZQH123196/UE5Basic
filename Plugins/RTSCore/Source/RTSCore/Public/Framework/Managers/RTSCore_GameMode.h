// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RTSCore_GameMode.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class RTSCORE_API ARTSCore_GameMode : public AGameModeBase {
	GENERATED_BODY()

public:
	ARTSCore_GameMode(const FObjectInitializer& ObjectInitializer);
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void InitGameState() override;
	virtual void GenericPlayerInitialization(AController* Controller) override;

protected:
	UPROPERTY()
	TArray<APlayerController*> SessionPlayers;
};
