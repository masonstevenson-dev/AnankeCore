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

#include "Actor/AnankeSplineActor.h"

#include "Components/AnankeSplineComponent.h"

AAnankeSplineActor::AAnankeSplineActor(const FObjectInitializer& Initializer): Super(Initializer)
{
	TransformComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
	SetRootComponent(TransformComponent);
	
	SplineComponent = CreateDefaultSubobject<UAnankeSplineComponent>("Main Spline");
	RootComponent = SplineComponent;
}

void AAnankeSplineActor::PostActorCreated()
{
	Super::PostActorCreated();

#if WITH_EDITOR
	if (GEditor && GetWorld()->WorldType == EWorldType::Editor)
	{
		// There is currently an engine bug where UE does not recognize this actor as "selected" when you drag it into
		// the scene from the "Quick Add" menu. This causes the spline to disappear when you drag it into the scene
		// (this doesn't just affect Ananke spline actors btw- you can check that this bug affects all spline actors by
		// spawning in a CameraRig_Rail actor). 
		//
		// I would prefer to DESELECT the actor here, because I'm pretty sure this fn gets triggered
		// by events other than dragging the actor into the scene. However, deselecting the actor doesn't seem to work.
		//
		// I also tried moving this logic to a fn triggered by PlacementModule.OnRecentlyPlacedChanged, but there is no
		// way to detect that this specific actor is actually what was placed.
		//
		// TODO(CHECK_NEXT_UPDATE_UE5.5): Remove this if the bug has been fixed.
		bool ShouldSelectActor = true;
		GEditor->SelectActor(this, ShouldSelectActor, true);
		GEditor->NoteSelectionChange(true);
	}
#endif
	
}
