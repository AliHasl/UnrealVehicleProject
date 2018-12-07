// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskGetNextCheckpoint.h"
#include "AIWheeledVehicleController.h"
#include <EngineUtils.h>
#include "Checkpoints.h"
#include "PhysicsTriggerActor.h"

EBTNodeResult::Type UBTTaskGetNextCheckpoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIWheeledVehicleController* AIController = Cast<AAIWheeledVehicleController>(OwnerComp.GetAIOwner());

	if (AIController) {

		int currentCheck;

		UWorld* world = GetWorld();

		TActorIterator<ACheckpoints>checkpoints(world);

		APhysicsTriggerActor** m_checkpoints = checkpoints->GetCheckpoints();

		currentCheck = AIController->BlackboardComp->GetValueAsInt("CurrentCheckpoint");

		currentCheck = checkpoints->GetNextCheckID(currentCheck);

		AIController->BlackboardComp->SetValueAsInt("CurrentCheckpoint", currentCheck);

		AIController->BlackboardComp->SetValueAsVector("TargetLocation", m_checkpoints[currentCheck]->GetActorLocation());

		return EBTNodeResult::Succeeded;

	}

	return EBTNodeResult::Failed;
}

void UBTTaskGetNextCheckpoint::OnGameplayTaskActivated(UGameplayTask & task)
{
	//NB: this method must be overridden even if it has an empty body
	//otherwise the linker will fail
}



