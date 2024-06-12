// Fill out your copyright notice in the Description page of Project Settings.


#include "Skater.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ASkater::ASkater()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASkater::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASkater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsAccelerating){
		CurrSpeed += Accel * DeltaTime;
		CurrSpeed = FMath::Min(CurrSpeed, MaxSpeed);
	}
	else{
		CurrSpeed -= Decel * DeltaTime;
		CurrSpeed = FMath::Max(CurrSpeed, 0.0f);
	}

	AddMovementInput(GetActorForwardVector(), CurrSpeed * DeltaTime);

}

// Called to bind functionality to input
void ASkater::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASkater::MoveForward);

	PlayerInputComponent->BindAxis("Turn", this, &ASkater::TurnAtRate);
    PlayerInputComponent->BindAxis("LookUp", this, &ASkater::LookUpAtRate);

}

void ASkater::MoveForward(float Value){
	IsAccelerating = (Value > 0.0f);
}

void ASkater::TurnAtRate(float Rate){
	AddControllerYawInput(Rate * DefTurnRate * GetWorld()->GetDeltaSeconds());
}

void ASkater::LookUpAtRate(float Rate){
	AddControllerPitchInput(Rate * DefLookUpRate * GetWorld()->GetDeltaSeconds());
}