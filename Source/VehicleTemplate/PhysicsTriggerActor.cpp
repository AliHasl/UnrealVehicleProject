// Fill out your copyright notice in the Description page of Project Settings.

#include "PhysicsTriggerActor.h"
#include <Components/StaticMeshComponent.h>
#include <WheeledVehicle.h>
#include <Engine.h>
#include "MyCustomPlayerState.h"
#include "AIWheeledVehicleController.h"
#include <Runtime/Engine/Classes/GameFramework/Pawn.h>
#include <WheeledVehicleMovementComponent.h>

// Sets default values
APhysicsTriggerActor::APhysicsTriggerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	MeshComponent->SetupAttachment(RootComponent);

	//Register OnBeginOverlap function as an OnActorBeginOverlap delegate
	OnActorBeginOverlap.AddDynamic(this, &APhysicsTriggerActor::OnBeginOverlap);
	//Register OnEndOverlap function as an OnActorEndOverlap delegate
	OnActorEndOverlap.AddDynamic(this, &APhysicsTriggerActor::OnEndOverlap);
	//Register OnHit function as an OnActorHitOverlap delegate
	OnActorHit.AddDynamic(this, &APhysicsTriggerActor::OnHit);

}

// Called when the game starts or when spawned
void APhysicsTriggerActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APhysicsTriggerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APhysicsTriggerActor::OnBeginOverlap(AActor * OverlappedActor, AActor * OtherActor)
{
	AWheeledVehicle* Vehicle = Cast<AWheeledVehicle>(OtherActor);

	if (!Vehicle || OtherActor == this) return;

	UWorld* world = GetWorld();

	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, (TEXT("%s"), this->GetName()));

	AAIWheeledVehicleController* control = Cast<AAIWheeledVehicleController>(Vehicle->GetController());
	if (control) {
		if (FString::FromInt(control->MyCurrentCheckpoint()) == this->GetName())
		{
			//FVector vehicleLocation = control->BlackboardComp->GetValueAsVector("MyLocation");
			FVector vehicleLocation = Vehicle->GetVelocity();
			FVector checkLocation = this->GetActorForwardVector();
			if (FVector::DotProduct(vehicleLocation, checkLocation) > 0) {
				GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("correct"));
				control->IterateCheckpoint();
			}
			else {
				GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Cyan, TEXT("wrong way"));
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Red, TEXT("wrong"));
		}
	}
	
	
	/*
	AMyCustomPlayerState* thisPlayerState = Cast<AMyCustomPlayerState>(world->GetGameState()->PlayerArray[0]);

	if (thisPlayerState)
	{
	thisPlayerState->IterateCheckpoint();
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("playerstate found"));
	}
	*/
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("Begin Overlap"));

	UWheeledVehicleMovementComponent* MoveComp = Vehicle->GetVehicleMovement();

	float ImpulseMagnitude = FMath::RandRange(-1500, 1500);
	FVector Impulse = Vehicle->GetActorForwardVector()*ImpulseMagnitude;

	Vehicle->GetMesh()->AddImpulse(Impulse, TEXT("Vehicle_Base"), true);
	Vehicle->UpdateAllReplicatedComponents();
}

void APhysicsTriggerActor::OnEndOverlap(AActor * OverlappedActor, AActor * OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("End Overlap"));
}

void APhysicsTriggerActor::OnHit(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, TEXT("A hit event"));
}

