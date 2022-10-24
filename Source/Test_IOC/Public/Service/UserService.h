#pragma once
#include "Repository/UserRepository.h"

struct IUserService
{
	virtual ~IUserService() = default;
	virtual bool PostLogin(FString Username, FString Password) = 0;
};

Expose_TNameOf(IUserService)

class FUserService : public IUserService
{
	TSharedPtr<IUserRepository> UserRepository;

public:
	FUserService();

	virtual bool PostLogin(FString Username, FString Password) override;
};
