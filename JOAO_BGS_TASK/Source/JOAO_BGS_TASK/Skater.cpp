// Fill out your copyright notice in the Description page of Project Settings.


#include "Skater.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ASkater::ASkater()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = false;
    bUseControllerRotationYaw = false;

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

	//Player movements
	PlayerInputComponent->BindAxis("MoveForward", this, &ASkater::MoveForward);
	PlayerInputComponent->BindAxis("Break", this, &ASkater::Break);
	PlayerInputComponent->BindAxis("TurnChar", this, &ASkater::CharTurn);

	//Camera movements
	PlayerInputComponent->BindAxis("TurnCam", this, &ASkater::TurnAtRate);
    PlayerInputComponent->BindAxis("LookUp", this, &ASkater::LookUpAtRate);

	//Jumping action
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASkater::SkateJump);

}

void ASkater::MoveForward(float Value){
	IsAccelerating = (Value > 0.0f);
}

void ASkater::Break(float Value){
	if (Value > 0.0f) // Only apply break when value is positive
	{
		IsAccelerating = false;
		Decel = 300.0f;
	}
	else
	{
		Decel = 100.0f; // Reset deceleration to normal when not breaking
	}
}

//Turn the character
void ASkater::CharTurn(float Value){
	AddActorLocalRotation(FRotator(0.0f, Value * DefTurnRate * GetWorld()->GetDeltaSeconds(), 0.0f));
}

//Control the camera
void ASkater::TurnAtRate(float Rate){
	AddControllerYawInput(Rate * DefTurnRate * GetWorld()->GetDeltaSeconds());
}
 
void ASkater::LookUpAtRate(float Rate){
	AddControllerPitchInput(Rate * DefLookUpRate * GetWorld()->GetDeltaSeconds());
}

//Jump action
void ASkater::SkateJump(){
	LaunchCharacter(FVector(0.0f, 0.0f, 600.0f), false, false);
}