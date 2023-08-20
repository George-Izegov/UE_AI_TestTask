// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BaseAICharacter.h"

ABaseAICharacter::ABaseAICharacter()
{
}

void ABaseAICharacter::BeginPlay()
{
	Super::BeginPlay();

	SpawnOriginLocation = GetActorLocation();
}

void ABaseAICharacter::HandleDeath()
{
	Super::HandleDeath();

	DetachFromControllerPendingDestroy();
}
