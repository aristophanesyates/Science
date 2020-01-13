// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Scientist.generated.h"

UCLASS()
class PROJECT_API AScientist : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AScientist();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = "player")
	void PlayerRotation(float deltaSeconds);

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MyMEsh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	float Mult = 20.f;

};
