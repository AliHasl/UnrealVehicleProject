// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsTriggerActor.h"
#include "Checkpoints.generated.h"

#define CHECKPOINT_NUM 8

UCLASS()
class VEHICLETEMPLATE_API ACheckpoints : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckpoints();

	UPROPERTY(EditAnywhere)
		APhysicsTriggerActor* checkpoints[CHECKPOINT_NUM];

	APhysicsTriggerActor** GetCheckpoints();

	int GetNextCheckID(int);

	APhysicsTriggerActor* GetCurrentCheck(int);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
