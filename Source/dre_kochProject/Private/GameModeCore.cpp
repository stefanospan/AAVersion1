#include "GameModeCore.h"
#include "GenericPlatform/GenericPlatformMisc.h"

void AGameModeCore::ShutdownServer()
{

#if WITH_EDITOR
	UE_LOG(LogTemp, Warning, TEXT("Requested server shutdown but aborted due to PIE."));
#else
	FGenericPlatformMisc::RequestExit(false);
#endif

}