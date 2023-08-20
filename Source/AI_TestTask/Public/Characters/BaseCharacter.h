// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"


UCLASS(config=Game)
class ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();

	UFUNCTION(BlueprintCallable)
	void UpdateWalkSpeed(float NewSpeed);

protected:
	
	// To add mapping context
	virtual void BeginPlay();

	UFUNCTION()
	void HandleDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	virtual void HandleDeath();
	
	UPROPERTY(BlueprintReadOnly)
	float Health = 100.0f;

	UPROPERTY(BlueprintReadOnly)
	bool IsDead = false;
};

