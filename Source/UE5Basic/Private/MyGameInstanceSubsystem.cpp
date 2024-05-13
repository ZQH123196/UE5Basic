// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"

#include "Logging/StructuredLog.h"

void UMyGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection) {
	Super::Initialize(Collection);
	UE_LOGFMT(LogTemp, Warning, "UMyGameInstanceSubsystem Initialize!");
}

void UMyGameInstanceSubsystem::Deinitialize() {
	Super::Deinitialize();
	UE_LOGFMT(LogTemp, Warning, "UMyGameInstanceSubsystem Deinitialize!");
}
