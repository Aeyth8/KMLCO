#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MuzzleEffect_NPC_Drone_EMP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_MuzzleEffect_NPC_Drone_EMP.BP_MuzzleEffect_NPC_Drone_EMP_C.ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP
// 0x04B0 (0x04B0 - 0x0000)
struct BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetMuzzleMeshComponent_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_duration;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_tween_float_output;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOUT_EXEC_TWEEN                               CallFunc_tween_float_exec;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           K2Node_CustomEvent_character;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                    K2Node_CustomEvent_death_gameplay_effect_spec;     // 0x0028(0x0298)(ConstParm)
	float                                         K2Node_CustomEvent_damage_magnitude;               // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNetworkedHit                          K2Node_CustomEvent_networked_hit;                  // 0x02C8(0x0068)(ConstParm, NoDestructor)
	const class AActor*                           K2Node_CustomEvent_killer;                         // 0x0330(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Weapon_NPC_Drone_EMP_C*             K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP;      // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_Character_C*                    K2Node_DynamicCast_AsBP_NPC_Character;             // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Weapon_NPC_Drone_EMP_C*             K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_1;    // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x3];                                      // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x036C(0x0014)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0388(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_Character_C*                    K2Node_DynamicCast_AsBP_NPC_Character_1;           // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_399[0x3];                                      // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x039C(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B1[0x3];                                      // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x03B4(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_2;                          // 0x03C8(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(class ACACharacter* Character, struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, struct FNetworkedHit& Networked_hit, class AActor* Killer)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x03DC(0x0014)(ZeroConstructor, NoDestructor)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x03F0(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x0408(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_2;            // 0x0420(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_2;                 // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Weapon_NPC_Drone_EMP_C*             K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_2;    // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Weapon_NPC_Drone_EMP_C*             K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_3;    // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC_1;            // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Weapon_NPC_Drone_EMP_C*             K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_4;    // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC_2;            // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP) == 0x000008, "Wrong alignment on BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP");
static_assert(sizeof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP) == 0x0004B0, "Wrong size on BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, EntryPoint) == 0x000000, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_GetMuzzleMeshComponent_ReturnValue) == 0x000008, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_GetMuzzleMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_Event_duration) == 0x000010, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_Event_duration' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_tween_float_output) == 0x000014, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_tween_float_output' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_tween_float_exec) == 0x000018, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_tween_float_exec' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_K2_AttachToComponent_ReturnValue) == 0x00001A, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_IsValid_ReturnValue) == 0x00001B, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_Event_EndPlayReason) == 0x00001C, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_CustomEvent_character) == 0x000020, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_CustomEvent_character' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_CustomEvent_death_gameplay_effect_spec) == 0x000028, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_CustomEvent_death_gameplay_effect_spec' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_CustomEvent_damage_magnitude) == 0x0002C0, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_CustomEvent_damage_magnitude' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_CustomEvent_networked_hit) == 0x0002C8, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_CustomEvent_networked_hit' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_CustomEvent_killer) == 0x000330, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_CustomEvent_killer' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP) == 0x000338, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess) == 0x000340, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_GetOwner_ReturnValue) == 0x000348, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsBP_NPC_Character) == 0x000350, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsBP_NPC_Character' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_1) == 0x000358, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_1) == 0x000360, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_2) == 0x000368, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_CreateDelegate_OutputDelegate) == 0x00036C, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_GetOwner_ReturnValue_1) == 0x000380, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000388, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsBP_NPC_Character_1) == 0x000390, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsBP_NPC_Character_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_3) == 0x000398, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, Temp_delegate_Variable) == 0x00039C, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_IsValid_ReturnValue_1) == 0x0003B0, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, Temp_delegate_Variable_1) == 0x0003B4, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, Temp_delegate_Variable_2) == 0x0003C8, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003DC, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_PlayEvent_playback_instance) == 0x0003F0, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_PlayEvent_play_success) == 0x000400, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_PlayEvent_playback_instance_1) == 0x000408, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_PlayEvent_play_success_1) == 0x000418, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_PlayEvent_play_success_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_PlayEvent_playback_instance_2) == 0x000420, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_PlayEvent_playback_instance_2' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_PlayEvent_play_success_2) == 0x000430, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_PlayEvent_play_success_2' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_2) == 0x000438, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_2' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_4) == 0x000440, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_GetOwner_ReturnValue_2) == 0x000448, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsCACharacter_NPC) == 0x000450, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_5) == 0x000458, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_3) == 0x000460, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_3' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_6) == 0x000468, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_GetOwner_ReturnValue_3) == 0x000470, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsCACharacter_NPC_1) == 0x000478, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsCACharacter_NPC_1' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_7) == 0x000480, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_4) == 0x000488, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsBP_Weapon_NPC_Drone_EMP_4' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_8) == 0x000490, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, CallFunc_GetOwner_ReturnValue_4) == 0x000498, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_AsCACharacter_NPC_2) == 0x0004A0, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_AsCACharacter_NPC_2' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP, K2Node_DynamicCast_bSuccess_9) == 0x0004A8, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ExecuteUbergraph_BP_MuzzleEffect_NPC_Drone_EMP::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");

// Function BP_MuzzleEffect_NPC_Drone_EMP.BP_MuzzleEffect_NPC_Drone_EMP_C.OwningNPCCharacterDeath
// 0x0318 (0x0318 - 0x0000)
struct BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath final
{
public:
	class ACACharacter*                           Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                    Death_gameplay_effect_spec;                        // 0x0008(0x0298)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         Damage_magnitude;                                  // 0x02A0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNetworkedHit                          Networked_hit;                                     // 0x02A8(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	const class AActor*                           Killer;                                            // 0x0310(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath) == 0x000008, "Wrong alignment on BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath");
static_assert(sizeof(BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath) == 0x000318, "Wrong size on BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath, Character) == 0x000000, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath::Character' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath, Death_gameplay_effect_spec) == 0x000008, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath::Death_gameplay_effect_spec' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath, Damage_magnitude) == 0x0002A0, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath::Damage_magnitude' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath, Networked_hit) == 0x0002A8, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath::Networked_hit' has a wrong offset!");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath, Killer) == 0x000310, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_OwningNPCCharacterDeath::Killer' has a wrong offset!");

// Function BP_MuzzleEffect_NPC_Drone_EMP.BP_MuzzleEffect_NPC_Drone_EMP_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_MuzzleEffect_NPC_Drone_EMP_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MuzzleEffect_NPC_Drone_EMP_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_MuzzleEffect_NPC_Drone_EMP_C_ReceiveEndPlay");
static_assert(sizeof(BP_MuzzleEffect_NPC_Drone_EMP_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_MuzzleEffect_NPC_Drone_EMP_C_ReceiveEndPlay");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_MuzzleEffect_NPC_Drone_EMP.BP_MuzzleEffect_NPC_Drone_EMP_C.OnStartCharging
// 0x0004 (0x0004 - 0x0000)
struct BP_MuzzleEffect_NPC_Drone_EMP_C_OnStartCharging final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MuzzleEffect_NPC_Drone_EMP_C_OnStartCharging) == 0x000004, "Wrong alignment on BP_MuzzleEffect_NPC_Drone_EMP_C_OnStartCharging");
static_assert(sizeof(BP_MuzzleEffect_NPC_Drone_EMP_C_OnStartCharging) == 0x000004, "Wrong size on BP_MuzzleEffect_NPC_Drone_EMP_C_OnStartCharging");
static_assert(offsetof(BP_MuzzleEffect_NPC_Drone_EMP_C_OnStartCharging, Duration) == 0x000000, "Member 'BP_MuzzleEffect_NPC_Drone_EMP_C_OnStartCharging::Duration' has a wrong offset!");

}

