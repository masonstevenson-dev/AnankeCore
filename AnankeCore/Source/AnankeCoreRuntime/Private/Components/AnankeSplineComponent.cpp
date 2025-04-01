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

#include "Components/AnankeSplineComponent.h"

#include "AnankeCoreLoggingDefs.h"
#include "Macros/AnankeCoreLoggingMacros.h"

const FInterpCurvePointVector UAnankeSplineComponent::DummyPointPosition(0.0f, FVector::ZeroVector, FVector::ForwardVector, FVector::ForwardVector, CIM_Constant);
const FInterpCurvePointQuat UAnankeSplineComponent::DummyPointRotation(0.0f, FQuat::Identity);
const FInterpCurvePointVector UAnankeSplineComponent::DummyPointScale(0.0f, FVector::OneVector);

FAnankeSplineProxy::FAnankeSplineProxy(const UAnankeSplineComponent* InComponent): FPrimitiveSceneProxy(InComponent)
{
	SplinePositionInfo = InComponent->SplineCurves.Position;
	SplineRotationInfo = InComponent->SplineCurves.Rotation;
	SplineScaleInfo = InComponent->SplineCurves.Scale;
	LineColor = InComponent->EditorUnselectedSplineSegmentColor;
	ScaleVisualizationWidth = InComponent->ScaleVisualizationWidth;
	bShouldVisualizeScale = InComponent->bShouldVisualizeScale;
	ComponentTransform = InComponent->GetComponentTransform();
	bClosedLoop = InComponent->IsClosedLoop();
}

void FAnankeSplineProxy::GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_AnankeSplineProxy_GetDynamicMeshElements);
	
	if (IsSelected())
	{
		return;
	}

	for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
	{
		if (VisibilityMap & (1 << ViewIndex))
		{
			const FSceneView* View = Views[ViewIndex];
			FPrimitiveDrawInterface* PDI = Collector.GetPDI(ViewIndex);

			const FMatrix& FetchedLocalToWorld = GetLocalToWorld();

			// Taking into account the min and maximum drawing distance
			const float DistanceSqr = (View->ViewMatrices.GetViewOrigin() - FetchedLocalToWorld.GetOrigin()).SizeSquared();
			if (DistanceSqr < FMath::Square(GetMinDrawDistance()) || DistanceSqr > FMath::Square(GetMaxDrawDistance()))
			{
				continue;
			}

			DrawCustomProxy(PDI, View);
		}
	}
}

void FAnankeSplineProxy::DrawCustomProxy(FPrimitiveDrawInterface* PDI, const FSceneView* View) const
{
	const float DefaultScale = ScaleVisualizationWidth;

	FVector OldKeyPos(0);
	FVector OldKeyRightVector(0);
	FVector OldKeyScale(0);

	const int32 NumPoints = SplinePositionInfo.Points.Num();
	const int32 NumSegments = SplinePositionInfo.bIsLooped ? NumPoints : NumPoints - 1;
	for (int32 KeyIdx = 0; KeyIdx < NumSegments + 1; KeyIdx++)
	{
		const FVector NewKeyPos = GetLocationAtSplinePoint(KeyIdx, ESplineCoordinateSpace::World);
		const FVector NewKeyRightVector = GetRightVectorAtSplinePoint(KeyIdx, ESplineCoordinateSpace::World);
		const FVector NewKeyUpVector = GetUpVectorAtSplinePoint(KeyIdx, ESplineCoordinateSpace::World);
		const FVector NewKeyScale = GetScaleAtSplinePoint(KeyIdx) * DefaultScale;

		// Draw the keypoint and up/right vectors
		if (KeyIdx < NumPoints)
		{
			if (bShouldVisualizeScale)
			{
				/// TODO(): remove?
				/// PDI->SetHitProxy(NULL);

				PDI->DrawLine(NewKeyPos, NewKeyPos - NewKeyRightVector * NewKeyScale.Y, LineColor, SDPG_World);
				PDI->DrawLine(NewKeyPos, NewKeyPos + NewKeyRightVector * NewKeyScale.Y, LineColor, SDPG_World);
				PDI->DrawLine(NewKeyPos, NewKeyPos + NewKeyUpVector * NewKeyScale.Z, LineColor, SDPG_World);

				const int32 ArcPoints = 20;
				FVector OldArcPos = NewKeyPos + NewKeyRightVector * NewKeyScale.Y;
				for (int32 ArcIndex = 1; ArcIndex <= ArcPoints; ArcIndex++)
				{
					float Sin;
					float Cos;
					FMath::SinCos(&Sin, &Cos, ArcIndex * PI / ArcPoints);
					const FVector NewArcPos = NewKeyPos + Cos * NewKeyRightVector * NewKeyScale.Y + Sin * NewKeyUpVector * NewKeyScale.Z;
					PDI->DrawLine(OldArcPos, NewArcPos, LineColor, SDPG_World);
					OldArcPos = NewArcPos;
				}
			}

			/// TODO(): remove?
			/// if (bIsSplineEditable)
			/// {
			/// 	PDI->SetHitProxy(new HSplineKeyProxy(Component, KeyIdx));
			/// }
			//// PDI->DrawPoint(NewKeyPos, LineColor, GrabHandleSize, SDPG_Foreground);
			/// PDI->SetHitProxy(NULL);
		}

		// If not the first keypoint, draw a line to the previous keypoint.
		if (KeyIdx > 0)
		{
			/// TODO(): remove?
			/// if (bIsSplineEditable)
			/// {
			///	PDI->SetHitProxy(new HSplineSegmentProxy(Component, KeyIdx - 1));
			/// }

			// For constant interpolation - don't draw ticks - just draw dotted line.
			if (SplinePositionInfo.Points[KeyIdx - 1].InterpMode == CIM_Constant)
			{
				double DashSize = 0.0;
				const double StartW = View->WorldToScreen(OldKeyPos).W;
				const double EndW = View->WorldToScreen(NewKeyPos).W;

				const double WLimit = 10.0;
				if (StartW > WLimit || EndW > WLimit)
				{
					DashSize = FMath::Max(StartW, EndW) * 0.03;
				}
				
				if (DashSize > 0.0)
				{
					DrawDashedLine(PDI, OldKeyPos, NewKeyPos, LineColor, DashSize, SDPG_World);
				}
			}
			else
			{
				const bool bKeyIdxLooped = (SplinePositionInfo.bIsLooped && KeyIdx == NumPoints);
				const int32 BeginIdx = bKeyIdxLooped ? 0 : KeyIdx;
				const int32 EndIdx = KeyIdx - 1;
				
				// Find position on first keyframe.
				FVector OldPos = OldKeyPos;
				FVector OldRightVector = OldKeyRightVector;
				FVector OldScale = OldKeyScale;

				// Then draw a line for each substep.
				constexpr int32 NumSteps = 20;
				const float SegmentLineThickness = 0.0f; // GetDefault<ULevelEditorViewportSettings>()->SplineLineThicknessAdjustment;

				for (int32 StepIdx = 1; StepIdx <= NumSteps; StepIdx++)
				{
					const float StepRatio = StepIdx / static_cast<float>(NumSteps);
					const float Key = EndIdx + StepRatio;
					const FVector NewPos = GetLocationAtSplineInputKey(Key, ESplineCoordinateSpace::World);
					const FVector NewRightVector = GetRightVectorAtSplineInputKey(Key, ESplineCoordinateSpace::World);
					const FVector NewScale = GetScaleAtSplineInputKey(Key) * DefaultScale;
					
					PDI->DrawLine(OldPos, NewPos, LineColor, SDPG_Foreground, SegmentLineThickness);
					if (bShouldVisualizeScale)
					{
						PDI->DrawLine(OldPos - OldRightVector * OldScale.Y, NewPos - NewRightVector * NewScale.Y, LineColor, SDPG_World);
						PDI->DrawLine(OldPos + OldRightVector * OldScale.Y, NewPos + NewRightVector * NewScale.Y, LineColor, SDPG_World);
					}

					OldPos = NewPos;
					OldRightVector = NewRightVector;
					OldScale = NewScale;
				}
			}

			/// TODO(): remove?
			/// PDI->SetHitProxy(NULL);
		}

		OldKeyPos = NewKeyPos;
		OldKeyRightVector = NewKeyRightVector;
		OldKeyScale = NewKeyScale;
	}
}

const FInterpCurvePointVector& FAnankeSplineProxy::GetPositionPointSafe(int32 PointIndex) const
{
	const TArray<FInterpCurvePointVector>& Points = SplinePositionInfo.Points;
	const int32 NumPoints = Points.Num();
	if (NumPoints > 0)
	{
		const int32 ClampedIndex = (bClosedLoop && PointIndex >= NumPoints) ? 0 : FMath::Clamp(PointIndex, 0, NumPoints - 1);
		return Points[ClampedIndex];
	}
	else
	{
		return UAnankeSplineComponent::DummyPointPosition;
	}
}

const FInterpCurvePointQuat& FAnankeSplineProxy::GetRotationPointSafe(int32 PointIndex) const
{
	const TArray<FInterpCurvePointQuat>& Points = SplineRotationInfo.Points;
	const int32 NumPoints = Points.Num();

	if (NumPoints > 0)
	{
		const int32 ClampedIndex = (bClosedLoop && PointIndex >= NumPoints) ? 0 : FMath::Clamp(PointIndex, 0, NumPoints - 1);
		return Points[ClampedIndex];
	}

	return UAnankeSplineComponent::DummyPointRotation;
}

const FInterpCurvePointVector& FAnankeSplineProxy::GetScalePointSafe(int32 PointIndex) const
{
	const TArray<FInterpCurvePointVector>& Points = SplineScaleInfo.Points;
	const int32 NumPoints = Points.Num();

	if (NumPoints > 0)
	{
		const int32 ClampedIndex = (bClosedLoop && PointIndex >= NumPoints) ? 0 : FMath::Clamp(PointIndex, 0, NumPoints - 1);
		return Points[ClampedIndex];
	}

	return UAnankeSplineComponent::DummyPointScale;
}

FQuat FAnankeSplineProxy::GetQuaternionAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const
{
	FQuat Quat = SplineRotationInfo.Eval(InKey, FQuat::Identity);
	Quat.Normalize();

	const FVector Direction = SplinePositionInfo.EvalDerivative(InKey, FVector::ZeroVector).GetSafeNormal();
	const FVector UpVector = Quat.RotateVector(FVector::UpVector);

	FQuat Rot = (FRotationMatrix::MakeFromXZ(Direction, UpVector)).ToQuat();

	if (CoordinateSpace == ESplineCoordinateSpace::World)
	{
		Rot = ComponentTransform.GetRotation() * Rot;
	}

	return Rot;
}

FVector FAnankeSplineProxy::GetRightVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const
{
	const FQuat Quat = GetQuaternionAtSplineInputKey(InKey, ESplineCoordinateSpace::Local);
	FVector RightVector = Quat.RotateVector(FVector::RightVector);

	if (CoordinateSpace == ESplineCoordinateSpace::World)
	{
		RightVector = ComponentTransform.TransformVectorNoScale(RightVector);
	}

	return RightVector;
}

FVector FAnankeSplineProxy::GetUpVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const
{
	const FQuat Quat = GetQuaternionAtSplineInputKey(InKey, ESplineCoordinateSpace::Local);
	FVector UpVector = Quat.RotateVector(FVector::UpVector);

	if (CoordinateSpace == ESplineCoordinateSpace::World)
	{
		UpVector = ComponentTransform.TransformVectorNoScale(UpVector);
	}

	return UpVector;
}

FVector FAnankeSplineProxy::GetLocationAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const
{
	FVector Location = SplinePositionInfo.Eval(InKey, FVector::ZeroVector);

	if (CoordinateSpace == ESplineCoordinateSpace::World)
	{
		Location = ComponentTransform.TransformPosition(Location);
	}

	return Location;
}

FVector FAnankeSplineProxy::GetScaleAtSplineInputKey(float InKey) const
{
	const FVector Scale = SplineScaleInfo.Eval(InKey, FVector(1.0f));
	return Scale;
}

FVector FAnankeSplineProxy::GetLocationAtSplinePoint(int32 PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) const
{
	const FInterpCurvePointVector& Point = GetPositionPointSafe(PointIndex);
	const FVector& Location = Point.OutVal;
	return (CoordinateSpace == ESplineCoordinateSpace::World) ? ComponentTransform.TransformPosition(Location) : Location;
}

FVector FAnankeSplineProxy::GetRightVectorAtSplinePoint(int32 PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) const
{
	const FInterpCurvePointQuat& Point = GetRotationPointSafe(PointIndex);
	return GetRightVectorAtSplineInputKey(Point.InVal, CoordinateSpace);
}

FVector FAnankeSplineProxy::GetUpVectorAtSplinePoint(int32 PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) const
{
	const FInterpCurvePointQuat& Point = GetRotationPointSafe(PointIndex);
	return GetUpVectorAtSplineInputKey(Point.InVal, CoordinateSpace);
}

FVector FAnankeSplineProxy::GetScaleAtSplinePoint(int32 PointIndex) const
{
	const FInterpCurvePointVector& Point = GetScalePointSafe(PointIndex);
	return Point.OutVal;
}

UAnankeSplineComponent::UAnankeSplineComponent(const FObjectInitializer& Initializer): Super(Initializer)
{
	// supersedes the spline initialized by the base class SetDefaultSpline().
	InitSpline();

	UpdateSpline();

	// See base class for rationale on this section.
	SplineInfo_DEPRECATED = SplineCurves.Position;
	SplineRotInfo_DEPRECATED = SplineCurves.Rotation;
	SplineScaleInfo_DEPRECATED = SplineCurves.Scale;
	SplineReparamTable_DEPRECATED = SplineCurves.ReparamTable;
}


#if UE_ENABLE_DEBUG_DRAWING
FPrimitiveSceneProxy* UAnankeSplineComponent::CreateSceneProxy()
{
	if (!bDrawDebug)
	{
		return Super::CreateSceneProxy();
	}
	
	switch (SceneProxyMode)
	{
	case EAnankeSplineComponentProxyMode::Default:
		return Super::CreateSceneProxy();
	case EAnankeSplineComponentProxyMode::Custom:
		return new FAnankeSplineProxy(this);
	default:
		ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("Unsupported spline component proxy mode: %s. Using default scene proxy."), *UEnum::GetValueAsString(SceneProxyMode));
		return Super::CreateSceneProxy();
	}
}
#endif

void UAnankeSplineComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (bUseUniformWidth)
	{
		for (int PointIndex = 0; PointIndex < GetNumberOfSplinePoints(); PointIndex++)
		{
			SetScaleAtSplinePoint(PointIndex, FVector(UniformWidth));
		}
	}
}

void UAnankeSplineComponent::InitSpline()
{
	ClearSplinePoints();
	AddSplinePoint(FVector(0, 0, 0), ESplineCoordinateSpace::Local);
	AddSplinePoint(FVector(300, 0, 0), ESplineCoordinateSpace::Local);
	AddSplinePoint(FVector(600, 0, 0), ESplineCoordinateSpace::Local);
}
