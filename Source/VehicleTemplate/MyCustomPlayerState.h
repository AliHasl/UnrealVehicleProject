// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyCustomPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API AMyCustomPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AMyCustomPlayerState();

	void IterateCheckpoint();

private:
	int checkPast;
	
	
	
	
};
