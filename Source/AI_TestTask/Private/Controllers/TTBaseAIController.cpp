// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/TTBaseAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void ATTBaseAIController::ActivateAI(bool IsActive)
{
	if (!GetBlackboardComponent())
		return;
	
	GetBlackboardComponent()->SetValueAsBool(FName("IsAIActive"), IsActive);
}
