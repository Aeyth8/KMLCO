#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_EMP

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PostProcess_EMP.BP_PostProcess_EMP_C.ExecuteUbergraph_BP_PostProcess_EMP
// 0x0020 (0x0020 - 0x0000)
struct BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetMaterialInstance_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetMaterialInstance_ReturnValue_1;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP) == 0x000008, "Wrong alignment on BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP");
static_assert(sizeof(BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP) == 0x000020, "Wrong size on BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP");
static_assert(offsetof(BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP, EntryPoint) == 0x000000, "Member 'BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP, CallFunc_GetMaterialInstance_ReturnValue) == 0x000008, "Member 'BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP::CallFunc_GetMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP, CallFunc_GetMaterialInstance_ReturnValue_1) == 0x000010, "Member 'BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP::CallFunc_GetMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'BP_PostProcess_EMP_C_ExecuteUbergraph_BP_PostProcess_EMP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PostProcess_EMP.BP_PostProcess_EMP_C.IsVisible
// 0x0001 (0x0001 - 0x0000)
struct BP_PostProcess_EMP_C_IsVisible final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PostProcess_EMP_C_IsVisible) == 0x000001, "Wrong alignment on BP_PostProcess_EMP_C_IsVisible");
static_assert(sizeof(BP_PostProcess_EMP_C_IsVisible) == 0x000001, "Wrong size on BP_PostProcess_EMP_C_IsVisible");
static_assert(offsetof(BP_PostProcess_EMP_C_IsVisible, ReturnValue) == 0x000000, "Member 'BP_PostProcess_EMP_C_IsVisible::ReturnValue' has a wrong offset!");

}

