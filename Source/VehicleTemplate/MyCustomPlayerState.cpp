// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomPlayerState.h"
#include <Engine/Engine.h>

AMyCustomPlayerState::AMyCustomPlayerState() {

	checkPast = 0;

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Emerald, TEXT("Using CustomPlayerState."));
	}
}

void AMyCustomPlayerState::IterateCheckpoint() {

	checkPast++;

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Emerald, TEXT("Past Checkpoint."));
	}
}


