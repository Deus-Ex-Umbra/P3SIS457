#include "Lapiz.h"

ALapiz::ALapiz()
{
	PrimaryActorTick.bCanEverTick = true;
	Escena = CreateDefaultSubobject<USceneComponent>(TEXT("Escena"));
	RootComponent = Escena;
}

void ALapiz::BeginPlay()
{
	Super::BeginPlay();
}

void ALapiz::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

