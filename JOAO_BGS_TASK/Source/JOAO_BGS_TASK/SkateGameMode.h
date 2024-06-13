// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SkateGameMode.generated.h"

/**
 * 
 */
UCLASS()
class JOAO_BGS_TASK_API ASkateGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASkateGameMode();

	void UpdateScore(int32 Points);

private:
	int32 Score;

};
