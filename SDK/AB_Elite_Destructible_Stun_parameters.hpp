#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Elite_Destructible_Stun

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_Elite_Destructible_Stun.AB_Elite_Destructible_Stun_C.ExecuteUbergraph_AB_Elite_Destructible_Stun
// 0x00D8 (0x00D8 - 0x0000)
struct AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0040(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0054(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasGameplayTag_ReturnValue;               // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInAir_ReturnValue;                      // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC_1;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPlayLength_ReturnValue;                // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue;       // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun) == 0x000008, "Wrong alignment on AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun");
static_assert(sizeof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun) == 0x0000D8, "Wrong size on AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, EntryPoint) == 0x000000, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_CreateDelegate_OutputDelegate_3) == 0x000040, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_CreateDelegate_OutputDelegate_4) == 0x000054, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, Temp_bool_Variable) == 0x000068, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000070, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_DynamicCast_AsCACharacter_NPC) == 0x000078, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_HasGameplayTag_ReturnValue) == 0x000081, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_HasGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_IsInAir_ReturnValue) == 0x000082, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_IsInAir_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_Event_bWasCancelled) == 0x000083, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_GetOwningActorFromActorInfo_ReturnValue_1) == 0x000088, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_GetOwningActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_DynamicCast_AsCACharacter_NPC_1) == 0x000090, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_DynamicCast_AsCACharacter_NPC_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_GetPlayLength_ReturnValue) == 0x00009C, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_GetPlayLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000A0, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x0000A8, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_GetTweakParameterValue_ReturnValue) == 0x0000B0, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_GetTweakParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, K2Node_Select_Default) == 0x0000B8, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000C0, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0000C8, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'AB_Elite_Destructible_Stun_C_ExecuteUbergraph_AB_Elite_Destructible_Stun::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AB_Elite_Destructible_Stun.AB_Elite_Destructible_Stun_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct AB_Elite_Destructible_Stun_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Elite_Destructible_Stun_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on AB_Elite_Destructible_Stun_C_K2_OnEndAbility");
static_assert(sizeof(AB_Elite_Destructible_Stun_C_K2_OnEndAbility) == 0x000001, "Wrong size on AB_Elite_Destructible_Stun_C_K2_OnEndAbility");
static_assert(offsetof(AB_Elite_Destructible_Stun_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'AB_Elite_Destructible_Stun_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
