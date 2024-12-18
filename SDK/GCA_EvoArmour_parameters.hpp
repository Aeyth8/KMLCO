#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_EvoArmour

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function GCA_EvoArmour.GCA_EvoArmour_C.ExecuteUbergraph_GCA_EvoArmour
// 0x0010 (0x0010 - 0x0000)
struct GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Player;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour) == 0x000008, "Wrong alignment on GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour");
static_assert(sizeof(GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour) == 0x000010, "Wrong size on GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour");
static_assert(offsetof(GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour, EntryPoint) == 0x000000, "Member 'GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour, K2Node_CustomEvent_Player) == 0x000008, "Member 'GCA_EvoArmour_C_ExecuteUbergraph_GCA_EvoArmour::K2Node_CustomEvent_Player' has a wrong offset!");

// Function GCA_EvoArmour.GCA_EvoArmour_C.TriggerPostProcess
// 0x0008 (0x0008 - 0x0000)
struct GCA_EvoArmour_C_TriggerPostProcess final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCA_EvoArmour_C_TriggerPostProcess) == 0x000008, "Wrong alignment on GCA_EvoArmour_C_TriggerPostProcess");
static_assert(sizeof(GCA_EvoArmour_C_TriggerPostProcess) == 0x000008, "Wrong size on GCA_EvoArmour_C_TriggerPostProcess");
static_assert(offsetof(GCA_EvoArmour_C_TriggerPostProcess, Player) == 0x000000, "Member 'GCA_EvoArmour_C_TriggerPostProcess::Player' has a wrong offset!");

// Function GCA_EvoArmour.GCA_EvoArmour_C.WhileActive
// 0x0188 (0x0188 - 0x0000)
struct GCA_EvoArmour_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBeingViewed_ReturnValue;                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x011C(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	class UNiagaraComponent*                      CallFunc_SpawnCANiagaraSystemAttached_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0138(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnCANiagaraSystemAttached_ReturnValue_1; // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x0158(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x0170(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCA_EvoArmour_C_WhileActive) == 0x000008, "Wrong alignment on GCA_EvoArmour_C_WhileActive");
static_assert(sizeof(GCA_EvoArmour_C_WhileActive) == 0x000188, "Wrong size on GCA_EvoArmour_C_WhileActive");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, MyTarget) == 0x000000, "Member 'GCA_EvoArmour_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, Parameters) == 0x000008, "Member 'GCA_EvoArmour_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, ReturnValue) == 0x0000F8, "Member 'GCA_EvoArmour_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000100, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, K2Node_DynamicCast_AsCACharacter) == 0x000110, "Member 'GCA_EvoArmour_C_WhileActive::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GCA_EvoArmour_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_IsBeingViewed_ReturnValue) == 0x000119, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_IsBeingViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_IsValid_ReturnValue_1) == 0x00011A, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_IsValid_ReturnValue_2) == 0x00011B, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, Temp_delegate_Variable) == 0x00011C, "Member 'GCA_EvoArmour_C_WhileActive::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_SpawnCANiagaraSystemAttached_ReturnValue) == 0x000130, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_SpawnCANiagaraSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_PlayEvent_playback_instance) == 0x000138, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_PlayEvent_play_success) == 0x000148, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_SpawnCANiagaraSystemAttached_ReturnValue_1) == 0x000150, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_SpawnCANiagaraSystemAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, Temp_delegate_Variable_1) == 0x000158, "Member 'GCA_EvoArmour_C_WhileActive::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_PlayEvent_playback_instance_1) == 0x000170, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_WhileActive, CallFunc_PlayEvent_play_success_1) == 0x000180, "Member 'GCA_EvoArmour_C_WhileActive::CallFunc_PlayEvent_play_success_1' has a wrong offset!");

// Function GCA_EvoArmour.GCA_EvoArmour_C.OnRemove
// 0x0100 (0x0100 - 0x0000)
struct GCA_EvoArmour_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCA_EvoArmour_C_OnRemove) == 0x000008, "Wrong alignment on GCA_EvoArmour_C_OnRemove");
static_assert(sizeof(GCA_EvoArmour_C_OnRemove) == 0x000100, "Wrong size on GCA_EvoArmour_C_OnRemove");
static_assert(offsetof(GCA_EvoArmour_C_OnRemove, MyTarget) == 0x000000, "Member 'GCA_EvoArmour_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_OnRemove, Parameters) == 0x000008, "Member 'GCA_EvoArmour_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_OnRemove, ReturnValue) == 0x0000F8, "Member 'GCA_EvoArmour_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000F9, "Member 'GCA_EvoArmour_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_OnRemove, CallFunc_IsValid_ReturnValue_1) == 0x0000FA, "Member 'GCA_EvoArmour_C_OnRemove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EvoArmour_C_OnRemove, CallFunc_IsValid_ReturnValue_2) == 0x0000FB, "Member 'GCA_EvoArmour_C_OnRemove::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

