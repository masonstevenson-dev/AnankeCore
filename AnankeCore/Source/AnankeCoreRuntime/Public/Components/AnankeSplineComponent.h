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

#pragma once
#include "Components/SplineComponent.h"

#include "AnankeSplineComponent.generated.h"

class UAnankeSplineComponent;

UENUM()
enum class EAnankeSplineComponentProxyMode: uint8
{
	Default,
	Custom
};

class FAnankeSplineProxy : public FPrimitiveSceneProxy
{
public:
	FAnankeSplineProxy(const UAnankeSplineComponent* InComponent);
	
	SIZE_T GetTypeHash() const override
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}

	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override
	{
		FPrimitiveViewRelevance Result;
		Result.bDrawRelevance = /*bDrawDebug &&*/ !IsSelected() && IsShown(View) && View->Family->EngineShowFlags.Splines;
		Result.bDynamicRelevance = true;
		Result.bShadowRelevance = IsShadowCast(View);
		Result.bEditorPrimitiveRelevance = UseEditorCompositing(View);
		return Result;
	}
	
	virtual uint32 GetMemoryFootprint(void) const override { return sizeof *this + GetAllocatedSize(); }
	uint32 GetAllocatedSize(void) const { return FPrimitiveSceneProxy::GetAllocatedSize(); }

	virtual void GetDynamicMeshElements(
		const TArray<const FSceneView*>& Views,
		const FSceneViewFamily& ViewFamily,
		uint32 VisibilityMap,
		FMeshElementCollector& Collector
	) const override;

protected:
	virtual void DrawCustomProxy(FPrimitiveDrawInterface* PDI, const FSceneView* View) const;

	// We have to reimplement all the following fns here, because we aren't able to store a pointer to the actual
	// SplineComponent itself. See the comment on FPrimitiveSceneProxy.ComponentForDebuggingOnly for more info.
	const FInterpCurvePointVector& GetPositionPointSafe(int32 PointIndex) const;
	const FInterpCurvePointQuat& GetRotationPointSafe(int32 PointIndex) const;
	const FInterpCurvePointVector& GetScalePointSafe(int32 PointIndex) const;
	FQuat GetQuaternionAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const;
	FVector GetRightVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const;
	FVector GetUpVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const;
	FVector GetLocationAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) const;
	FVector GetScaleAtSplineInputKey(float InKey) const;
	FVector GetLocationAtSplinePoint(int32 PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) const;
	FVector GetRightVectorAtSplinePoint(int32 PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) const;
	FVector GetUpVectorAtSplinePoint(int32 PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) const;
	FVector GetScaleAtSplinePoint(int32 PointIndex) const;
	
	FInterpCurveVector SplinePositionInfo;
	FInterpCurveQuat SplineRotationInfo;
	FInterpCurveVector SplineScaleInfo;
	FLinearColor LineColor;
	float ScaleVisualizationWidth;
	bool bShouldVisualizeScale;
	FTransform ComponentTransform;
	bool bClosedLoop;
};

UCLASS()
class UAnankeSplineComponent : public USplineComponent
{
	GENERATED_BODY()

public:
	UAnankeSplineComponent(const FObjectInitializer& Initializer);
	
#if UE_ENABLE_DEBUG_DRAWING
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual bool ShouldRecreateProxyOnUpdateTransform() const override { return true; }
#endif

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(InlineEditConditionToggle=true))
	bool bUseUniformWidth = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(EditCondition="bUseUniformWidth"))
	float UniformWidth = 1.0;

	// Maybe could just put this inside the proxy instead, but not sure if this is safe or not.
	static const FInterpCurvePointVector DummyPointPosition;
	static const FInterpCurvePointQuat DummyPointRotation;
	static const FInterpCurvePointVector DummyPointScale;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAnankeSplineComponentProxyMode SceneProxyMode = EAnankeSplineComponentProxyMode::Default;

protected:
	// Basically the same thing as USplineComponent::SetDefaultSpline. We have to call a different fn because that fn
	// is marked private.
	void InitSpline();
};
