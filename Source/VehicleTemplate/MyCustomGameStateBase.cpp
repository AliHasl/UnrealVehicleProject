// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomGameStateBase.h"
#include <Engine/Engine.h>

AMyCustomGameStateBase::AMyCustomGameStateBase() {
	
}

void AMyCustomGameStateBase::BeginPlay() {
	Super::BeginPlay();

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Using CustomGameState."));
	}
}


