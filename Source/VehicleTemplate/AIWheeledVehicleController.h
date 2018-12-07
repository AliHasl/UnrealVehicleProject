// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "AIController.h"
#include <BehaviorTree/BlackboardComponent.h>
#include <WheeledVehicleMovementComponent.h>
#include <BehaviorTree/BehaviorTree.h>
#include "Checkpoints.h"
#include "AIWheeledVehicleController.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API AAIWheeledVehicleController : public AAIController
{
	GENERATED_BODY()
	
public:

	AAIWheeledVehicleController();

	//A Cached Vehicle movement component
	class UWheeledVehicleMovementComponent* VehicleMovementComp;

	// a cached BT component
	class UBehaviorTreeComponent* BehaviorTreeComp;

	//a cached Blackboard Component
	class UBlackboardComponent* BlackboardComp;

	//override Posses to handle additional setup
	virtual void Possess(APawn* InPawn) override;

	//override Tick to create some autonomous behaviours
	virtual void Tick(float DeltaSeconds) override;
	
	void IterateCheckpoint();
	int MyCurrentCheckpoint();

private:
	int currentCheckpoint;
};
