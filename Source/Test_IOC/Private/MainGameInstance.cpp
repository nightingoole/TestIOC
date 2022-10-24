// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameInstance.h"

#include "IOCContainer.h"
#include "Repository/UserRepository.h"
#include "Service/UserService.h"

UMainGameInstance::UMainGameInstance()
{
	UIOCContainer::Container.RegisterClass<IUserRepository, FUserRepository>();
	UIOCContainer::Container.RegisterClass<IUserService, FUserService>();
}
