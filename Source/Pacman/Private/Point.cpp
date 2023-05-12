#include "Point.h"
#include "PacmanGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundWave.h"


APoint::APoint()
{
	PrimaryActorTick.bCanEverTick = false;

	PointMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PointMesh"));
	
}

void APoint::Eat()
{
	// numero punti
	if (APacmanGameModeBase* GameMode = Cast<APacmanGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		UGameplayStatics::PlaySound2D(this, pacman_food);
		GameMode->PointEat(bIsSpecial);
		Destroy();
	}
}

void APoint::SetSpecial(bool bSpecial)
{
	bIsSpecial = bSpecial;
	if (bIsSpecial)
	{
		SetActorRelativeScale3D(FVector(SpecialScale));
	}
}

bool APoint::GetSpecial()
{
	return bIsSpecial;
}


void APoint::BeginPlay()
{
	Super::BeginPlay();
	SetSpecial(bIsSpecial);
}
