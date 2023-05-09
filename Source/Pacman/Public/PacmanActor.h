#pragma once

#include "CoreMinimal.h"
#include "Phantom.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundWave.h"
#include "GameFramework/Actor.h"
#include "Pacman/Public/PacmanGrid.h"
#include "PacmanActor.generated.h"

class USphereComponent;

UCLASS()
class PACMAN_API APacmanActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Setto valori default
	APacmanActor();

protected:
	// Chiamato quando parte il gioco o quando spawnato
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* PlayerMesh = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* CollisionComp = nullptr;

	// Velocità
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pacman")
	float Speed = 500.0f;

	// Moltiplicatore velocità
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pacman")
	float SpeedMultiplier = 1.0f;

	// Vicini o no destinazione
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pacman")
	float ThresholdRadius = 40.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	EGridPositions LeftTeleport = EGridPositions::LeftTeleport;

	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	EGridPositions RightTeleport = EGridPositions::RightTeleport;

public:	
	virtual void Tick(float DeltaTime) override;

	void SetMovement(EDirection NewDirection);
	
	// quando un actor overlappa
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	void SetGrid(AGrid* NewGrid) { Grid = NewGrid; }

	// Pacman mangia cibo speciale
	UFUNCTION()
	void OnSpeedBoostTimerExpired();

	UPROPERTY(EditAnywhere)
	float SpeedBoostDuration = 3.5f;

	FTimerHandle SpeedBoostTimerHandle;

	// Pacman mangia fantasma
	void OnDeadTimerExpired();

	UPROPERTY(EditAnywhere)
	float DeadDuration = 1.5f;

	FTimerHandle DeadTimerHandle;

	//Pacman invincibile
	bool PacmanIsInvincible = false;
	bool IsPacmanInvincible();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EState PhantomStateBeforeFrightened;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EState PhantomStateBeforeDead;

private:
	// Direzione movimento X,Y. 
	// X => 1 : Right| -1 : Left
	// Y => 1 : Up | -1 : Down
	// Inizo a dx
	FVector MovementDirection = FVector(1.0f, 0.0f, 0.0f);

	// Posso muovermi
	bool bStopMovement = false;

	EDirection CurrentDirection = EDirection::Right;

	AGrid* Grid = nullptr;

	// Destinazione
	FVector Destination = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
	USoundWave* eat_ghost;
};
