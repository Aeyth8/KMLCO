#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExplosionFoam

#include "Basic.hpp"

#include "CAAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Keaton_structs.hpp"


namespace SDK::Params
{

// Function BP_ExplosionFoam.BP_ExplosionFoam_C.ExecuteUbergraph_BP_ExplosionFoam
// 0x0080 (0x0080 - 0x0000)
struct BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCAEmitterEnabledState>         Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                K2Node_Event_epicenter;                            // 0x0018(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_radius;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_attached_to_surface;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_surface_normal;                       // 0x002C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_incoming_direction;                   // 0x0038(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_friendly;                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_duration;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                        CallFunc_ZeroGCascadeSwitch_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEventInWorld_playback_instance;       // 0x0060(0x0010)()
	bool                                          CallFunc_PlayEventInWorld_play_success;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnCACascadeSystemAtLocation_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam) == 0x000008, "Wrong alignment on BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam");
static_assert(sizeof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam) == 0x000080, "Wrong size on BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, EntryPoint) == 0x000000, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, Temp_struct_Variable) == 0x000008, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, K2Node_Event_epicenter) == 0x000018, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::K2Node_Event_epicenter' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, K2Node_Event_radius) == 0x000024, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::K2Node_Event_radius' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, K2Node_Event_attached_to_surface) == 0x000028, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::K2Node_Event_attached_to_surface' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, K2Node_Event_surface_normal) == 0x00002C, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::K2Node_Event_surface_normal' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, K2Node_Event_incoming_direction) == 0x000038, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::K2Node_Event_incoming_direction' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, K2Node_Event_friendly) == 0x000044, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::K2Node_Event_friendly' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, K2Node_Event_duration) == 0x000048, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::K2Node_Event_duration' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, CallFunc_MakeRotFromZ_ReturnValue) == 0x00004C, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, CallFunc_ZeroGCascadeSwitch_ReturnValue) == 0x000058, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::CallFunc_ZeroGCascadeSwitch_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, CallFunc_PlayEventInWorld_playback_instance) == 0x000060, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::CallFunc_PlayEventInWorld_playback_instance' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, CallFunc_PlayEventInWorld_play_success) == 0x000070, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::CallFunc_PlayEventInWorld_play_success' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam, CallFunc_SpawnCACascadeSystemAtLocation_ReturnValue) == 0x000078, "Member 'BP_ExplosionFoam_C_ExecuteUbergraph_BP_ExplosionFoam::CallFunc_SpawnCACascadeSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_ExplosionFoam.BP_ExplosionFoam_C.OnTrigger
// 0x0034 (0x0034 - 0x0000)
struct BP_ExplosionFoam_C_OnTrigger final
{
public:
	struct FVector                                Epicenter;                                         // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Attached_to_surface;                               // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Surface_normal;                                    // 0x0014(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Incoming_direction;                                // 0x0020(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Friendly;                                          // 0x002C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionFoam_C_OnTrigger) == 0x000004, "Wrong alignment on BP_ExplosionFoam_C_OnTrigger");
static_assert(sizeof(BP_ExplosionFoam_C_OnTrigger) == 0x000034, "Wrong size on BP_ExplosionFoam_C_OnTrigger");
static_assert(offsetof(BP_ExplosionFoam_C_OnTrigger, Epicenter) == 0x000000, "Member 'BP_ExplosionFoam_C_OnTrigger::Epicenter' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_OnTrigger, Radius) == 0x00000C, "Member 'BP_ExplosionFoam_C_OnTrigger::Radius' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_OnTrigger, Attached_to_surface) == 0x000010, "Member 'BP_ExplosionFoam_C_OnTrigger::Attached_to_surface' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_OnTrigger, Surface_normal) == 0x000014, "Member 'BP_ExplosionFoam_C_OnTrigger::Surface_normal' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_OnTrigger, Incoming_direction) == 0x000020, "Member 'BP_ExplosionFoam_C_OnTrigger::Incoming_direction' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_OnTrigger, Friendly) == 0x00002C, "Member 'BP_ExplosionFoam_C_OnTrigger::Friendly' has a wrong offset!");
static_assert(offsetof(BP_ExplosionFoam_C_OnTrigger, Duration) == 0x000030, "Member 'BP_ExplosionFoam_C_OnTrigger::Duration' has a wrong offset!");

}

