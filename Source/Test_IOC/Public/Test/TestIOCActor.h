// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Service/UserService.h"
#include "TestIOCActor.generated.h"

UCLASS()
class TEST_IOC_API ATestIOCActor : public AActor
{
	GENERATED_BODY()

	TSharedPtr<IUserService> UserService;

public:
	// Sets default values for this actor's properties
	ATestIOCActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
