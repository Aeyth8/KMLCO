#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeistBase_GM

#include "Basic.hpp"

#include "Keaton_structs.hpp"


namespace SDK::Params
{

// Function BP_HeistBase_GM.BP_HeistBase_GM_C.ExecuteUbergraph_BP_HeistBase_GM
// 0x0078 (0x0078 - 0x0000)
struct BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_vault_door;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCATeamID                              K2Node_Event_team;                                 // 0x0010(0x0004)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAGameState*                           CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_VaultGateComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_Event_NewPlayer;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAPlayerState*                         K2Node_DynamicCast_AsCAPlayer_State;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetDeathCount_ReturnValue;                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryActivateAbilityByClass_ReturnValue;    // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_ByteByte_ReturnValue;             // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_GetPrimaryMessageType_event_type;         // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureActive_ReturnValue;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM) == 0x000008, "Wrong alignment on BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM");
static_assert(sizeof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM) == 0x000078, "Wrong size on BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, EntryPoint) == 0x000000, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, K2Node_Event_vault_door) == 0x000008, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::K2Node_Event_vault_door' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, K2Node_Event_team) == 0x000010, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::K2Node_Event_team' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, K2Node_Event_NewPlayer) == 0x000028, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::K2Node_Event_NewPlayer' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_K2_GetPawn_ReturnValue) == 0x000038, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000048, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_IsValid_ReturnValue_3) == 0x000050, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, K2Node_DynamicCast_AsCAPlayer_State) == 0x000058, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::K2Node_DynamicCast_AsCAPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_GetDeathCount_ReturnValue) == 0x000061, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_GetDeathCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_TryActivateAbilityByClass_ReturnValue) == 0x000062, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_TryActivateAbilityByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_Greater_ByteByte_ReturnValue) == 0x000063, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_Greater_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_GetPrimaryMessageType_event_type) == 0x000064, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_GetPrimaryMessageType_event_type' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM, CallFunc_IsFeatureActive_ReturnValue) == 0x000070, "Member 'BP_HeistBase_GM_C_ExecuteUbergraph_BP_HeistBase_GM::CallFunc_IsFeatureActive_ReturnValue' has a wrong offset!");

// Function BP_HeistBase_GM.BP_HeistBase_GM_C.K2_OnRestartPlayer
// 0x0008 (0x0008 - 0x0000)
struct BP_HeistBase_GM_C_K2_OnRestartPlayer final
{
public:
	class AController*                            NewPlayer;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HeistBase_GM_C_K2_OnRestartPlayer) == 0x000008, "Wrong alignment on BP_HeistBase_GM_C_K2_OnRestartPlayer");
static_assert(sizeof(BP_HeistBase_GM_C_K2_OnRestartPlayer) == 0x000008, "Wrong size on BP_HeistBase_GM_C_K2_OnRestartPlayer");
static_assert(offsetof(BP_HeistBase_GM_C_K2_OnRestartPlayer, NewPlayer) == 0x000000, "Member 'BP_HeistBase_GM_C_K2_OnRestartPlayer::NewPlayer' has a wrong offset!");

// Function BP_HeistBase_GM.BP_HeistBase_GM_C.OnVaultDoorStateUpdate
// 0x0010 (0x0010 - 0x0000)
struct BP_HeistBase_GM_C_OnVaultDoorStateUpdate final
{
public:
	class AActor*                                 Vault_door;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCATeamID                              Team;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HeistBase_GM_C_OnVaultDoorStateUpdate) == 0x000008, "Wrong alignment on BP_HeistBase_GM_C_OnVaultDoorStateUpdate");
static_assert(sizeof(BP_HeistBase_GM_C_OnVaultDoorStateUpdate) == 0x000010, "Wrong size on BP_HeistBase_GM_C_OnVaultDoorStateUpdate");
static_assert(offsetof(BP_HeistBase_GM_C_OnVaultDoorStateUpdate, Vault_door) == 0x000000, "Member 'BP_HeistBase_GM_C_OnVaultDoorStateUpdate::Vault_door' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_OnVaultDoorStateUpdate, Team) == 0x000008, "Member 'BP_HeistBase_GM_C_OnVaultDoorStateUpdate::Team' has a wrong offset!");

// Function BP_HeistBase_GM.BP_HeistBase_GM_C.ProcessExtraction
// 0x0048 (0x0048 - 0x0000)
struct BP_HeistBase_GM_C_ProcessExtraction final
{
public:
	TArray<class AActor*>                         Actors;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCAMetricsManager*                      CallFunc_GetMetricsManager_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HeistBase_GM_C_ProcessExtraction) == 0x000008, "Wrong alignment on BP_HeistBase_GM_C_ProcessExtraction");
static_assert(sizeof(BP_HeistBase_GM_C_ProcessExtraction) == 0x000048, "Wrong size on BP_HeistBase_GM_C_ProcessExtraction");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, Actors) == 0x000000, "Member 'BP_HeistBase_GM_C_ProcessExtraction::Actors' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_HeistBase_GM_C_ProcessExtraction::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_HeistBase_GM_C_ProcessExtraction::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_HeistBase_GM_C_ProcessExtraction::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_HeistBase_GM_C_ProcessExtraction::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, K2Node_DynamicCast_AsCACharacter) == 0x000028, "Member 'BP_HeistBase_GM_C_ProcessExtraction::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_HeistBase_GM_C_ProcessExtraction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'BP_HeistBase_GM_C_ProcessExtraction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_HeistBase_GM_C_ProcessExtraction::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, CallFunc_GetMetricsManager_ReturnValue) == 0x000038, "Member 'BP_HeistBase_GM_C_ProcessExtraction::CallFunc_GetMetricsManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeistBase_GM_C_ProcessExtraction, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'BP_HeistBase_GM_C_ProcessExtraction::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_HeistBase_GM.BP_HeistBase_GM_C.ExtractionNotifications
// 0x0008 (0x0008 - 0x0000)
struct BP_HeistBase_GM_C_ExtractionNotifications final
{
public:
	class AActor*                                 ExtractionTerminal;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HeistBase_GM_C_ExtractionNotifications) == 0x000008, "Wrong alignment on BP_HeistBase_GM_C_ExtractionNotifications");
static_assert(sizeof(BP_HeistBase_GM_C_ExtractionNotifications) == 0x000008, "Wrong size on BP_HeistBase_GM_C_ExtractionNotifications");
static_assert(offsetof(BP_HeistBase_GM_C_ExtractionNotifications, ExtractionTerminal) == 0x000000, "Member 'BP_HeistBase_GM_C_ExtractionNotifications::ExtractionTerminal' has a wrong offset!");

}

