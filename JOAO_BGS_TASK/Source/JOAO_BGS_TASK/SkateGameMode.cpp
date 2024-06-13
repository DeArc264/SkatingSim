// Fill out your copyright notice in the Description page of Project Settings.


#include "SkateGameMode.h"
#include "SkateHUD.h"

ASkateGameMode::ASkateGameMode(){
    HUDClass = ASkateHUD::StaticClass();
    Score = 0;
}

void ASkateGameMode::UpdateScore(int32 Points){
    Score += Points;

    ASkateHUD* SkateHUD = Cast<ASkateHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
    if(SkateHUD){
        SkateHUD->SetScore(Score);
    }
}