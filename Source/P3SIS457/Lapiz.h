#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lapiz.generated.h"

UCLASS(Abstract)
class P3SIS457_API ALapiz : public AActor
{
	GENERATED_BODY()
public:	
	ALapiz();
	UPROPERTY()
		class UStaticMeshComponent* LapizMesh;
	UPROPERTY()
		class UMaterial* LapizMaterial;
	FString LapizNombre;
	FVector LapizTamanio;
	FColor LapizColor;
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void CrearTamanio() PURE_VIRTUAL (ALapiz::CrearTamanio, );
	virtual void CrearLapiz() PURE_VIRTUAL(ALapiz::CrearMaterial, );
	virtual void CrearNombre() PURE_VIRTUAL(ALapiz::CrearNombre, );
	virtual void AccionarLapiz() PURE_VIRTUAL(ALapiz::AccionarLapiz, );
	virtual void MoverLapiz() PURE_VIRTUAL(ALapiz::MoverLapiz, );
private:
	USceneComponent* Escena;
};
