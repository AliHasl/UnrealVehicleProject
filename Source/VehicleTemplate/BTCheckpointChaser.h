// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTCheckpointChaser.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLETEMPLATE_API UBTCheckpointChaser : public UBTService
{
	GENERATED_BODY()
	
public:

	virtual void OnGameplayTaskActivated(UGameplayTask& task) override;

	virtual void OnGameplayTaskDeactivated(UGameplayTask& task) override;

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
	
};
