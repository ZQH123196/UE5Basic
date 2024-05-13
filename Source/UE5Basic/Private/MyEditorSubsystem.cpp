// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEditorSubsystem.h"

#include "Logging/StructuredLog.h"

void UMyEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection) {
	Super::Initialize(Collection);
	UE_LOGFMT(LogTemp, Warning, "UMyEditorSubsystem Initialize!");
}

void UMyEditorSubsystem::Deinitialize() {
	Super::Deinitialize();
	UE_LOGFMT(LogTemp, Warning, "UMyEditorSubsystem Initialize!");
}
