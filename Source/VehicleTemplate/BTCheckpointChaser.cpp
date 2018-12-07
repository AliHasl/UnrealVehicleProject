// Fill out your copyright notice in the Description page of Project Settings.

#include "BTCheckpointChaser.h"
#include "AIWheeledVehicleController.h"
#include <EngineUtils.h>
#include "Checkpoints.h"

void UBTCheckpointChaser::OnGameplayTaskActivated(UGameplayTask & task)
{
	//nothing here
	//This method must be overridden from the inherited interface
	//Otherwise, the linker will fail.
}

void UBTCheckpointChaser::OnGameplayTaskDeactivated(UGameplayTask & task)
{
	//nothing here
	//This method must be overridden from the inherited interface
	//Otherwise, the linker will fail.
}

void UBTCheckpointChaser::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	
	UWorld* world = OwnerComp.GetWorld();
	AAIWheeledVehicleController* AIController = Cast<AAIWheeledVehicleController>(OwnerComp.GetAIOwner());

	TActorIterator<ACheckpoints>checkpoints(world);
	
	int current = AIController->BlackboardComp->GetValueAsInt("CurrentCheckpoint");

	FVector checkpointLocation = checkpoints->GetCurrentCheck(current)->GetActorLocation();
	FVector myLocation = AIController->BlackboardComp->GetValueAsVector("MyLocation");
	AIController->BlackboardComp->SetValueAsVector("TargetLocation", checkpointLocation);

	FVector direction = checkpointLocation - myLocation;
	AIController->BlackboardComp->SetValueAsVector("Direction", direction);

	float distance = FVector::Distance(checkpointLocation, myLocation);
	AIController->BlackboardComp->SetValueAsFloat("DistanceFromTarget", distance);


	FVector myRight = OwnerComp.GetOwner()->GetActorRightVector();
	
	

	//myForward.Normalize();
	myLocation.Normalize();
	direction.Normalize();

	float dotProduct = FVector::DotProduct(direction, myRight);



	FVector myForward = OwnerComp.GetOwner()->GetActorForwardVector();
	myForward.Normalize();
	float rightDotProduct = FVector::DotProduct(myForward, direction);

	//rightvector - direction give me the back forward./


	AIController->BlackboardComp->SetValueAsFloat("SteeringValue", dotProduct);

	AIController->BlackboardComp->SetValueAsFloat("ThrottleValue", rightDotProduct);


}

