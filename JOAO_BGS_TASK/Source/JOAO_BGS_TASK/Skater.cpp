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


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
    SpringArm->TargetArmLength = 300.0f;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkaterMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/PolygonCity/Meshes/Characters/SK_Character_Male_Hoodie.SK_Character_Male_Hoodie"));
	if (SkaterMesh.Succeeded())
	{
		MeshComponent->SetSkeletalMesh(SkaterMesh.Object);
	}
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
		CurrSpeed = 0.0f;
	}

	AddMovementInput(GetActorForwardVector(), CurrSpeed * DeltaTime);

}

// Called to bind functionality to input
void ASkater::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Accelerate", this, &ASkater::Accelerate);

	PlayerInputComponent->BindAxis("Turn", this, &ASkater::TurnAtRate);
    PlayerInputComponent->BindAxis("LookUp", this, &ASkater::LookUpAtRate);

}

void ASkater::Accelerate(float Value){
	IsAccelerating = (Value > 0.0f);
}

void ASkater::TurnAtRate(float Rate){
	AddControllerYawInput(Rate * DefTurnRate * GetWorld()->GetDeltaSeconds());
}

void ASkater::LookUpAtRate(float Rate){
	AddControllerPitchInput(Rate * DefLookUpRate * GetWorld()->GetDeltaSeconds());
}