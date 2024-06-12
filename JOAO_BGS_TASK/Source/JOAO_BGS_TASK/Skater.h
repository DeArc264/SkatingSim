// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Skater.generated.h"


UCLASS()
class JOAO_BGS_TASK_API ASkater : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASkater();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Character acceleration
	void MoveForward(float value);
	void Break(float value);

	//Camera rotation
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	void SkateJump();

private:
	//Movement variables
	float CurrSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float MaxSpeed = 2500.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
		float Accel = 100.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
		float Decel = 90.0f;

	bool IsAccelerating;
	bool IsJumping;

	//Camera variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		float DefTurnRate = 45.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		float DefLookUpRate = -45.0f;
};
