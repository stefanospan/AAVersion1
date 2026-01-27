#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeCore.generated.h"

UCLASS()
class DRE_KOCHPROJECT_API AGameModeCore : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category=GameMode)
	void ShutdownServer();
};