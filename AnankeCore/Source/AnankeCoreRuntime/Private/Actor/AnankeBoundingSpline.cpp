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

#include "Actor/AnankeBoundingSpline.h"

#include "Components/AnankeSplineComponent.h"

AAnankeBoundingSpline::AAnankeBoundingSpline(const FObjectInitializer& Initializer): Super(Initializer)
{
	PrimaryActorTick.bCanEverTick = true;
	
	if (SplineComponent)
	{
		SplineComponent.Get()->SetClosedLoop(true);
	}
}

void AAnankeBoundingSpline::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bVisualizeBoudingBox)
	{
		FBox BoundingBox = GetComponentsBoundingBox(true, true);
		
		DrawDebugBox(GetWorld(), BoundingBox.GetCenter(), BoundingBox.GetExtent(), FColor(0, 200, 200));
	}
}

FBox AAnankeBoundingSpline::GetComponentsBoundingBox(bool bNonColliding, bool bIncludeFromChildActors) const
{
	FBox BaseBox = Super::GetComponentsBoundingBox(bNonColliding, bIncludeFromChildActors);

	auto Center = BaseBox.GetCenter();

	BaseBox.Min.Z = Center.Z;
	BaseBox.Max.Z = Center.Z;

	float HalfHeight = BoundingBoxHeight * 100.0f / 2.0f;

	BaseBox.Min.Z -= HalfHeight;
	BaseBox.Max.Z += HalfHeight;

	return BaseBox;
}

