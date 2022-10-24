// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

struct IUserRepository
{
	virtual ~IUserRepository() = default;
	virtual bool FindUserByUsername(FString Username) = 0;
};

Expose_TNameOf(IUserRepository)

class FUserRepository : public IUserRepository
{

public:
	
	virtual bool FindUserByUsername(FString Username) override;
};
