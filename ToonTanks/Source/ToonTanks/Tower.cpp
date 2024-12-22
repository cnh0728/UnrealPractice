// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

void ATower::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	//��ũ�� �Ÿ����ϰ�
	if (Tank) {
		FVector TankLocation = Tank->GetActorLocation();
		if (CheckInRange(TankLocation)) {
			RotateTurret(TankLocation);

		}
	}
}

void ATower::HandleDestruction() {
	Super::HandleDestruction();
	Destroy();
}

void ATower::BeginPlay() {
	Super::BeginPlay();

	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));

	GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &ATower::CheckFireCondition, FireRate, true);
}

void ATower::CheckFireCondition() {
	if (Tank) {
		FVector TankLocation = Tank->GetActorLocation();
		if (CheckInRange(TankLocation) && Tank->bAlive) {
			Fire();
		}
	}
}

bool ATower::CheckInRange(FVector TargetRange) {
	float Distance = FVector::Dist(GetActorLocation(), TargetRange);
	//�����Ÿ� ���̸� �׹������� ȸ��
	if (Distance <= FireRange)
		return true;

	return false;
}
