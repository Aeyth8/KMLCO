#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FL_Rendering

#include "Basic.hpp"

#include "EOutlineColours_structs.hpp"


namespace SDK::Params
{

// Function BP_FL_Rendering.BP_FL_Rendering_C.SetRenderOutlineSingle
// 0x0030 (0x0030 - 0x0000)
struct BP_FL_Rendering_C_SetRenderOutlineSingle final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OverrideIndex;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOutlineColours                               Colour;                                            // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_FL_Rendering_C_SetRenderOutlineSingle) == 0x000008, "Wrong alignment on BP_FL_Rendering_C_SetRenderOutlineSingle");
static_assert(sizeof(BP_FL_Rendering_C_SetRenderOutlineSingle) == 0x000030, "Wrong size on BP_FL_Rendering_C_SetRenderOutlineSingle");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineSingle, Enable) == 0x000000, "Member 'BP_FL_Rendering_C_SetRenderOutlineSingle::Enable' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineSingle, Target) == 0x000008, "Member 'BP_FL_Rendering_C_SetRenderOutlineSingle::Target' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineSingle, OverrideIndex) == 0x000010, "Member 'BP_FL_Rendering_C_SetRenderOutlineSingle::OverrideIndex' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineSingle, Colour) == 0x000014, "Member 'BP_FL_Rendering_C_SetRenderOutlineSingle::Colour' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineSingle, __WorldContext) == 0x000018, "Member 'BP_FL_Rendering_C_SetRenderOutlineSingle::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineSingle, K2Node_MakeArray_Array) == 0x000020, "Member 'BP_FL_Rendering_C_SetRenderOutlineSingle::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_FL_Rendering.BP_FL_Rendering_C.SetRenderOutlineArray
// 0x0028 (0x0028 - 0x0000)
struct BP_FL_Rendering_C_SetRenderOutlineArray final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            Targets;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                         OverrideIndex;                                     // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOutlineColours                               Colour;                                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FL_Rendering_C_SetRenderOutlineArray) == 0x000008, "Wrong alignment on BP_FL_Rendering_C_SetRenderOutlineArray");
static_assert(sizeof(BP_FL_Rendering_C_SetRenderOutlineArray) == 0x000028, "Wrong size on BP_FL_Rendering_C_SetRenderOutlineArray");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineArray, Enable) == 0x000000, "Member 'BP_FL_Rendering_C_SetRenderOutlineArray::Enable' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineArray, Targets) == 0x000008, "Member 'BP_FL_Rendering_C_SetRenderOutlineArray::Targets' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineArray, OverrideIndex) == 0x000018, "Member 'BP_FL_Rendering_C_SetRenderOutlineArray::OverrideIndex' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineArray, Colour) == 0x00001C, "Member 'BP_FL_Rendering_C_SetRenderOutlineArray::Colour' has a wrong offset!");
static_assert(offsetof(BP_FL_Rendering_C_SetRenderOutlineArray, __WorldContext) == 0x000020, "Member 'BP_FL_Rendering_C_SetRenderOutlineArray::__WorldContext' has a wrong offset!");

}
