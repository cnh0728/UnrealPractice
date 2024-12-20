// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"


// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
}

UTriggerComponent::UTriggerComponent() {
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Actor = GetAcceptableActor();

	if (Actor != nullptr) {
		//GetRootComponent는 USceneComponent를 반환하는데, UPrimitiveComponent가 USceneComponent를 상속하기 때문에 Cast가 가능
		//Cast는 안전하게 Cast가 되면 캐스팅해주고, 안되면 nullptr반환
		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(Actor->GetRootComponent()); 
		if (Component != nullptr) {
			Component->SetSimulatePhysics(false);
		}
		Actor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
		Mover->SetShouldMove(true);
	}
	else {
		Mover->SetShouldMove(false);
	}
}

void UTriggerComponent::SetMover(UMover* NewMover) {
	Mover = NewMover;
}

AActor* UTriggerComponent::GetAcceptableActor() const {
	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);

	for (AActor* Actor : Actors) {
		if (Actor->ActorHasTag(AcceptableActorTag) && !Actor->ActorHasTag("Grabbed")) {
			return Actor;
		}
	}

	return nullptr;
}