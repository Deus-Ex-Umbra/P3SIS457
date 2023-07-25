#include "P3SIS457GameModeBase.h"
#include "Lapiz.h"
#include "FabricaDeLapiz.h"

AP3SIS457GameModeBase::AP3SIS457GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	CantidadLapices = FMath::RandRange(1, 4);
	Lapices = {};
	Contador = 0;
	Tiempo = 0.0f;
}

void AP3SIS457GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	FabricaLapices = GetWorld()->SpawnActor<AFabricaDeLapiz>(AFabricaDeLapiz::StaticClass());
	for (int i = 0; i < CantidadLapices; i++) {
		Lapices.Add(FabricaLapices->Fabricar(FMath::RandRange(1, 3)));
	}
	FVector Locacion = FVector(-230.0f, -40.0f, 170.0f);
	for (auto& Lapiz : Lapices) {
		Lapiz->SetActorLocation(Locacion);
		Lapiz->SetActorRotation(FRotator(0.0f, 270.0f, 0.0f));
		Locacion += FVector(0.0f, 20.0f, 0.0f);
	}
}

void AP3SIS457GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Tiempo >= 5.0f) {
		Lapices[Contador]->MoverLapiz();
		GEngine->AddOnScreenDebugMessage(1, 5.0f, Lapices[Contador]->LapizColor, FString::Printf(TEXT("Lapiz N°%i: %s"), Contador + 1, *Lapices[Contador]->LapizNombre));
		Contador = (Contador != Lapices.Num() - 1) ? Contador + 1 : 0;
		Tiempo = 0.0f;
	}
	Tiempo += DeltaTime;
}
