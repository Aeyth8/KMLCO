#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EliteTank_JumpLand

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_EliteTank_JumpLand.AB_EliteTank_JumpLand_C.ExecuteUbergraph_AB_EliteTank_JumpLand
// 0x0150 (0x0150 - 0x0000)
struct AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo;      // 0x0030(0x0020)(ConstParm)
	struct FGameplayEffectRemovalInfo             Temp_struct_Variable;                              // 0x0050(0x0020)()
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0074(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo_1;    // 0x0098(0x0020)(ConstParm)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBeingTeleportedIn_ReturnValue;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0xE];                                       // 0x00C2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00D0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0110(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Projectile_S_Elite_JumpLandAoE_C*   CallFunc_FinishSpawningActor_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand) == 0x000010, "Wrong alignment on AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand");
static_assert(sizeof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand) == 0x000150, "Wrong size on AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, EntryPoint) == 0x000000, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, K2Node_CustomEvent_GameplayEffectRemovalInfo) == 0x000030, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::K2Node_CustomEvent_GameplayEffectRemovalInfo' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, Temp_struct_Variable) == 0x000050, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, K2Node_Event_bWasCancelled) == 0x000070, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000074, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_WaitForGameplayEffectRemoved_ReturnValue) == 0x000080, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_WaitForGameplayEffectRemoved_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000090, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, K2Node_CustomEvent_GameplayEffectRemovalInfo_1) == 0x000098, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::K2Node_CustomEvent_GameplayEffectRemovalInfo_1' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, K2Node_DynamicCast_AsCACharacter_NPC) == 0x0000B8, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_IsBeingTeleportedIn_ReturnValue) == 0x0000C1, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_IsBeingTeleportedIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_GetTransform_ReturnValue) == 0x0000D0, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_TransformLocation_ReturnValue) == 0x000100, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000110, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000140, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand, CallFunc_FinishSpawningActor_ReturnValue) == 0x000148, "Member 'AB_EliteTank_JumpLand_C_ExecuteUbergraph_AB_EliteTank_JumpLand::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function AB_EliteTank_JumpLand.AB_EliteTank_JumpLand_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct AB_EliteTank_JumpLand_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_EliteTank_JumpLand_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on AB_EliteTank_JumpLand_C_K2_OnEndAbility");
static_assert(sizeof(AB_EliteTank_JumpLand_C_K2_OnEndAbility) == 0x000001, "Wrong size on AB_EliteTank_JumpLand_C_K2_OnEndAbility");
static_assert(offsetof(AB_EliteTank_JumpLand_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'AB_EliteTank_JumpLand_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function AB_EliteTank_JumpLand.AB_EliteTank_JumpLand_C.OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67
// 0x0020 (0x0020 - 0x0000)
struct AB_EliteTank_JumpLand_C_OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67 final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_EliteTank_JumpLand_C_OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67) == 0x000008, "Wrong alignment on AB_EliteTank_JumpLand_C_OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67");
static_assert(sizeof(AB_EliteTank_JumpLand_C_OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67) == 0x000020, "Wrong size on AB_EliteTank_JumpLand_C_OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67");
static_assert(offsetof(AB_EliteTank_JumpLand_C_OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67, GameplayEffectRemovalInfo) == 0x000000, "Member 'AB_EliteTank_JumpLand_C_OnRemoved_B2480F9246D4065EDEC73FA00AEC3E67::GameplayEffectRemovalInfo' has a wrong offset!");

// Function AB_EliteTank_JumpLand.AB_EliteTank_JumpLand_C.InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67
// 0x0020 (0x0020 - 0x0000)
struct AB_EliteTank_JumpLand_C_InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67 final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_EliteTank_JumpLand_C_InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67) == 0x000008, "Wrong alignment on AB_EliteTank_JumpLand_C_InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67");
static_assert(sizeof(AB_EliteTank_JumpLand_C_InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67) == 0x000020, "Wrong size on AB_EliteTank_JumpLand_C_InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67");
static_assert(offsetof(AB_EliteTank_JumpLand_C_InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67, GameplayEffectRemovalInfo) == 0x000000, "Member 'AB_EliteTank_JumpLand_C_InvalidHandle_B2480F9246D4065EDEC73FA00AEC3E67::GameplayEffectRemovalInfo' has a wrong offset!");

}

