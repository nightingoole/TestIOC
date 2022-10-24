// Fill out your copyright notice in the Description page of Project Settings.


#include "Repository/UserRepository.h"

bool FUserRepository::FindUserByUsername(FString Username)
{
	UE_LOG(LogTemp, Warning, TEXT("Search Username: %s from database"), *Username)
	if (Username != "penghaowen")
	{
		return true;
	}
	return false;
}
