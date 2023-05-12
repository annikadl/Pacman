#include "PacmanActor.h"
#include "Components/SphereComponent.h"
#include "Point.h"
#include "Phantom.h"
#include "PacmanGrid.h"
#include "Components/StaticMeshComponent.h"
#include <Kismet/GameplayStatics.h>
#include "Sound/SoundWave.h"
#include "DrawDebugHelpers.h"



// valori default
APacmanActor::APacmanActor()
{
	PrimaryActorTick.bCanEverTick = true;
	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	PlayerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	RootComponent = PlayerMesh;

	// per collision uso sfera
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(1.5f);
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComp->SetupAttachment(RootComponent);
	
}

void APacmanActor::BeginPlay()
{
	Super::BeginPlay();
	//overlaps
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &APacmanActor::OnOverlap);
}


void APacmanActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!bStopMovement)
	{
		bool bCanMove = Grid->CalculateNewDestination(CurrentDirection, Destination);
		// se pos attuale - pos des < 1 sono arrivata, se no continuo a camminare
		FVector NextPosition = GetActorLocation() + (MovementDirection * (Speed * SpeedMultiplier * DeltaTime));
		NextPosition.Z = 0.0f;
		FVector Diff = (Destination - NextPosition) * MovementDirection;
		if (!bCanMove && (FMath::Abs(Diff.Size()) < ThresholdRadius))
		{
			// arrivata
			SetActorLocation(Destination, true);
			bStopMovement = true;
		}
		else
		{
			SetActorLocation(NextPosition, true);
		}

		//Teleport
		int XTile, YTile = 0;
		Grid->GetTileFromWorld(GetActorLocation(), XTile, YTile);

		if (XTile == 14 && YTile == 0)
		{
			SetActorLocation(Grid->GetGridSpecialPosition(RightTeleport));
		}

		if (XTile == 14 && YTile == 28)
		{
			SetActorLocation(Grid->GetGridSpecialPosition(LeftTeleport));
		}
	}
}

void APacmanActor::SetMovement(EDirection NewDirection)
{
	if (NewDirection != CurrentDirection && Grid && Grid->CanPlayerMoveInDir(NewDirection))
	{
		bStopMovement = false;
		CurrentDirection = NewDirection;
		MovementDirection = Grid->GetVectorDirection(CurrentDirection);
	}
}

// TODO: Pacman non può essere mangiato
bool APacmanActor::IsPacmanInvincible()
{
	return PacmanIsInvincible;
}

void APacmanActor::OnSpeedBoostTimerExpired()
{
	SpeedMultiplier = 1.0f;
	PacmanIsInvincible = false;

	TArray<AActor*> Phantoms;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APhantom::StaticClass(), Phantoms);
	for (AActor* Actor : Phantoms)
	{
		APhantom* Phantom = Cast<APhantom>(Actor);
		if (Phantom)
		{
			if(Phantom->GetState() != EState::Dead)
				Phantom->ChangeState(PhantomStateBeforeFrightened);
		}
	}
}


void APacmanActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->IsA(APoint::StaticClass()))
	{
		APoint* Point = Cast<APoint>(OtherActor);
		Point->Eat();
		if (Point->GetSpecial()) {
			// aumento velocità e non può essere mangiato 
			SpeedMultiplier = 2.0f;
			PacmanIsInvincible = true;

			TArray<AActor*> Phantoms;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), APhantom::StaticClass(), Phantoms);
			for (AActor* Actor : Phantoms)
			{
				APhantom* Phantom = Cast<APhantom>(Actor);
				if (Phantom)
				{
					// se i fantasmi sono nello stato frightened
					PhantomStateBeforeFrightened = Phantom->GetState();
					Phantom->ChangeState(EState::Frightened);
				}
			}

			// imposto anche il timer
			GetWorld()->GetTimerManager().SetTimer(SpeedBoostTimerHandle, this, &APacmanActor::OnSpeedBoostTimerExpired, SpeedBoostDuration, false);
			
		}
	}
	// perché non funzionaaaa
	// ora dovrebbe andare
	else if (OtherActor->IsA(APhantom::StaticClass()))
	{
		APhantom* Phantom = Cast<APhantom>(OtherActor);
		if (PacmanIsInvincible)
		{
			UGameplayStatics::PlaySound2D(this, eat_ghost);
			PhantomStateBeforeDead = Phantom->GetState();
			Phantom->ChangeState(EState::Dead);
		}

	}

}


