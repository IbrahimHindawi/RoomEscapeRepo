// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReporter.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UPositionReporter::UPositionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();
	//FString ObjectPos = "X=1Y=2Z=3";
	FString ObjectPos = GetOwner()->GetActorLocation().ToString();
	FString ObjectRot = GetOwner()->GetActorRotation().ToString();
	FString ObjectScl = GetOwner()->GetActorScale().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is at: %s, rotated at: %s, scaled at %s"), *ObjectName, *ObjectPos, *ObjectRot, *ObjectScl)

	// ...
	
}


// Called every frame
void UPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

