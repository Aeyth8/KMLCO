#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_EMP

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CAAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCA_EMP.GCA_EMP_C.ExecuteUbergraph_GCA_EMP
// 0x0068 (0x0068 - 0x0000)
struct GCA_EMP_C_ExecuteUbergraph_GCA_EMP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             Temp_delegate_Variable;                            // 0x0030(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0014)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_CanBeDialogueSpokesperson_ReturnValue; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasGameplayTag_ReturnValue;               // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP) == 0x000008, "Wrong alignment on GCA_EMP_C_ExecuteUbergraph_GCA_EMP");
static_assert(sizeof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP) == 0x000068, "Wrong size on GCA_EMP_C_ExecuteUbergraph_GCA_EMP");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, EntryPoint) == 0x000000, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, CallFunc_RandomBool_ReturnValue) == 0x000004, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000028, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, Temp_delegate_Variable) == 0x000030, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000058, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, CallFunc_BP_CanBeDialogueSpokesperson_ReturnValue) == 0x000060, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::CallFunc_BP_CanBeDialogueSpokesperson_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_ExecuteUbergraph_GCA_EMP, CallFunc_HasGameplayTag_ReturnValue) == 0x000062, "Member 'GCA_EMP_C_ExecuteUbergraph_GCA_EMP::CallFunc_HasGameplayTag_ReturnValue' has a wrong offset!");

// Function GCA_EMP.GCA_EMP_C.WhileActive
// 0x0218 (0x0218 - 0x0000)
struct GCA_EMP_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           NewLocalVar_0;                                     // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123[0x5];                                      // 0x0123(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x013C(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x0158(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0170(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x0188(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBeingViewed_ReturnValue;                // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A[0x6];                                      // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnCANiagaraSystemAttached_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue_1;    // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_2;                          // 0x01B0(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_2;            // 0x01C8(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_2;                 // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DA[0x6];                                      // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnCANiagaraSystemAttached_ReturnValue_1; // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_3;                          // 0x01E8(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_3;            // 0x0200(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_3;                 // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCA_EMP_C_WhileActive) == 0x000008, "Wrong alignment on GCA_EMP_C_WhileActive");
static_assert(sizeof(GCA_EMP_C_WhileActive) == 0x000218, "Wrong size on GCA_EMP_C_WhileActive");
static_assert(offsetof(GCA_EMP_C_WhileActive, MyTarget) == 0x000000, "Member 'GCA_EMP_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, Parameters) == 0x000008, "Member 'GCA_EMP_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, ReturnValue) == 0x0000F8, "Member 'GCA_EMP_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, NewLocalVar_0) == 0x000100, "Member 'GCA_EMP_C_WhileActive::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000108, "Member 'GCA_EMP_C_WhileActive::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GCA_EMP_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, K2Node_DynamicCast_AsCACharacter) == 0x000118, "Member 'GCA_EMP_C_WhileActive::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GCA_EMP_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_IsValid_ReturnValue_1) == 0x000121, "Member 'GCA_EMP_C_WhileActive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_IsValid_ReturnValue_2) == 0x000122, "Member 'GCA_EMP_C_WhileActive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_GetDisplayName_ReturnValue) == 0x000128, "Member 'GCA_EMP_C_WhileActive::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_Contains_ReturnValue) == 0x000138, "Member 'GCA_EMP_C_WhileActive::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, Temp_delegate_Variable) == 0x00013C, "Member 'GCA_EMP_C_WhileActive::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000150, "Member 'GCA_EMP_C_WhileActive::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, Temp_delegate_Variable_1) == 0x000158, "Member 'GCA_EMP_C_WhileActive::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_playback_instance) == 0x000170, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_play_success) == 0x000180, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_playback_instance_1) == 0x000188, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_play_success_1) == 0x000198, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_play_success_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_IsBeingViewed_ReturnValue) == 0x000199, "Member 'GCA_EMP_C_WhileActive::CallFunc_IsBeingViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_SpawnCANiagaraSystemAttached_ReturnValue) == 0x0001A0, "Member 'GCA_EMP_C_WhileActive::CallFunc_SpawnCANiagaraSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_GetLocalPlayerCharacter_ReturnValue_1) == 0x0001A8, "Member 'GCA_EMP_C_WhileActive::CallFunc_GetLocalPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, Temp_delegate_Variable_2) == 0x0001B0, "Member 'GCA_EMP_C_WhileActive::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_playback_instance_2) == 0x0001C8, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_playback_instance_2' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_play_success_2) == 0x0001D8, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_play_success_2' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_IsValid_ReturnValue_3) == 0x0001D9, "Member 'GCA_EMP_C_WhileActive::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_SpawnCANiagaraSystemAttached_ReturnValue_1) == 0x0001E0, "Member 'GCA_EMP_C_WhileActive::CallFunc_SpawnCANiagaraSystemAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, Temp_delegate_Variable_3) == 0x0001E8, "Member 'GCA_EMP_C_WhileActive::Temp_delegate_Variable_3' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_playback_instance_3) == 0x000200, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_playback_instance_3' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_WhileActive, CallFunc_PlayEvent_play_success_3) == 0x000210, "Member 'GCA_EMP_C_WhileActive::CallFunc_PlayEvent_play_success_3' has a wrong offset!");

// Function GCA_EMP.GCA_EMP_C.OnRemove
// 0x0168 (0x0168 - 0x0000)
struct GCA_EMP_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_MainPlayer*                K2Node_DynamicCast_AsCACharacter_Main_Player;      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBeingViewed_ReturnValue;                // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x2];                                      // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0134(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0150(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCA_EMP_C_OnRemove) == 0x000008, "Wrong alignment on GCA_EMP_C_OnRemove");
static_assert(sizeof(GCA_EMP_C_OnRemove) == 0x000168, "Wrong size on GCA_EMP_C_OnRemove");
static_assert(offsetof(GCA_EMP_C_OnRemove, MyTarget) == 0x000000, "Member 'GCA_EMP_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, Parameters) == 0x000008, "Member 'GCA_EMP_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, ReturnValue) == 0x0000F8, "Member 'GCA_EMP_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_GetDisplayName_ReturnValue) == 0x000100, "Member 'GCA_EMP_C_OnRemove::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_Contains_ReturnValue) == 0x000110, "Member 'GCA_EMP_C_OnRemove::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, K2Node_DynamicCast_AsCACharacter_Main_Player) == 0x000118, "Member 'GCA_EMP_C_OnRemove::K2Node_DynamicCast_AsCACharacter_Main_Player' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GCA_EMP_C_OnRemove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_IsBeingViewed_ReturnValue) == 0x000121, "Member 'GCA_EMP_C_OnRemove::CallFunc_IsBeingViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000128, "Member 'GCA_EMP_C_OnRemove::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'GCA_EMP_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_IsValid_ReturnValue_1) == 0x000131, "Member 'GCA_EMP_C_OnRemove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, Temp_delegate_Variable) == 0x000134, "Member 'GCA_EMP_C_OnRemove::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_IsValid_ReturnValue_2) == 0x000148, "Member 'GCA_EMP_C_OnRemove::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_PlayEvent_playback_instance) == 0x000150, "Member 'GCA_EMP_C_OnRemove::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_PlayEvent_play_success) == 0x000160, "Member 'GCA_EMP_C_OnRemove::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(GCA_EMP_C_OnRemove, CallFunc_IsValid_ReturnValue_3) == 0x000161, "Member 'GCA_EMP_C_OnRemove::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

}
