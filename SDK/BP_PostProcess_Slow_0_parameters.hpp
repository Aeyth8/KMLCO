#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_Slow_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_PostProcess_Slow.BP_PostProcess_Slow_C.ExecuteUbergraph_BP_PostProcess_Slow
// 0x0720 (0x0720 - 0x0000)
struct BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0008(0x0010)(NoDestructor)
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0028(0x0010)()
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0038(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0050(0x0640)()
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x0690(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_2;                          // 0x06A4(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x06C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue_1;    // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x06D0(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E1[0x7];                                      // 0x06E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x06E8(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F9[0x7];                                      // 0x06F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_2;            // 0x0700(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_2;                 // 0x0710(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_711[0x7];                                      // 0x0711(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue_2;    // 0x0718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow) == 0x000010, "Wrong alignment on BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow");
static_assert(sizeof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow) == 0x000720, "Wrong size on BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, EntryPoint) == 0x000000, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, K2Node_MakeStruct_WeightedBlendable) == 0x000008, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, K2Node_MakeStruct_WeightedBlendables) == 0x000028, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, Temp_delegate_Variable) == 0x000038, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, K2Node_MakeStruct_PostProcessSettings) == 0x000050, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, Temp_delegate_Variable_1) == 0x000690, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, Temp_delegate_Variable_2) == 0x0006A4, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0006B8, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x0006C0, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_GetLocalPlayerCharacter_ReturnValue_1) == 0x0006C8, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_GetLocalPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_PlayEvent_playback_instance) == 0x0006D0, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_PlayEvent_play_success) == 0x0006E0, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_PlayEvent_playback_instance_1) == 0x0006E8, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_PlayEvent_play_success_1) == 0x0006F8, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_PlayEvent_play_success_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_PlayEvent_playback_instance_2) == 0x000700, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_PlayEvent_playback_instance_2' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_PlayEvent_play_success_2) == 0x000710, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_PlayEvent_play_success_2' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow, CallFunc_GetLocalPlayerCharacter_ReturnValue_2) == 0x000718, "Member 'BP_PostProcess_Slow_C_ExecuteUbergraph_BP_PostProcess_Slow::CallFunc_GetLocalPlayerCharacter_ReturnValue_2' has a wrong offset!");

}
