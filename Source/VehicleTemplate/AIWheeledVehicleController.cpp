// Fill out your copyright notice in the Description page of Project Settings.

#include "AIWheeledVehicleController.h"
#include "AIWheeledVehicle.h"
#include <EngineUtils.h>




AAIWheeledVehicleController::AAIWheeledVehicleController() {
	VehicleMovementComp = NULL;
	BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("AIVehicleBehaviorComp"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("AIVehicleBlackboardComp"));
	
	currentCheckpoint = 0;
}

void AAIWheeledVehicleController::Possess(APawn* InPawn) {
	Super::Possess(InPawn);
	AAIWheeledVehicle* AIVehicle = Cast<AAIWheeledVehicle>(InPawn);

	if (AIVehicle) {
		VehicleMovementComp = AIVehicle->GetVehicleMovementComponent();
		
	}

	if (AIVehicle->BehaviorTree->BlackboardAsset) {
		//Cache and initialise the blackboard comp if the BT has one
		BlackboardComp->InitializeBlackboard(*(AIVehicle->BehaviorTree->BlackboardAsset));
	}
	
	UWorld* world = GetWorld();
	TActorIterator<ACheckpoints>checkpoints(world);

	BlackboardComp->SetValueAsVector("TargetLocation", checkpoints->GetCurrentCheck(currentCheckpoint)->GetActorLocation());

	//FName SelfActor;
	//const FName ThrottleValue;
	//uint8 BlackboardKeyID_Throttle = BlackboardComp->GetKeyID("ThrottleValue");
	//BlackboardComp->SetValueAsFloat("ThrottleValue", 3.2f);
	//float throttle = BlackboardComp->GetValue(BlackboardComp->GetKeyID(ThrottleValue));
	//BlackboardKeyID_SelfActor = BlackboardComp->GetKeyID(SelfActor);
	BlackboardComp->SetValueAsObject("SelfActor", Super::GetPawn());
	
	//Start the behavior tree
	BehaviorTreeComp->StartTree(*AIVehicle->BehaviorTree);
}

void AAIWheeledVehicleController::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
	
	

	BlackboardComp->SetValueAsVector("MyLocation", Super::GetPawn()->GetActorLocation());
	
	/*
	if (VehicleMovementComp != NULL) {
		VehicleMovementComp->SetThrottleInput(1.0f);
		VehicleMovementComp->SetSteeringInput(-1.0f);
	}
	*/
}

void AAIWheeledVehicleController::IterateCheckpoint()
{
	UWorld* world = GetWorld();
	TActorIterator<ACheckpoints>checkpoints(world);

	currentCheckpoint = checkpoints->GetNextCheckID(currentCheckpoint);
	BlackboardComp->SetValueAsInt("CurrentCheckpoint", currentCheckpoint);
	
}

int AAIWheeledVehicleController::MyCurrentCheckpoint()
{
	return currentCheckpoint;
}


