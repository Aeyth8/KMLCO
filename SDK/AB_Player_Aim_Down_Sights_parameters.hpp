#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_Aim_Down_Sights

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.ExecuteUbergraph_AB_Player_Aim_Down_Sights
// 0x01C0 (0x01C0 - 0x0000)
struct AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeHeld;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float TimeHeld)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputRelease*          CallFunc_WaitInputRelease_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0014)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0040(0x00B8)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00F8(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights) == 0x000008, "Wrong alignment on AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights");
static_assert(sizeof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights) == 0x0001C0, "Wrong size on AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, EntryPoint) == 0x000000, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, K2Node_CustomEvent_TimeHeld) == 0x000004, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::K2Node_CustomEvent_TimeHeld' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, Temp_float_Variable) == 0x00001C, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, CallFunc_WaitInputRelease_ReturnValue) == 0x000020, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::CallFunc_WaitInputRelease_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, K2Node_CustomEvent_Payload) == 0x000040, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, Temp_struct_Variable) == 0x0000F8, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001B0, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, CallFunc_IsValid_ReturnValue_1) == 0x0001B8, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, K2Node_Event_bWasCancelled) == 0x0001B9, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights, CallFunc_K2_CommitAbility_ReturnValue) == 0x0001BA, "Member 'AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct AB_Player_Aim_Down_Sights_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Player_Aim_Down_Sights_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on AB_Player_Aim_Down_Sights_C_K2_OnEndAbility");
static_assert(sizeof(AB_Player_Aim_Down_Sights_C_K2_OnEndAbility) == 0x000001, "Wrong size on AB_Player_Aim_Down_Sights_C_K2_OnEndAbility");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'AB_Player_Aim_Down_Sights_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.EventReceived_28A48F1A4F6F449DA122BFBF06DF4228
// 0x00B8 (0x00B8 - 0x0000)
struct AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228) == 0x000008, "Wrong alignment on AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228");
static_assert(sizeof(AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228) == 0x0000B8, "Wrong size on AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228, Payload) == 0x000000, "Member 'AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228::Payload' has a wrong offset!");

// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED
// 0x0004 (0x0004 - 0x0000)
struct AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED final
{
public:
	float                                         TimeHeld;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED) == 0x000004, "Wrong alignment on AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED");
static_assert(sizeof(AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED) == 0x000004, "Wrong size on AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED");
static_assert(offsetof(AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED, TimeHeld) == 0x000000, "Member 'AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED::TimeHeld' has a wrong offset!");

}
