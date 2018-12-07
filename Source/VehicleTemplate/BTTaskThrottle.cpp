// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskThrottle.h"
#include <Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h>
#include <Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h>
#include <Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h>
#include "AIWheeledVehicleController.h"
#include "WheeledVehicleMovementComponent4W.h"

EBTNodeResult::Type UBTTaskThrottle::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAIWheeledVehicleController* AIController = Cast<AAIWheeledVehicleController>(OwnerComp.GetAIOwner());

	if (AIController) {
		float throttle;
		//Use RandRange from FMath to generatoe a random throttle
		throttle = AIController->BlackboardComp->GetValueAsFloat("ThrottleValue");

		AIController->VehicleMovementComp->SetThrottleInput(throttle);
		//AIController->BlackboardComp->SetValueAsFloat("ThrottleValue", throttle);
		//inform BT this node has successfully completed its task
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}

void UBTTaskThrottle::OnGameplayTaskActivated(UGameplayTask & task)
{
	//This method must be overridden
	//Otherwise, the linker will fail.
}


