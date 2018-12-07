// Fill out your copyright notice in the Description page of Project Settings.

#include "BTSteeringService.h"
#include <EngineUtils.h>
#include <BehaviorTree/BlackboardComponent.h>
#include "VehicleTemplatePawn.h"
#include "AIWheeledVehicleController.h"

void UBTSteeringService::OnGameplayTaskActivated(UGameplayTask & task)
{
	//nothing here
	//This method must be overridden from the inherited interface
	//Otherwise, the linker will fail.
}

void UBTSteeringService::OnGameplayTaskDeactivated(UGameplayTask & task)
{
	//nothing here
	//This method must be overridden from the inherited interface
	//Otherwise, the linker will fail.
}

void UBTSteeringService::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	UWorld* world = OwnerComp.GetWorld();
	AAIWheeledVehicleController* AIController = Cast<AAIWheeledVehicleController>(OwnerComp.GetAIOwner());

	TActorIterator<AVehicleTemplatePawn> PlayerPawnIter(world);
	//Not particularly robust, but at least here we are dealing with only one player
	PlayerPawn = *PlayerPawnIter;

	FVector playerLocation = PlayerPawn->GetActorLocation();
	FVector myLocation = AIController->BlackboardComp->GetValueAsVector("MyLocation");
	AIController->BlackboardComp->SetValueAsVector("TargetLocation", playerLocation);

	FVector direction = playerLocation - myLocation;

	FVector myRight = OwnerComp.GetOwner()->GetActorRightVector();

	AIController->BlackboardComp->SetValueAsVector("Direction", direction);
	
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
