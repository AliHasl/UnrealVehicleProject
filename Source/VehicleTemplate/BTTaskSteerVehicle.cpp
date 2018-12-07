// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskSteerVehicle.h"
#include <Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h>
#include <Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h>
#include <BehaviorTree/BlackboardComponent.h>
#include "AIWheeledVehicleController.h"
#include "WheeledVehicleMovementComponent4W.h"


EBTNodeResult::Type UBTTaskSteerVehicle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIWheeledVehicleController* AIController = Cast<AAIWheeledVehicleController>(OwnerComp.GetAIOwner());

	if (AIController)
	{
		float Steering;
		//Use RandRange from FMath to generate a random steering angle
		//Steering = FMath::RandRange(-1.0f, 1.0f);

		//Gets the steering value from the blackboard
		Steering = AIController->BlackboardComp->GetValueAsFloat("SteeringValue");

		AIController->VehicleMovementComp->SetSteeringInput(Steering);
		//AIController->BlackboardComp->SetValueAsFloat("SteeringValue", Steering);
		//inform BT this node has successfully completed its task
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}

void UBTTaskSteerVehicle::OnGameplayTaskActivated(UGameplayTask & task)
{
	//NB: this method must be overridden even if it has an empty body
	//otherwise the linker will fail
}
