

#include "Phantom.h"
#include "PacmanActor.h"
#include "PacmanGameModeBase.h"
#include "Components/SphereComponent.h"
#include <Kismet/GameplayStatics.h>
#include "Sound/SoundWave.h"
#include "DrawDebugHelpers.h"


APhantom::APhantom()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PhantomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PhantomMesh"));
	PhantomMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// Set as root component
	RootComponent = PhantomMesh;

	//// Sfera per collission
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(1.5f);
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComp->SetupAttachment(RootComponent);
}

// Chiamata quando parte il gioco o quando viene spawnato
void APhantom::BeginPlay()
{
	Super::BeginPlay();
	//Listen for overlaps
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &APhantom::OnOverlap);

	//start scatter-chase alternation
	GetWorld()->GetTimerManager().SetTimer(ScatterTimerHandle, this, &APhantom::OnScatterTimerExpired, ScatterDuration, false);
}

// Called every frame
void APhantom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Grid)
	{
		
		int XTileActor, YTileActor = 0;
		Grid->GetTileFromWorld(GetActorLocation(), XTileActor, YTileActor);
		
		if (XTileActor == XTileDestination && YTileActor == YTileDestination)
		{
			//MActor a destinazione
			SetActorLocation(Destination);

			//Teleport 
			if (Grid->GetTileValue(XTileActor, YTileActor) == 'T')
			{
				if (YTileActor == 0)
					SetActorLocation(Grid->GetGridSpecialPosition(RightTeleport));
				else
					SetActorLocation(Grid->GetGridSpecialPosition(LeftTeleport));
			}

			//Prendo la nuova destinazione
			Destination = Grid->GetNextDestination( GetTargetPosition(), GetActorLocation(), MovementDir, NextMovementDir);
			Grid->GetTileFromWorld(Destination, XTileDestination, YTileDestination);

			// inverto la direzione
			MovementDir = NextMovementDir;
		}

		//Mi muovo
		FVector NextPosition = GetActorLocation() + (MovementDir * (Speed * SpeedMultiplier * DeltaTime));
		//senza spostare mai asse z
		NextPosition.Z = 0;
		SetActorLocation(NextPosition, true);
	}

	if (GetState() == EState::Dead)
	{
		int XTileDead = 0, YTileDead = 0;
		Grid->GetTileFromWorld(GetActorLocation(), XTileDead, YTileDead);

		if (XTileDead == 11 && YTileDead == 13)
			ChangeState(EState::Chase);
	}
}

void APhantom::SetGrid(AGrid * NewGrid)
{
	Grid = NewGrid;
	Destination = Grid->GetNextDestination(GetTargetPosition(), GetActorLocation(), MovementDir, NextMovementDir);
	Grid->GetTileFromWorld(Destination, XTileDestination, YTileDestination);
}

EState APhantom::GetState()
{
	return CurrentState;
}

void APhantom::ChangeState(EState NewState)
{
	if (NewState != CurrentState)
	{
		CurrentState = NewState;
	}
}

void APhantom::SetSpeedMultiplier(float Value)
{
	SpeedMultiplier = Value;
}

void APhantom::ChangeScatterPosition(EGridPositions NewPosition)
{
	ScatterPosition = NewPosition;
}

void APhantom::OnOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->IsA(APacmanActor::StaticClass())) {
		APacmanActor* Pacman = Cast<APacmanActor>(OtherActor);

		if (!Pacman->IsPacmanInvincible()) {
			UGameplayStatics::PlaySound2D(this, minuslife);
			APacmanGameModeBase* GameMode = Cast<APacmanGameModeBase>(GetWorld()->GetAuthGameMode());
			GameMode->Lives--;
			GameMode->IsLifeDown = true;
		}
	}
}

//mi sa che non sta funzionando proprio bene (a volte i fantasmi volano)
void APhantom::ChangeDirection()
{
	if (Grid)
	{
		MovementDir *= -1.0f;
		Destination = Grid->GetNextDestination(GetTargetPosition(), GetActorLocation(), MovementDir, NextMovementDir);
		Grid->GetTileFromWorld(Destination, XTileDestination, YTileDestination);
	}
}

//Cambio tra scatter e chase
void APhantom::OnScatterTimerExpired()
{
	ChangeState(EState::Chase);
}


// cambio target un base allo state 
FVector APhantom::GetTargetPosition()
{
	switch (CurrentState)
	{
	case EState::Chase:
	{
		SetSpeedMultiplier(1.0f);
		return Grid->GetGridSpecialPosition(EGridPositions::PlayerPosition);
		break;
	}
	case EState::Scatter:
	{
		SetSpeedMultiplier(1.0f);
		return Grid->GetGridSpecialPosition(ScatterPosition);
		break;
	}
	case EState::Frightened:
	{
		if (Grid)
		{
			SetSpeedMultiplier(0.7f);
			return Grid->GetGridSpecialPosition(GhostsHouse);
		}
		break;
	}
	case EState::Dead:
	{
		if (Grid)
		{
			SetSpeedMultiplier(3.0f);
			return Grid->GetGridSpecialPosition(GhostsHouse);
		}
		break;
	}
	default:
		break;
	}
	return FVector();
}
