// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

protected:
	virtual void BeginPlay() override;


private:
	UPROPERTY(EditAnywhere, Category = "Combat")
	float FireRange = 300.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float FireRate = 3.f;

	FTimerHandle FireRateTimerHandle;

	class ATank* Tank;

	void CheckFireCondition();

	bool CheckInRange(FVector TargetRange);
};
