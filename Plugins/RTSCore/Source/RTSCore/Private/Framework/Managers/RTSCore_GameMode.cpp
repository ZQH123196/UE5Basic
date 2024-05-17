// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/RTSCore_GameMode.h"
ARTSCore_GameMode::ARTSCore_GameMode(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}

void ARTSCore_GameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) {
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ARTSCore_GameMode::InitGameState() {
	Super::InitGameState();
}

void ARTSCore_GameMode::GenericPlayerInitialization(AController* Controller) {
	Super::GenericPlayerInitialization(Controller);

	if (Controller) {
		if (APlayerController* PlayerController = Cast<APlayerController>(Controller)) {
			SessionPlayers.AddUnique(PlayerController);
		}
	}
}
