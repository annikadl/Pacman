// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PacmanGrid.generated.h"

class AStaticMeshActor;
class APoint;
class APacmanActor;
class APhantom;

//Direzione 
enum class EDirection : uint8
{
	Up,
	Down,
	Left,
	Right,
};

// Posizioni speciali
UENUM(BlueprintType)
enum class EGridPositions : uint8
{
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
	PlayerPosition,
	Middle,
	LeftTeleport,
	RightTeleport
};

 
enum class ESearchOrder : uint8
{
	MinDistance,
	Random
};


USTRUCT()
struct FTileSelection
{
	GENERATED_USTRUCT_BODY()
	int XTile = 0;
	int YTile = 0;
	FVector TileDirection = FVector(0.0, -1.0f, 0.0f);

	FTileSelection()
	{

	}

	FTileSelection(int NewX, int NewY, FVector NewDir)
	{
		XTile = NewX;
		YTile = NewY;
		TileDirection = NewDir;
	}


	int GetManhattanDistance(int XTargetTile, int YTargetTile)
	{
		return  FMath::Abs(XTargetTile - XTile) + FMath::Abs(YTargetTile - YTile);
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACMAN_API AGrid : public AActor
{
	GENERATED_BODY()

public:	
	// valori di default
	AGrid();

	// cose da spawnare
	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	TSubclassOf<AStaticMeshActor> WallClass;

	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	TSubclassOf<APoint> PointClass;

	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	TSubclassOf<APacmanActor> PacmanActorClass;

	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	TArray<TSubclassOf<APhantom>> PhantomClasses;

	UPROPERTY(EditDefaultsOnly, Category = "Pacman")
	int GridScale = 100;

	UFUNCTION(BlueprintCallable, Category = "Pacman")
	APacmanActor* GetPacman() { return PacmanActor; }

	// il movimento che voglio fare è lecito?
	bool CanPlayerMoveInDir(EDirection NewDirection);

	bool CanMoveToTile(const int& XTile, const int& YTile);

	// verifica se ci possiamo muovere verso la prossima direzione
	bool CalculateNewDestination(EDirection NewDirection, FVector& Destination);

	// posizione in casi speciali
	FVector GetGridSpecialPosition(EGridPositions GridChoice);

	// ritorno prossimaa destinazione
	// PositionToGo - dove voglio andare
	// CurrentPosition - posizionei corrente
	// CurrentDirection - Cdirezione del moviemto corrente
	// NextDirection - nuova dir dopo aver raggiunto la nuova dire
	FVector GetNextDestination(const FVector& PositionToGo, const FVector& CurrentPosition, const FVector& CurrentDirection, FVector& NextDirection, ESearchOrder SearchOrder = ESearchOrder::MinDistance);

	FVector GetVectorDirection(const EDirection& NewDirection);

protected:
	// chiamata quando paret il gioco
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	APacmanActor* PacmanActor = nullptr;

	// posizione sulla griglia da pos assoluta
	float Converser = 1.0f;

	// tile x,y da abs
	void GetTileFromWorld(const FVector& WorldPosition, int& XTile, int& YTile);

	// tile char da xtile e ytile
	char GetTileValue(int& XTile, int& YTile);

private:
	// pos abs
	FVector GetWorldFromTile(const int& XTile, const int& YTile);

	// agg con nuova direzione
	void GetTileInDir(EDirection NextDirection, int& XTile, int& YTile);

	TArray<FTileSelection>GetPossibleTiles(int XTile, int YTile, EDirection CurrentDir);

	EDirection GetDirection(const FVector& Dir);

	TArray<APhantom*> Phantoms;
};
