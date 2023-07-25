#include "LapizRojo.h"

ALapizRojo::ALapizRojo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/pencil_Cylinder.pencil_Cylinder'"));
	LapizMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LapizMesh"));
	RootComponent = LapizMesh;
	LapizMesh->SetStaticMesh(Mesh.Object);
}

void ALapizRojo::BeginPlay()
{
	Super::BeginPlay();
	CrearLapiz();
}

void ALapizRojo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AccionarLapiz();
}

void ALapizRojo::CrearLapiz()
{
	CrearTamanio();
	CrearNombre();
	LapizColor = FColor::Red;
	LapizMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/Material_6.Material_6'"));
	LapizMesh->SetMaterial(0, LapizMaterial);
	LapizMesh->SetRelativeScale3D(LapizTamanio);
	LapizMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
	LapizMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
}

void ALapizRojo::CrearNombre()
{
	LapizNombre = "LapizRojo";
}

void ALapizRojo::CrearTamanio()
{
	LapizTamanio = FVector(0.5, 0.5, 0.5);
}

void ALapizRojo::AccionarLapiz()
{
	auto Rotation = this->GetActorRotation() + FRotator(0.0f, 0.0f, 5.0f);
	this->SetActorRotation(Rotation);
}

void ALapizRojo::MoverLapiz()
{
	auto Location = this->GetActorLocation() + FVector(30.0f, 0.0f, 30.0f);
	this->SetActorLocation(Location);
}
