// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "BaseAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class AI_TESTTASK_API ABaseAICharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:

	ABaseAICharacter();

protected:

	virtual void BeginPlay() override;

	virtual void HandleDeath() override;

	UPROPERTY(BlueprintReadOnly)
	FVector SpawnOriginLocation;
};
