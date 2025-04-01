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
#include "Containers/ArrayView.h"

#include "AnankeUntypedArrayView.generated.h"

// Stores all the information required to create an ArrayView, minus the type. At some later time, the type can be
// provided to construct the full-fledged ArrayView.
USTRUCT()
struct ANANKECORERUNTIME_API FAnankeUntypedArrayView // for whatever reason, trying to export this as a class build errors.
{
public:
	GENERATED_BODY()

	FAnankeUntypedArrayView() = default;
	FAnankeUntypedArrayView(void* NewDataPtr, const int32 NewSize)
	{
		DataPtr = NewDataPtr;
		Size = NewSize;
	}

	template <typename ViewType>
	TArrayView<ViewType> GetArrayView()
	{
		if (!DataPtr || Size <= 0)
		{
			return TArrayView<ViewType>();
		}
		
		return MakeArrayView<ViewType>((ViewType*) DataPtr, Size);
	}

	void SetSize(const int32 NewSize)
	{
		Size = NewSize;
	}

private:
	void* DataPtr = nullptr;
	int32 Size = 0;
};