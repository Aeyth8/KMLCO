#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CAGameState

#include "Basic.hpp"

#include "Keaton_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CAGameState.BP_CAGameState_C.ExecuteUbergraph_BP_CAGameState
// 0x0048 (0x0048 - 0x0000)
struct BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	const class UCAUIHUDInterface*                CallFunc_GetUIHUDInterface_ReturnValue;            // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYMatchState NewMatchState)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0014)(ZeroConstructor, NoDestructor)
	EYMatchState                                  K2Node_CustomEvent_newMatchState;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState) == 0x000008, "Wrong alignment on BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState");
static_assert(sizeof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState) == 0x000048, "Wrong size on BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, EntryPoint) == 0x000000, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, CallFunc_GetUIHUDInterface_ReturnValue) == 0x000018, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::CallFunc_GetUIHUDInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, K2Node_CustomEvent_newMatchState) == 0x000040, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::K2Node_CustomEvent_newMatchState' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, K2Node_SwitchEnum_CmpSuccess) == 0x000041, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState, CallFunc_IsDedicatedServer_ReturnValue) == 0x000042, "Member 'BP_CAGameState_C_ExecuteUbergraph_BP_CAGameState::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function BP_CAGameState.BP_CAGameState_C.OnMatchStateChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_CAGameState_C_OnMatchStateChanged final
{
public:
	EYMatchState                                  NewMatchState;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CAGameState_C_OnMatchStateChanged) == 0x000001, "Wrong alignment on BP_CAGameState_C_OnMatchStateChanged");
static_assert(sizeof(BP_CAGameState_C_OnMatchStateChanged) == 0x000001, "Wrong size on BP_CAGameState_C_OnMatchStateChanged");
static_assert(offsetof(BP_CAGameState_C_OnMatchStateChanged, NewMatchState) == 0x000000, "Member 'BP_CAGameState_C_OnMatchStateChanged::NewMatchState' has a wrong offset!");

// Function BP_CAGameState.BP_CAGameState_C.AddPlayerToTeam
// 0x0018 (0x0018 - 0x0000)
struct BP_CAGameState_C_AddPlayerToTeam final
{
public:
	bool                                          A_;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_C*                 Controller;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CAGameState_C_AddPlayerToTeam) == 0x000008, "Wrong alignment on BP_CAGameState_C_AddPlayerToTeam");
static_assert(sizeof(BP_CAGameState_C_AddPlayerToTeam) == 0x000018, "Wrong size on BP_CAGameState_C_AddPlayerToTeam");
static_assert(offsetof(BP_CAGameState_C_AddPlayerToTeam, A_) == 0x000000, "Member 'BP_CAGameState_C_AddPlayerToTeam::A_' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_AddPlayerToTeam, Controller) == 0x000008, "Member 'BP_CAGameState_C_AddPlayerToTeam::Controller' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_AddPlayerToTeam, CallFunc_Array_AddUnique_ReturnValue) == 0x000010, "Member 'BP_CAGameState_C_AddPlayerToTeam::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CAGameState_C_AddPlayerToTeam, CallFunc_Array_AddUnique_ReturnValue_1) == 0x000014, "Member 'BP_CAGameState_C_AddPlayerToTeam::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");

// Function BP_CAGameState.BP_CAGameState_C.CacheSpawnPoints
// 0x0010 (0x0010 - 0x0000)
struct BP_CAGameState_C_CacheSpawnPoints final
{
public:
	TArray<class ABP_CAPlayerStart_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_CAGameState_C_CacheSpawnPoints) == 0x000008, "Wrong alignment on BP_CAGameState_C_CacheSpawnPoints");
static_assert(sizeof(BP_CAGameState_C_CacheSpawnPoints) == 0x000010, "Wrong size on BP_CAGameState_C_CacheSpawnPoints");
static_assert(offsetof(BP_CAGameState_C_CacheSpawnPoints, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'BP_CAGameState_C_CacheSpawnPoints::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");

}
