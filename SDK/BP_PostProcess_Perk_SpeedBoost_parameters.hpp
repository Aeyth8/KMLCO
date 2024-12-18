#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_Perk_SpeedBoost

#include "Basic.hpp"

#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_PostProcess_Perk_SpeedBoost.BP_PostProcess_Perk_SpeedBoost_C.ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost
// 0x0078 (0x0078 - 0x0000)
struct BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetMaterialInstance_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0010(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x0024(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0040(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x0058(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetMaterialInstance_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost) == 0x000008, "Wrong alignment on BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost");
static_assert(sizeof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost) == 0x000078, "Wrong size on BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, EntryPoint) == 0x000000, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, CallFunc_GetMaterialInstance_ReturnValue) == 0x000008, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::CallFunc_GetMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, Temp_delegate_Variable) == 0x000010, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, Temp_delegate_Variable_1) == 0x000024, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000038, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, CallFunc_PlayEvent_playback_instance) == 0x000040, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, CallFunc_PlayEvent_play_success) == 0x000050, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, CallFunc_PlayEvent_playback_instance_1) == 0x000058, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, CallFunc_PlayEvent_play_success_1) == 0x000068, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::CallFunc_PlayEvent_play_success_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost, CallFunc_GetMaterialInstance_ReturnValue_1) == 0x000070, "Member 'BP_PostProcess_Perk_SpeedBoost_C_ExecuteUbergraph_BP_PostProcess_Perk_SpeedBoost::CallFunc_GetMaterialInstance_ReturnValue_1' has a wrong offset!");

// Function BP_PostProcess_Perk_SpeedBoost.BP_PostProcess_Perk_SpeedBoost_C.IsVisible
// 0x0001 (0x0001 - 0x0000)
struct BP_PostProcess_Perk_SpeedBoost_C_IsVisible final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PostProcess_Perk_SpeedBoost_C_IsVisible) == 0x000001, "Wrong alignment on BP_PostProcess_Perk_SpeedBoost_C_IsVisible");
static_assert(sizeof(BP_PostProcess_Perk_SpeedBoost_C_IsVisible) == 0x000001, "Wrong size on BP_PostProcess_Perk_SpeedBoost_C_IsVisible");
static_assert(offsetof(BP_PostProcess_Perk_SpeedBoost_C_IsVisible, ReturnValue) == 0x000000, "Member 'BP_PostProcess_Perk_SpeedBoost_C_IsVisible::ReturnValue' has a wrong offset!");

}

