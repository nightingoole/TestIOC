#include "Service/UserService.h"

#include "IOCContainer.h"


FUserService::FUserService()
{
	if (UIOCContainer::Container.IsRegistered<IUserRepository>())
		UserRepository = UIOCContainer::Container.GetInstance<IUserRepository>();
}

bool FUserService::PostLogin(FString Username, FString Password)
{
	UE_LOG(LogTemp, Warning, TEXT("Search Username: %s from database"), *Username)
	UserRepository->FindUserByUsername(Username);
	if (Username != "penghaowen")
	{
		return true;
	}
	return false;
}
