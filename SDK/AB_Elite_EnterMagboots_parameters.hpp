#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Elite_EnterMagboots

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_Elite_EnterMagboots.AB_Elite_EnterMagboots_C.ExecuteUbergraph_AB_Elite_EnterMagboots
// 0x0138 (0x0138 - 0x0000)
struct AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0064(0x0014)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0078(0x00B8)(ConstParm)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0130(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots) == 0x000008, "Wrong alignment on AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots");
static_assert(sizeof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots) == 0x000138, "Wrong size on AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, EntryPoint) == 0x000000, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000008, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, K2Node_CreateDelegate_OutputDelegate_4) == 0x000064, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, K2Node_Event_EventData) == 0x000078, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000130, "Member 'AB_Elite_EnterMagboots_C_ExecuteUbergraph_AB_Elite_EnterMagboots::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

// Function AB_Elite_EnterMagboots.AB_Elite_EnterMagboots_C.K2_ActivateAbilityFromEvent
// 0x00B8 (0x00B8 - 0x0000)
struct AB_Elite_EnterMagboots_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_Elite_EnterMagboots_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on AB_Elite_EnterMagboots_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(AB_Elite_EnterMagboots_C_K2_ActivateAbilityFromEvent) == 0x0000B8, "Wrong size on AB_Elite_EnterMagboots_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(AB_Elite_EnterMagboots_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'AB_Elite_EnterMagboots_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
