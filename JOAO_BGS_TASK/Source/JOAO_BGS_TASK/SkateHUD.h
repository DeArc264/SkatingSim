// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SkateHUD.generated.h"

/**
 * 
 */
UCLASS()
class JOAO_BGS_TASK_API ASkateHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	//Default HUD values
	ASkateHUD();

	void SetScore(int32 NewScore);

protected:
	virtual void BeginPlay() override;

	//Function to draw HUD at every frame
	virtual void DrawHUD() override;

private:
	int32 Score;

	//Font for text
	UPROPERTY(EditAnywhere, Category = "HUD");
	UFont* HUDFont;
};
