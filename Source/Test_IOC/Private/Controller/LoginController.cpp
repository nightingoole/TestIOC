#include "Controller/LoginController.h"

#include "IOCContainer.h"

FLoginController::FLoginController()
{
	if (UIOCContainer::Container.IsRegistered<IUserService>())
		UserService = UIOCContainer::Container.GetInstance<IUserService>();
}

void FLoginController::Login(FString Username, FString Password)
{
	if (UserService->PostLogin(Username, Password))
	{
		UE_LOG(LogTemp, Warning, TEXT("User named: %s found!"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("User named: %s not found!"))
	}
}
