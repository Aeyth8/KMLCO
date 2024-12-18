#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Next_Equipment

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_Next_Equipment.AB_Next_Equipment_C.ExecuteUbergraph_AB_Next_Equipment
// 0x0120 (0x0120 - 0x0000)
struct AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_MainPlayer*                K2Node_DynamicCast_AsCACharacter_Main_Player;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAEquipmentBase*                       CallFunc_GetNextEquipment_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAEquipmentBase*                       CallFunc_GetPreviousEquipment_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAEquipmentBase*                       K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0060(0x00B8)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment) == 0x000008, "Wrong alignment on AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment");
static_assert(sizeof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment) == 0x000120, "Wrong size on AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, EntryPoint) == 0x000000, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000018, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000028, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, Temp_bool_Variable) == 0x000030, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, K2Node_DynamicCast_AsCACharacter_Main_Player) == 0x000038, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::K2Node_DynamicCast_AsCACharacter_Main_Player' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, CallFunc_GetNextEquipment_ReturnValue) == 0x000048, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::CallFunc_GetNextEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, CallFunc_GetPreviousEquipment_ReturnValue) == 0x000050, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::CallFunc_GetPreviousEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, K2Node_Select_Default) == 0x000058, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, K2Node_MakeStruct_GameplayEventData) == 0x000060, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'AB_Next_Equipment_C_ExecuteUbergraph_AB_Next_Equipment::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

