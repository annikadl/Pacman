#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "PacmanPawn.generated.h"

class APacmanActor;

/*
*  Pawn class, only send inputs to the pacman actor
*/

UCLASS()
class PACMAN_API APacmanPawn : public APawn
{
	GENERATED_BODY()

public:
	
	APacmanPawn();

protected:

	void BeginPlay() override;

public:	

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	//Player input 
	void UpInput();
	void DownInput();
	void RightInput();
	void LeftInput();

	void SearchForPlayer();
	
	APacmanActor* PacmanActor = nullptr;
};
