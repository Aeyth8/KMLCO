#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_S_NPC_DroneRusher_OnDeathAoE

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_S_NPC_DroneRusher_OnDeathAoE.AB_S_NPC_DroneRusher_OnDeathAoE_C.ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE
// 0x0130 (0x0130 - 0x0000)
struct AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x00B8)(ConstParm)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0xF];                                       // 0x00E1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00F0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C* CallFunc_FinishSpawningActor_ReturnValue;          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE) == 0x000010, "Wrong alignment on AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE");
static_assert(sizeof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE) == 0x000130, "Wrong size on AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, EntryPoint) == 0x000000, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, K2Node_Event_EventData) == 0x000010, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, K2Node_DynamicCast_AsCACharacter_NPC) == 0x0000C8, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, K2Node_DynamicCast_AsPawn) == 0x0000D8, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, CallFunc_GetTransform_ReturnValue) == 0x0000F0, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000120, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE, CallFunc_FinishSpawningActor_ReturnValue) == 0x000128, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function AB_S_NPC_DroneRusher_OnDeathAoE.AB_S_NPC_DroneRusher_OnDeathAoE_C.K2_ActivateAbilityFromEvent
// 0x00B8 (0x00B8 - 0x0000)
struct AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent) == 0x0000B8, "Wrong size on AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

