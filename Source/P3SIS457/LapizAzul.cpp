#include "LapizAzul.h"

ALapizAzul::ALapizAzul()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/pencil_Cylinder.pencil_Cylinder'"));
	LapizMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LapizMesh"));
	RootComponent = LapizMesh;
	LapizMesh->SetStaticMesh(Mesh.Object);
}

void ALapizAzul::BeginPlay()
{
	Super::BeginPlay();
	CrearLapiz();
}

void ALapizAzul::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AccionarLapiz();
}

void ALapizAzul::CrearLapiz()
{
	CrearTamanio();
	CrearNombre();
	LapizColor = FColor::Blue;
	LapizMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/Material_1.Material_1'"));
	LapizMesh->SetMaterial(0, LapizMaterial);
	LapizMesh->SetRelativeScale3D(LapizTamanio);
	LapizMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
	LapizMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
}

void ALapizAzul::CrearNombre()
{
	LapizNombre = "LapizAzul";
}

void ALapizAzul::CrearTamanio()
{
	LapizTamanio = FVector(0.5, 0.5, 1.0);
}

void ALapizAzul::AccionarLapiz()
{
	auto Rotation = this->GetActorRotation() + FRotator(0.0f, 5.0f, 0.0f);
	this->SetActorRotation(Rotation);
}

void ALapizAzul::MoverLapiz()
{
	auto Location = this->GetActorLocation() + FVector(0.0f, -30.0f, 0.0f);
	this->SetActorLocation(Location);
}
