#pragma once
#include "Service/UserService.h"

class FLoginController
{
	TSharedPtr<IUserService> UserService;

public:

	FLoginController();
	
	void Login(FString Username, FString Password);
};
