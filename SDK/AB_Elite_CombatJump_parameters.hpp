#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Elite_CombatJump

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_Elite_CombatJump.AB_Elite_CombatJump_C.ExecuteUbergraph_AB_Elite_CombatJump
// 0x01E8 (0x01E8 - 0x0000)
struct AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0058(0x0014)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetNPCCombatJumpTargetLocation_target_location_out; // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNPCCombatJumpTargetLocation_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0088(0x00B8)(ConstParm)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0154(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNearestVectorIndex_ReturnValue;        // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_2; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNPCCombatJumpArcValid_ReturnValue;      // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPlayLength_ReturnValue;                // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue_1;     // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue_2;     // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4[0x4];                                      // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump) == 0x000008, "Wrong alignment on AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump");
static_assert(sizeof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump) == 0x0001E8, "Wrong size on AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, EntryPoint) == 0x000000, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetTweakParameterValue_ReturnValue) == 0x000004, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetTweakParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_CreateDelegate_OutputDelegate_4) == 0x000058, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, Temp_int_Variable) == 0x00006C, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, Temp_int_Variable_1) == 0x000070, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetNPCCombatJumpTargetLocation_target_location_out) == 0x000074, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetNPCCombatJumpTargetLocation_target_location_out' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetNPCCombatJumpTargetLocation_ReturnValue) == 0x000080, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetNPCCombatJumpTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_Event_bWasCancelled) == 0x000081, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_Event_EventData) == 0x000088, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000140, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_DynamicCast_AsCACharacter_NPC) == 0x000148, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000154, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_MakeVector_ReturnValue) == 0x00015C, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetNearestVectorIndex_ReturnValue) == 0x000168, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetNearestVectorIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_Select_Default) == 0x000170, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetOwningActorFromActorInfo_ReturnValue_1) == 0x000178, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetOwningActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000184, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_BreakVector_X) == 0x000190, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_BreakVector_Y) == 0x000194, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_BreakVector_Z) == 0x000198, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetOwningActorFromActorInfo_ReturnValue_2) == 0x0001A0, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetOwningActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_BreakVector_X_1) == 0x0001A8, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_BreakVector_Y_1) == 0x0001AC, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_BreakVector_Z_1) == 0x0001B0, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0001B4, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_Abs_ReturnValue) == 0x0001B8, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_IsNPCCombatJumpArcValid_ReturnValue) == 0x0001BC, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_IsNPCCombatJumpArcValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetPlayLength_ReturnValue) == 0x0001C0, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetPlayLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetTweakParameterValue_ReturnValue_1) == 0x0001C4, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetTweakParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_GetTweakParameterValue_ReturnValue_2) == 0x0001C8, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_GetTweakParameterValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, K2Node_Select_Default_1) == 0x0001CC, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0001D0, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0001D8, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'AB_Elite_CombatJump_C_ExecuteUbergraph_AB_Elite_CombatJump::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function AB_Elite_CombatJump.AB_Elite_CombatJump_C.K2_ActivateAbilityFromEvent
// 0x00B8 (0x00B8 - 0x0000)
struct AB_Elite_CombatJump_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_Elite_CombatJump_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on AB_Elite_CombatJump_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(AB_Elite_CombatJump_C_K2_ActivateAbilityFromEvent) == 0x0000B8, "Wrong size on AB_Elite_CombatJump_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(AB_Elite_CombatJump_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'AB_Elite_CombatJump_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function AB_Elite_CombatJump.AB_Elite_CombatJump_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct AB_Elite_CombatJump_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Elite_CombatJump_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on AB_Elite_CombatJump_C_K2_OnEndAbility");
static_assert(sizeof(AB_Elite_CombatJump_C_K2_OnEndAbility) == 0x000001, "Wrong size on AB_Elite_CombatJump_C_K2_OnEndAbility");
static_assert(offsetof(AB_Elite_CombatJump_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'AB_Elite_CombatJump_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
