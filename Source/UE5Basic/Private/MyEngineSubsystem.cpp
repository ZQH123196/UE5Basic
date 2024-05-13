// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEngineSubsystem.h"

#include "Logging/StructuredLog.h"

void UMyEngineSubsystem::Initialize(FSubsystemCollectionBase& Collection) {
	Super::Initialize(Collection);
	UE_LOGFMT(LogTemp, Warning, "UMyEngineSubsystem Initialize!");
}

void UMyEngineSubsystem::Deinitialize() {
	Super::Deinitialize();
	UE_LOGFMT(LogTemp, Warning, "UMyEngineSubsystem Deinitialize!");
}


