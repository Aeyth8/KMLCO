#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_JumpStart

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_Grunt_JumpStart.AB_Grunt_JumpStart_C.ExecuteUbergraph_AB_Grunt_JumpStart
// 0x01C0 (0x01C0 - 0x0000)
struct AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0014)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC_1;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0070(0x00B8)(ConstParm)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0128(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UNavLinkVerticalTraversalDataType*      K2Node_DynamicCast_AsNav_Link_Vertical_Traversal_Data_Type; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x013C(0x0014)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0160(0x0014)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetNearestVectorIndex_ReturnValue;        // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0184(0x0014)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetPlayLength_ReturnValue;                // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue_1;     // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue_2;     // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTweakParameterValue_ReturnValue_3;     // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart) == 0x000008, "Wrong alignment on AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart");
static_assert(sizeof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart) == 0x0001C0, "Wrong size on AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, EntryPoint) == 0x000000, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_GetTweakParameterValue_ReturnValue) == 0x000004, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_GetTweakParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, Temp_int_Variable) == 0x000030, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, Temp_int_Variable_1) == 0x000034, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000038, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_AsCACharacter) == 0x000040, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_AsCACharacter_NPC) == 0x000050, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_AsCACharacter_NPC_1) == 0x000060, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_AsCACharacter_NPC_1' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_Event_EventData) == 0x000070, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000128, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_AsNav_Link_Vertical_Traversal_Data_Type) == 0x000130, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_AsNav_Link_Vertical_Traversal_Data_Type' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_DynamicCast_bSuccess_3) == 0x000138, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_CreateDelegate_OutputDelegate_2) == 0x00013C, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_MakeVector_ReturnValue) == 0x000150, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_Event_bWasCancelled) == 0x00015C, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_CreateDelegate_OutputDelegate_3) == 0x000160, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_GetNearestVectorIndex_ReturnValue) == 0x000174, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_GetNearestVectorIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_Select_Default) == 0x000178, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_CreateDelegate_OutputDelegate_4) == 0x000184, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_GetPlayLength_ReturnValue) == 0x000198, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_GetPlayLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_GetTweakParameterValue_ReturnValue_1) == 0x00019C, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_GetTweakParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_GetTweakParameterValue_ReturnValue_2) == 0x0001A0, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_GetTweakParameterValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_GetTweakParameterValue_ReturnValue_3) == 0x0001A4, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_GetTweakParameterValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, K2Node_Select_Default_1) == 0x0001A8, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0001AC, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0001B0, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart, CallFunc_IsValid_ReturnValue_1) == 0x0001B8, "Member 'AB_Grunt_JumpStart_C_ExecuteUbergraph_AB_Grunt_JumpStart::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function AB_Grunt_JumpStart.AB_Grunt_JumpStart_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct AB_Grunt_JumpStart_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Grunt_JumpStart_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on AB_Grunt_JumpStart_C_K2_OnEndAbility");
static_assert(sizeof(AB_Grunt_JumpStart_C_K2_OnEndAbility) == 0x000001, "Wrong size on AB_Grunt_JumpStart_C_K2_OnEndAbility");
static_assert(offsetof(AB_Grunt_JumpStart_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'AB_Grunt_JumpStart_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function AB_Grunt_JumpStart.AB_Grunt_JumpStart_C.K2_ActivateAbilityFromEvent
// 0x00B8 (0x00B8 - 0x0000)
struct AB_Grunt_JumpStart_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_Grunt_JumpStart_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on AB_Grunt_JumpStart_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(AB_Grunt_JumpStart_C_K2_ActivateAbilityFromEvent) == 0x0000B8, "Wrong size on AB_Grunt_JumpStart_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(AB_Grunt_JumpStart_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'AB_Grunt_JumpStart_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

