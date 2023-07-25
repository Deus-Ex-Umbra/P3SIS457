#include "LapizNegro.h"

ALapizNegro::ALapizNegro()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/pencil_Cylinder.pencil_Cylinder'"));
	LapizMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LapizMesh"));
	RootComponent = LapizMesh;
	LapizMesh->SetStaticMesh(Mesh.Object);
}

void ALapizNegro::BeginPlay()
{
	Super::BeginPlay();
	CrearLapiz();
}

void ALapizNegro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AccionarLapiz();
}

void ALapizNegro::CrearLapiz()
{
	CrearTamanio();
	CrearNombre();
	LapizColor = FColor::Black;
	LapizMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/Material_005.Material_005'"));
	LapizMesh->SetMaterial(0, LapizMaterial);
	LapizMesh->SetRelativeScale3D(LapizTamanio);
	LapizMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
	LapizMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
}

void ALapizNegro::CrearNombre()
{
	LapizNombre = "LapizNegro";
}

void ALapizNegro::CrearTamanio()
{
	LapizTamanio = FVector(1.0, 1.0, 1.0);
}

void ALapizNegro::AccionarLapiz()
{
	auto Rotation = this->GetActorRotation() + FRotator(5.0f, 0.0f, 0.0f);
	this->SetActorRotation(Rotation);
}

void ALapizNegro::MoverLapiz()
{
	auto Location = this->GetActorLocation() + FVector(0.0f, 30.0f, 0.0f);
	this->SetActorLocation(Location);
}
