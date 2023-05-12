#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundWave.h"
#include "GameFramework/Actor.h"
#include "PacmanGrid.h"
#include "Phantom.generated.h"

class AGrid;
class USphereComponent;

UENUM(BlueprintType)
enum class EState : uint8
{
	Chase,
	Scatter,
	Frightened,
	Dead
};

UCLASS()
class PACMAN_API APhantom : public AActor
{
	GENERATED_BODY()
	
public:	
	APhantom();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* PhantomMesh = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* CollisionComp = nullptr;

protected:
	virtual void BeginPlay() override;

	// velocità normale
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pacman")
	float Speed = 200.0f;

	// moltiplicatore velocità
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pacman")
	float SpeedMultiplier = 1.0f;

	// alternanza stato fantasmi
	UFUNCTION()
	void OnScatterTimerExpired();

	//UFUNCTION()
	//void OnChaseTimerExpired();

	UPROPERTY(EditAnywhere)
	float ScatterDuration = 7.0f;

	UPROPERTY(EditAnywhere)
	float ChaseDuration = 20.0f;

	FTimerHandle ScatterTimerHandle;
	//FTimerHandle ChaseTimerHandle;

	// posizione per scatter
	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	EGridPositions ScatterPosition = EGridPositions::TopLeft;

	// posizione per frigthned e dead (casa fantasmi)
	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	EGridPositions GhostsHouse = EGridPositions::Middle;

	// posizione Teleport
	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	EGridPositions LeftTeleport = EGridPositions::LeftTeleport;

	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	EGridPositions RightTeleport = EGridPositions::RightTeleport;


public:	
	virtual void Tick(float DeltaTime) override;

	void SetGrid(AGrid* NewGrid);

	void SetStartDirection(FVector StartDirection) { MovementDir = StartDirection; }

	// cambio stato
	void ChangeState(EState NewState);

	// cambio vel
	void SetSpeedMultiplier(float Value);

	// get stato
	EState GetState();

	// cambio scatter position per ogni fantasma
	void ChangeScatterPosition(EGridPositions NewPosition);

	// chiamata quando un attore overlappa qualcosa
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	void ChangeDirection();

protected:

	// stato corrente
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EState CurrentState = EState::Scatter;

	// pos abs a ci andare
	virtual FVector GetTargetPosition();

	// direzione corrente
	FVector MovementDir = FVector(-1.0f, 0.0f, 0.0f);

	// prossima direzione dop oaver raggiunto destinazione
	FVector NextMovementDir = FVector(-1.0f, 0.0f, 0.0f);

	// posizione assoltaa da raggiungere
	FVector Destination = FVector::ZeroVector;

	//Grid Object
	AGrid* Grid = nullptr;

	int XTileDestination = 0;
	int YTileDestination = 0;

private:
	UPROPERTY(EditAnywhere)
	USoundWave* minuslife;

};
