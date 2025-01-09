// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_PlayerLocationIfSeen.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UBTService_PlayerLocationIfSeen::UBTService_PlayerLocationIfSeen() {
	NodeName = "Update Player Location If Seen";
}
void UBTService_PlayerLocationIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) {
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn == nullptr) {
		return;
	}

	AAIController* AICharacter = OwnerComp.GetAIOwner();

	if (AICharacter == nullptr) {
		return;
	}

	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();

	if (Blackboard == nullptr) {
		return;
	}

	if (AICharacter->LineOfSightTo(PlayerPawn)) {
		Blackboard->SetValueAsObject(GetSelectedBlackboardKey(), PlayerPawn);
	}
	else {
		Blackboard->ClearValue(GetSelectedBlackboardKey());
	}

}
