#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_RemoveGoldShield

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_RemoveGoldShield.AB_RemoveGoldShield_C.ExecuteUbergraph_AB_RemoveGoldShield
// 0x00E0 (0x00E0 - 0x0000)
struct AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00B8)(ConstParm)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RemoveActiveEffectsWithTags_ReturnValue;  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1; // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield) == 0x000008, "Wrong alignment on AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield");
static_assert(sizeof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield) == 0x0000E0, "Wrong size on AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, EntryPoint) == 0x000000, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, K2Node_Event_bWasCancelled) == 0x000004, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, K2Node_Event_EventData) == 0x000008, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x0000C0, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, K2Node_DynamicCast_AsCACharacter) == 0x0000C8, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, CallFunc_RemoveActiveEffectsWithTags_ReturnValue) == 0x0000D4, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::CallFunc_RemoveActiveEffectsWithTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield, CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1) == 0x0000D8, "Member 'AB_RemoveGoldShield_C_ExecuteUbergraph_AB_RemoveGoldShield::CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1' has a wrong offset!");

// Function AB_RemoveGoldShield.AB_RemoveGoldShield_C.K2_ActivateAbilityFromEvent
// 0x00B8 (0x00B8 - 0x0000)
struct AB_RemoveGoldShield_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_RemoveGoldShield_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on AB_RemoveGoldShield_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(AB_RemoveGoldShield_C_K2_ActivateAbilityFromEvent) == 0x0000B8, "Wrong size on AB_RemoveGoldShield_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(AB_RemoveGoldShield_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'AB_RemoveGoldShield_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function AB_RemoveGoldShield.AB_RemoveGoldShield_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct AB_RemoveGoldShield_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_RemoveGoldShield_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on AB_RemoveGoldShield_C_K2_OnEndAbility");
static_assert(sizeof(AB_RemoveGoldShield_C_K2_OnEndAbility) == 0x000001, "Wrong size on AB_RemoveGoldShield_C_K2_OnEndAbility");
static_assert(offsetof(AB_RemoveGoldShield_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'AB_RemoveGoldShield_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
