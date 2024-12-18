#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_heroLoot_header

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BPUI_HUD_heroLoot_header.BPUI_HUD_heroLoot_header_C.ExecuteUbergraph_BPUI_HUD_heroLoot_header
// 0x00B0 (0x00B0 - 0x0000)
struct BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0020(0x0008)(NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0060(0x0018)()
	class UBPUI_HUD_heroLoot_header_Character_C*  CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPUI_HUD_heroLoot_header_Character_C*  CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header) == 0x000008, "Wrong alignment on BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header");
static_assert(sizeof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header) == 0x0000B0, "Wrong size on BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, EntryPoint) == 0x000000, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, Temp_int_Variable) == 0x000004, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, Temp_int_Variable_1) == 0x00000C, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Len_ReturnValue) == 0x000010, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, K2Node_MakeStruct_SlateChildSize) == 0x000020, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_RandomFloatInRange_ReturnValue) == 0x000028, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_GetCharacterArrayFromString_ReturnValue) == 0x000030, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_GetCharacterArrayFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_TextToUpper_ReturnValue) == 0x000060, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Create_ReturnValue) == 0x000078, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Len_ReturnValue_1) == 0x000084, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000088, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_Array_Get_Item) == 0x000090, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000098, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000A8, "Member 'BPUI_HUD_heroLoot_header_C_ExecuteUbergraph_BPUI_HUD_heroLoot_header::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function BPUI_HUD_heroLoot_header.BPUI_HUD_heroLoot_header_C.PlayFadeAnimation
// 0x0008 (0x0008 - 0x0000)
struct BPUI_HUD_heroLoot_header_C_PlayFadeAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_heroLoot_header_C_PlayFadeAnimation) == 0x000008, "Wrong alignment on BPUI_HUD_heroLoot_header_C_PlayFadeAnimation");
static_assert(sizeof(BPUI_HUD_heroLoot_header_C_PlayFadeAnimation) == 0x000008, "Wrong size on BPUI_HUD_heroLoot_header_C_PlayFadeAnimation");
static_assert(offsetof(BPUI_HUD_heroLoot_header_C_PlayFadeAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BPUI_HUD_heroLoot_header_C_PlayFadeAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

