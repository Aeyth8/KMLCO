#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_ForceFeedback

#include "Basic.hpp"

#include "Keaton_structs.hpp"


namespace SDK::Params
{

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.ExecuteUbergraph_BPC_ForceFeedback
// 0x00C0 (0x00C0 - 0x0000)
struct BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FTeamData& Team_data)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Successful, float New_speed, float Speed_delta, float Yaw_delta, float Pitch_delta, int32 boosts_remaining)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_is_in_zerog;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_CustomEvent_Character;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECAPlayerAbilityMode                          K2Node_CustomEvent_PrevAbilityMode;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECAPlayerAbilityMode                          K2Node_CustomEvent_AbilityMode;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ACharacter* Character, ECAPlayerAbilityMode PrevAbilityMode, ECAPlayerAbilityMode AbilityMode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0014)(ZeroConstructor, NoDestructor)
	class ACAGameState*                           CallFunc_GetGameState_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTeamData                              K2Node_CustomEvent_team_data;                      // 0x0058(0x0030)(ConstParm, NoDestructor)
	struct FCATeamID                              CallFunc_GetTeamID_ReturnValue;                    // 0x0088(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_TeamIDTeamID_ReturnValue;      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Successful;                     // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F[0x1];                                       // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_new_speed;                      // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_speed_delta;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_yaw_delta;                      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_pitch_delta;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_boosts_remaining;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A6[0x2];                                       // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Is_in_zerog)>             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A8(0x0014)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback) == 0x000008, "Wrong alignment on BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback");
static_assert(sizeof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback) == 0x0000C0, "Wrong size on BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, EntryPoint) == 0x000000, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_is_in_zerog) == 0x00002C, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_is_in_zerog' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_Character) == 0x000030, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_PrevAbilityMode) == 0x000038, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_PrevAbilityMode' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_AbilityMode) == 0x000039, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_AbilityMode' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003A, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, CallFunc_GetGameState_ReturnValue) == 0x000050, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_team_data) == 0x000058, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_team_data' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, CallFunc_GetTeamID_ReturnValue) == 0x000088, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::CallFunc_GetTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, CallFunc_EqualEqual_TeamIDTeamID_ReturnValue) == 0x00008C, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::CallFunc_EqualEqual_TeamIDTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, CallFunc_BooleanAND_ReturnValue) == 0x00008D, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_Successful) == 0x00008E, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_Successful' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_new_speed) == 0x000090, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_new_speed' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_speed_delta) == 0x000094, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_speed_delta' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_yaw_delta) == 0x000098, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_yaw_delta' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_pitch_delta) == 0x00009C, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_pitch_delta' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CustomEvent_boosts_remaining) == 0x0000A0, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CustomEvent_boosts_remaining' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000A4, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000A5, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A8, "Member 'BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.ZeroGBoostStarted
// 0x0018 (0x0018 - 0x0000)
struct BPC_ForceFeedback_C_ZeroGBoostStarted final
{
public:
	bool                                          Successful;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         New_speed;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed_delta;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Yaw_delta;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch_delta;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         boosts_remaining;                                  // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_ForceFeedback_C_ZeroGBoostStarted) == 0x000004, "Wrong alignment on BPC_ForceFeedback_C_ZeroGBoostStarted");
static_assert(sizeof(BPC_ForceFeedback_C_ZeroGBoostStarted) == 0x000018, "Wrong size on BPC_ForceFeedback_C_ZeroGBoostStarted");
static_assert(offsetof(BPC_ForceFeedback_C_ZeroGBoostStarted, Successful) == 0x000000, "Member 'BPC_ForceFeedback_C_ZeroGBoostStarted::Successful' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ZeroGBoostStarted, New_speed) == 0x000004, "Member 'BPC_ForceFeedback_C_ZeroGBoostStarted::New_speed' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ZeroGBoostStarted, Speed_delta) == 0x000008, "Member 'BPC_ForceFeedback_C_ZeroGBoostStarted::Speed_delta' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ZeroGBoostStarted, Yaw_delta) == 0x00000C, "Member 'BPC_ForceFeedback_C_ZeroGBoostStarted::Yaw_delta' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ZeroGBoostStarted, Pitch_delta) == 0x000010, "Member 'BPC_ForceFeedback_C_ZeroGBoostStarted::Pitch_delta' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_ZeroGBoostStarted, boosts_remaining) == 0x000014, "Member 'BPC_ForceFeedback_C_ZeroGBoostStarted::boosts_remaining' has a wrong offset!");

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.TeamReachedThreshold
// 0x0030 (0x0030 - 0x0000)
struct BPC_ForceFeedback_C_TeamReachedThreshold final
{
public:
	struct FTeamData                              Team_data;                                         // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BPC_ForceFeedback_C_TeamReachedThreshold) == 0x000004, "Wrong alignment on BPC_ForceFeedback_C_TeamReachedThreshold");
static_assert(sizeof(BPC_ForceFeedback_C_TeamReachedThreshold) == 0x000030, "Wrong size on BPC_ForceFeedback_C_TeamReachedThreshold");
static_assert(offsetof(BPC_ForceFeedback_C_TeamReachedThreshold, Team_data) == 0x000000, "Member 'BPC_ForceFeedback_C_TeamReachedThreshold::Team_data' has a wrong offset!");

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.AbilityModeChanged
// 0x0010 (0x0010 - 0x0000)
struct BPC_ForceFeedback_C_AbilityModeChanged final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECAPlayerAbilityMode                          PrevAbilityMode;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECAPlayerAbilityMode                          AbilityMode;                                       // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_ForceFeedback_C_AbilityModeChanged) == 0x000008, "Wrong alignment on BPC_ForceFeedback_C_AbilityModeChanged");
static_assert(sizeof(BPC_ForceFeedback_C_AbilityModeChanged) == 0x000010, "Wrong size on BPC_ForceFeedback_C_AbilityModeChanged");
static_assert(offsetof(BPC_ForceFeedback_C_AbilityModeChanged, Character) == 0x000000, "Member 'BPC_ForceFeedback_C_AbilityModeChanged::Character' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_AbilityModeChanged, PrevAbilityMode) == 0x000008, "Member 'BPC_ForceFeedback_C_AbilityModeChanged::PrevAbilityMode' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_AbilityModeChanged, AbilityMode) == 0x000009, "Member 'BPC_ForceFeedback_C_AbilityModeChanged::AbilityMode' has a wrong offset!");

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.ZeroGStateChange
// 0x0001 (0x0001 - 0x0000)
struct BPC_ForceFeedback_C_ZeroGStateChange final
{
public:
	bool                                          Is_in_zerog;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPC_ForceFeedback_C_ZeroGStateChange) == 0x000001, "Wrong alignment on BPC_ForceFeedback_C_ZeroGStateChange");
static_assert(sizeof(BPC_ForceFeedback_C_ZeroGStateChange) == 0x000001, "Wrong size on BPC_ForceFeedback_C_ZeroGStateChange");
static_assert(offsetof(BPC_ForceFeedback_C_ZeroGStateChange, Is_in_zerog) == 0x000000, "Member 'BPC_ForceFeedback_C_ZeroGStateChange::Is_in_zerog' has a wrong offset!");

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.InitializeVariables
// 0x0028 (0x0028 - 0x0000)
struct BPC_ForceFeedback_C_InitializeVariables final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                K2Node_DynamicCast_AsCACharacter_Main_Player;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCACharMoveComp_Player*                 K2Node_DynamicCast_AsCAChar_Move_Comp_Player;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPC_ForceFeedback_C_InitializeVariables) == 0x000008, "Wrong alignment on BPC_ForceFeedback_C_InitializeVariables");
static_assert(sizeof(BPC_ForceFeedback_C_InitializeVariables) == 0x000028, "Wrong size on BPC_ForceFeedback_C_InitializeVariables");
static_assert(offsetof(BPC_ForceFeedback_C_InitializeVariables, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BPC_ForceFeedback_C_InitializeVariables::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_InitializeVariables, K2Node_DynamicCast_AsCACharacter_Main_Player) == 0x000008, "Member 'BPC_ForceFeedback_C_InitializeVariables::K2Node_DynamicCast_AsCACharacter_Main_Player' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_InitializeVariables, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BPC_ForceFeedback_C_InitializeVariables::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_InitializeVariables, K2Node_DynamicCast_AsCAChar_Move_Comp_Player) == 0x000018, "Member 'BPC_ForceFeedback_C_InitializeVariables::K2Node_DynamicCast_AsCAChar_Move_Comp_Player' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_InitializeVariables, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BPC_ForceFeedback_C_InitializeVariables::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.MMChange
// 0x0007 (0x0007 - 0x0000)
struct BPC_ForceFeedback_C_MMChange final
{
public:
	ECAPlayerAbilityMode                          PreviousMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECAPlayerAbilityMode                          CurrentMode;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPC_ForceFeedback_C_MMChange) == 0x000001, "Wrong alignment on BPC_ForceFeedback_C_MMChange");
static_assert(sizeof(BPC_ForceFeedback_C_MMChange) == 0x000007, "Wrong size on BPC_ForceFeedback_C_MMChange");
static_assert(offsetof(BPC_ForceFeedback_C_MMChange, PreviousMode) == 0x000000, "Member 'BPC_ForceFeedback_C_MMChange::PreviousMode' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_MMChange, CurrentMode) == 0x000001, "Member 'BPC_ForceFeedback_C_MMChange::CurrentMode' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_MMChange, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'BPC_ForceFeedback_C_MMChange::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_MMChange, K2Node_SwitchEnum_CmpSuccess_1) == 0x000003, "Member 'BPC_ForceFeedback_C_MMChange::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_MMChange, K2Node_SwitchEnum_CmpSuccess_2) == 0x000004, "Member 'BPC_ForceFeedback_C_MMChange::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_MMChange, K2Node_SwitchEnum_CmpSuccess_3) == 0x000005, "Member 'BPC_ForceFeedback_C_MMChange::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_MMChange, K2Node_SwitchEnum_CmpSuccess_4) == 0x000006, "Member 'BPC_ForceFeedback_C_MMChange::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.CheckForGravHookEnd
// 0x0004 (0x0004 - 0x0000)
struct BPC_ForceFeedback_C_CheckForGravHookEnd final
{
public:
	ECAPlayerAbilityMode                          PreviousMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECAPlayerAbilityMode                          CurrentMode;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPC_ForceFeedback_C_CheckForGravHookEnd) == 0x000001, "Wrong alignment on BPC_ForceFeedback_C_CheckForGravHookEnd");
static_assert(sizeof(BPC_ForceFeedback_C_CheckForGravHookEnd) == 0x000004, "Wrong size on BPC_ForceFeedback_C_CheckForGravHookEnd");
static_assert(offsetof(BPC_ForceFeedback_C_CheckForGravHookEnd, PreviousMode) == 0x000000, "Member 'BPC_ForceFeedback_C_CheckForGravHookEnd::PreviousMode' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_CheckForGravHookEnd, CurrentMode) == 0x000001, "Member 'BPC_ForceFeedback_C_CheckForGravHookEnd::CurrentMode' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_CheckForGravHookEnd, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'BPC_ForceFeedback_C_CheckForGravHookEnd::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPC_ForceFeedback_C_CheckForGravHookEnd, K2Node_SwitchEnum_CmpSuccess_1) == 0x000003, "Member 'BPC_ForceFeedback_C_CheckForGravHookEnd::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

}

