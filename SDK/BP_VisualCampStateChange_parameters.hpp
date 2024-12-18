#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualCampStateChange

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_VisualCampStateChange.BP_VisualCampStateChange_C.ActivateVisuals
// 0x0078 (0x0078 - 0x0000)
struct BP_VisualCampStateChange_C_ActivateVisuals final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AStaticMeshActor>        CallFunc_Array_Get_Item;                           // 0x0010(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       K2Node_DynamicCast_AsStatic_Mesh_Actor;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VisualCampStateChange_C_ActivateVisuals) == 0x000008, "Wrong alignment on BP_VisualCampStateChange_C_ActivateVisuals");
static_assert(sizeof(BP_VisualCampStateChange_C_ActivateVisuals) == 0x000078, "Wrong size on BP_VisualCampStateChange_C_ActivateVisuals");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000048, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, K2Node_DynamicCast_AsStatic_Mesh_Actor) == 0x000050, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::K2Node_DynamicCast_AsStatic_Mesh_Actor' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_GetMaterial_ReturnValue) == 0x000060, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000068, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_ActivateVisuals, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'BP_VisualCampStateChange_C_ActivateVisuals::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_VisualCampStateChange.BP_VisualCampStateChange_C.DeactivateVisuals
// 0x0014 (0x0014 - 0x0000)
struct BP_VisualCampStateChange_C_DeactivateVisuals final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VisualCampStateChange_C_DeactivateVisuals) == 0x000004, "Wrong alignment on BP_VisualCampStateChange_C_DeactivateVisuals");
static_assert(sizeof(BP_VisualCampStateChange_C_DeactivateVisuals) == 0x000014, "Wrong size on BP_VisualCampStateChange_C_DeactivateVisuals");
static_assert(offsetof(BP_VisualCampStateChange_C_DeactivateVisuals, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_VisualCampStateChange_C_DeactivateVisuals::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_DeactivateVisuals, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_VisualCampStateChange_C_DeactivateVisuals::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_DeactivateVisuals, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_VisualCampStateChange_C_DeactivateVisuals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_DeactivateVisuals, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_VisualCampStateChange_C_DeactivateVisuals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualCampStateChange_C_DeactivateVisuals, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'BP_VisualCampStateChange_C_DeactivateVisuals::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

