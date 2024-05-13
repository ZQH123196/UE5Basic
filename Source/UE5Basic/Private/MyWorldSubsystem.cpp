// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWorldSubsystem.h"
#include "Logging/StructuredLog.h"
#include <string>


// UMyWorldSubsystem 启动会初始化一次，是 editor，开启 pie 会在初始化一次，是游戏的 world
void UMyWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection) {
	Super::Initialize(Collection);
	UE_LOGFMT(LogTemp, Warning, "UMyWorldSubsystem Initialize!");
}

void UMyWorldSubsystem::Deinitialize() {
	Super::Deinitialize();
	UE_LOGFMT(LogTemp, Warning, "UMyWorldSubsystem Deinitialize!");
}


