// Fill out your copyright notice in the Description page of Project Settings.


#include "SkateHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "UObject/ConstructorHelpers.h"

ASkateHUD::ASkateHUD(){
    // Setting a font
    static ConstructorHelpers::FObjectFinder<UFont> FontObj(TEXT("/Engine/EngineFonts/Roboto"));
    HUDFont = FontObj.Object;
    Score = 0;
}

void ASkateHUD::BeginPlay(){
    Super::BeginPlay();
}

void ASkateHUD::SetScore(int32 NewScore){
    Score = NewScore;
}

void ASkateHUD::DrawHUD(){
    Super::DrawHUD();

    //Display score
    if (HUDFont)
    {
        FString ScoreText = FString::Printf(TEXT("Score: %d"), Score);
        float FontScale = 1.5f;
        int32 FontSize = 60;
        FLinearColor TextColor = FLinearColor::White;

        // Create font render info
        FFontRenderInfo FontRenderInfo = FFontRenderInfo();
        FontRenderInfo.bEnableShadow = true;

        // Get the size of the screen
        FVector2D ScreenDimensions = FVector2D(Canvas->SizeX, Canvas->SizeY);

        // Calculate the size of the text
        float TextWidth, TextHeight;
        GetTextSize(ScoreText, TextWidth, TextHeight, HUDFont, FontScale);

        // Calculate the position of the text (centered at the top)
        FVector2D TextPosition = FVector2D((ScreenDimensions.X - TextWidth) / 2, 50);

        // Draw the text
        FCanvasTextItem TextItem(TextPosition, FText::FromString(ScoreText), HUDFont, TextColor);
        TextItem.Scale = FVector2D(FontScale, FontScale);
        TextItem.FontRenderInfo = FontRenderInfo;
        Canvas->DrawItem(TextItem);
    }
}