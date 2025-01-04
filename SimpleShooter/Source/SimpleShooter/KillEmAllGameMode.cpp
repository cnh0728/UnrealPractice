// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "ShooterAIController.h"

void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled) {
	Super::PawnKilled(PawnKilled);
	
	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController) {
		EndGame(false);
	}

	for (AShooterAIController* Controller : TActorRange<AShooterAIController>(GetWorld())) {
		if (!Controller->IsDead()) {
			return;
		}
	}

	EndGame(true);
}

void AKillEmAllGameMode::EndGame(bool bIsPlayerWinner) {
	for (AController* Controller : TActorRange<AController>(GetWorld())) { //월드에 있는 컨트롤러를 모두 받아와서 List로 반환
		bool bIsPlayer = Controller->IsPlayerController();
		if (bIsPlayer) {
			Controller->GameHasEnded(Controller->GetPawn(), bIsPlayerWinner);
		}
		else {
			Controller->GameHasEnded(Controller->GetPawn(), !bIsPlayerWinner);
		}
	}
}