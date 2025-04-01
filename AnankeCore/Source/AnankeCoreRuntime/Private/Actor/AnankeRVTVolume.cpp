// Copyright © Mason Stevenson
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted (subject to the limitations in the disclaimer
// below) provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
// THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
// CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
// NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "Actor/AnankeRVTVolume.h"

#include "AnankeCoreLoggingDefs.h"
#include "Components/BoxComponent.h"
#include "Macros/AnankeCoreLoggingMacros.h"

AAnankeRVTVolume::AAnankeRVTVolume(const FObjectInitializer& Initializer): Super(Initializer)
{
	RootComponent = VirtualTextureComponent = CreateDefaultSubobject<UAutoUpdateRVTComponent>(TEXT("VirtualTextureComponent"));

	VirtualTextureComponent->SetExpandBounds(500.0); // 5m of padding.

#if WITH_EDITORONLY_DATA
	// Add box for visualization of bounds
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
	Box->SetBoxExtent(FVector(.5f, .5f, .5f), false);
	Box->SetRelativeTransform(FTransform(FVector(.5f, .5f, .5f)));
	Box->bDrawOnlyIfSelected = true;
	Box->SetIsVisualizationComponent(true);
	Box->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Box->SetCanEverAffectNavigation(false);
	Box->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	Box->SetGenerateOverlapEvents(false);
	Box->SetupAttachment(VirtualTextureComponent);

	bIsSpatiallyLoaded = false;
#endif
	
	LoadPlaneMesh();

	VolumePlane = CreateDefaultSubobject<UStaticMeshComponent>("VolumePlane");
	if (PlaneMesh)
	{
		VolumePlane->SetStaticMesh(PlaneMesh);
	}
	VolumePlane->SetupAttachment(RootComponent);
	VolumePlane->SetRelativeLocation(FVector(0.5, 0.5, 0.999)); // safe up to height of 5000m. After that, need to adjust the expand bounds
	VolumePlane->SetRelativeScale3D(FVector(0.01, 0.01, 1.0));
	// VolumePlane->bRenderInMainPass = false;
	// VolumePlane->bRenderInDepthPass = false; 
	VolumePlane->CastShadow = false;
	VolumePlane->bAffectDynamicIndirectLighting = false;
	VolumePlane->bAffectIndirectLightingWhileHidden = false;
	VolumePlane->bVisibleInReflectionCaptures = false;
	VolumePlane->bVisibleInRealTimeSkyCaptures = false;
	VolumePlane->bVisibleInRayTracing = false;
	VolumePlane->bReceivesDecals = false;
	VolumePlane->bUseAsOccluder = false;
}

void AAnankeRVTVolume::LoadPlaneMesh()
{
	PlaneMesh = nullptr;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshFinder(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	if (!MeshFinder.Succeeded())
	{
		ANANKE_LOG_OBJECT(this, LogAnankeCore, Error, TEXT("Cound not find engine plane mesh object."));
		return;
	}

	PlaneMesh = MeshFinder.Object;
}
