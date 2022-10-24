// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/TestIOCActor.h"

#include "IOCContainer.h"


// Sets default values
ATestIOCActor::ATestIOCActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (UIOCContainer::Container.IsRegistered<IUserService>())
		UserService = UIOCContainer::Container.GetInstance<IUserService>();
}

// Called when the game starts or when spawned
void ATestIOCActor::BeginPlay()
{
	Super::BeginPlay();
	UserService->PostLogin("penghaowen", "199798");
}

// Called every frame
void ATestIOCActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
