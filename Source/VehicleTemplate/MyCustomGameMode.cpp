// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomGameMode.h"
#include "VehicleTemplatePawn.h"
#include "VehicleTemplateHud.h"
#include "MyCustomPlayerState.h"
#include "MyCustomGameStateBase.h"

AMyCustomGameMode::AMyCustomGameMode() {
	DefaultPawnClass = AVehicleTemplatePawn::StaticClass();
	HUDClass = AVehicleTemplateHud::StaticClass();
	PlayerStateClass = AMyCustomPlayerState::StaticClass();
	GameStateClass = AMyCustomGameStateBase::StaticClass();
}



