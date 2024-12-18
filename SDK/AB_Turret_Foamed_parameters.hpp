#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Turret_Foamed

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_Turret_Foamed.AB_Turret_Foamed_C.ExecuteUbergraph_AB_Turret_Foamed
// 0x01E0 (0x01E0 - 0x0000)
struct AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0040(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0054(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0068(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x007C(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0090(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00A4(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x00B8(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00E0(0x00B8)(ConstParm)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimMontage*>                   K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Array_Get_Item;                           // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed) == 0x000008, "Wrong alignment on AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed");
static_assert(sizeof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed) == 0x0001E0, "Wrong size on AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, EntryPoint) == 0x000000, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_3) == 0x000040, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_4) == 0x000054, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_5) == 0x000068, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_6) == 0x00007C, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_7) == 0x000090, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000A4, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000B8, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0000D0, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_Event_EventData) == 0x0000E0, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000198, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_DynamicCast_AsCACharacter_NPC) == 0x0001A0, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_MakeArray_Array) == 0x0001B0, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, CallFunc_RandomIntegerInRange_ReturnValue) == 0x0001C0, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, K2Node_Event_bWasCancelled) == 0x0001C4, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, CallFunc_Array_Get_Item) == 0x0001C8, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1) == 0x0001D0, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed, CallFunc_IsValid_ReturnValue_1) == 0x0001D8, "Member 'AB_Turret_Foamed_C_ExecuteUbergraph_AB_Turret_Foamed::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function AB_Turret_Foamed.AB_Turret_Foamed_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct AB_Turret_Foamed_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Turret_Foamed_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on AB_Turret_Foamed_C_K2_OnEndAbility");
static_assert(sizeof(AB_Turret_Foamed_C_K2_OnEndAbility) == 0x000001, "Wrong size on AB_Turret_Foamed_C_K2_OnEndAbility");
static_assert(offsetof(AB_Turret_Foamed_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'AB_Turret_Foamed_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function AB_Turret_Foamed.AB_Turret_Foamed_C.K2_ActivateAbilityFromEvent
// 0x00B8 (0x00B8 - 0x0000)
struct AB_Turret_Foamed_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_Turret_Foamed_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on AB_Turret_Foamed_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(AB_Turret_Foamed_C_K2_ActivateAbilityFromEvent) == 0x0000B8, "Wrong size on AB_Turret_Foamed_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(AB_Turret_Foamed_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'AB_Turret_Foamed_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

