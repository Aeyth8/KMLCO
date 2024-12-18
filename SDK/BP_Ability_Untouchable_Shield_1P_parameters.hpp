#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ability_Untouchable_Shield_1P

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Ability_Untouchable_Shield_1P.BP_Ability_Untouchable_Shield_1P_C.ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P
// 0x0060 (0x0060 - 0x0000)
struct BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCANiagaraComponentFOV*                 CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_hit_location;                         // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_absorbed_damage_percentage;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                K2Node_DynamicCast_AsCACharacter_Main_Player;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSpecificPawnMesh_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCANiagaraComponentFOV*                 CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue_1; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P) == 0x000008, "Wrong alignment on BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P");
static_assert(sizeof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P) == 0x000060, "Wrong size on BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, EntryPoint) == 0x000000, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue) == 0x000010, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_IsValid_ReturnValue_2) == 0x000019, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_IsValid_ReturnValue_3) == 0x00001A, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, K2Node_Event_hit_location) == 0x00001C, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::K2Node_Event_hit_location' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, K2Node_Event_absorbed_damage_percentage) == 0x000028, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::K2Node_Event_absorbed_damage_percentage' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_FClamp_ReturnValue) == 0x00002C, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_GetAttachParentActor_ReturnValue) == 0x000030, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, K2Node_DynamicCast_AsCACharacter_Main_Player) == 0x000038, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::K2Node_DynamicCast_AsCACharacter_Main_Player' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_GetSpecificPawnMesh_ReturnValue) == 0x000048, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_GetSpecificPawnMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue_1) == 0x000050, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_IsValid_ReturnValue_4) == 0x000058, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P, CallFunc_IsValid_ReturnValue_5) == 0x000059, "Member 'BP_Ability_Untouchable_Shield_1P_C_ExecuteUbergraph_BP_Ability_Untouchable_Shield_1P::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function BP_Ability_Untouchable_Shield_1P.BP_Ability_Untouchable_Shield_1P_C.OnShieldHit
// 0x0010 (0x0010 - 0x0000)
struct BP_Ability_Untouchable_Shield_1P_C_OnShieldHit final
{
public:
	struct FVector                                Hit_location;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Absorbed_damage_percentage;                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ability_Untouchable_Shield_1P_C_OnShieldHit) == 0x000004, "Wrong alignment on BP_Ability_Untouchable_Shield_1P_C_OnShieldHit");
static_assert(sizeof(BP_Ability_Untouchable_Shield_1P_C_OnShieldHit) == 0x000010, "Wrong size on BP_Ability_Untouchable_Shield_1P_C_OnShieldHit");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_OnShieldHit, Hit_location) == 0x000000, "Member 'BP_Ability_Untouchable_Shield_1P_C_OnShieldHit::Hit_location' has a wrong offset!");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_OnShieldHit, Absorbed_damage_percentage) == 0x00000C, "Member 'BP_Ability_Untouchable_Shield_1P_C_OnShieldHit::Absorbed_damage_percentage' has a wrong offset!");

// Function BP_Ability_Untouchable_Shield_1P.BP_Ability_Untouchable_Shield_1P_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Ability_Untouchable_Shield_1P_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ability_Untouchable_Shield_1P_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Ability_Untouchable_Shield_1P_C_ReceiveTick");
static_assert(sizeof(BP_Ability_Untouchable_Shield_1P_C_ReceiveTick) == 0x000004, "Wrong size on BP_Ability_Untouchable_Shield_1P_C_ReceiveTick");
static_assert(offsetof(BP_Ability_Untouchable_Shield_1P_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Ability_Untouchable_Shield_1P_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

