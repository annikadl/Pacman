// Fill out your copyright notice in the Description page of Project Settings.

#include "PacmanGameModeBase.h"

APacmanGameModeBase::APacmanGameModeBase()
{
	Lives = InitialLives;
}

void APacmanGameModeBase::PointEat(bool IsSpecial)
{
	//punti


	if (IsSpecial)
	{
		//ricordare che se mangia palle speciali può mangiare i fantasmi
		TotalScore += SpecialPointsValue;

	}
	else
	{
		TotalScore += NormalPointsValue;
	}

}

