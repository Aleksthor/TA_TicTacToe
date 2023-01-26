// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MainController.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TA_TICTACTOE_API AMainController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	TArray<UStaticMeshComponent*> Spheres;


	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;


	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;


	UPROPERTY(EditAnywhere)
	UMaterial* Red;
	UPROPERTY(EditAnywhere)
	UMaterial* Blue;
	UPROPERTY(EditAnywhere)
	UMaterial* White;

	int TurnCounter;

	TArray<bool> SphereStatus;



	void OnePressed();
	void TwoPressed();
	void ThreePressed();
	void FourPressed();
	void FivePressed();
	void SixPressed();
	void SevenPressed();
	void EightPressed();
	void NinePressed();

	void TurnController(int sphereindex);


};
