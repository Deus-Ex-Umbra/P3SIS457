#include "FabricaDeLapiz.h"
#include "Lapiz.h"
#include "LapizRojo.h"
#include "LapizAzul.h"
#include "LapizNegro.h"

AFabricaDeLapiz::AFabricaDeLapiz()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFabricaDeLapiz::BeginPlay()
{
	Super::BeginPlay();
}

void AFabricaDeLapiz::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

ALapiz* AFabricaDeLapiz::Fabricar(int _numeroLapiz)
{
	switch (_numeroLapiz)
	{
	case 1:
		return GetWorld()->SpawnActor<ALapizRojo>();
	case 2:
		return GetWorld()->SpawnActor<ALapizAzul>();
	default:
		return GetWorld()->SpawnActor<ALapizNegro>();
	}
}

