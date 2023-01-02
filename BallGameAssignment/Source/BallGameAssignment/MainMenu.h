// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class BALLGAMEASSIGNMENT_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

		virtual bool Initialize();

		UPROPERTY(meta = (BindWidget))
		class UButton* StartGame;

		UFUNCTION()
			void StartButtonClicked();
	
};
