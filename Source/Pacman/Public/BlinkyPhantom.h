#pragma once

#include "CoreMinimal.h"
#include "Phantom.h"
#include "BlinkyPhantom.generated.h"

UCLASS()
class PACMAN_API ABlinkyPhantom : public APhantom
{
	GENERATED_BODY()

public:

	//Chiamato quando parte il gioco o quando viene spawnato
	virtual void BeginPlay() override;
	
};
