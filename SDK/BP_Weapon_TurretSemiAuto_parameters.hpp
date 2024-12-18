#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_TurretSemiAuto

#include "Basic.hpp"

#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_Weapon_TurretSemiAuto.BP_Weapon_TurretSemiAuto_C.ExecuteUbergraph_BP_Weapon_TurretSemiAuto
// 0x0048 (0x0048 - 0x0000)
struct BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x000C(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0020(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_LaserTargetEffect_TurretSemiAuto_C* K2Node_DynamicCast_AsBP_Laser_Target_Effect_Turret_Semi_Auto; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFiring_ReturnValue;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFiring_ReturnValue_1;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto) == 0x000008, "Wrong alignment on BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto");
static_assert(sizeof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto) == 0x000048, "Wrong size on BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, EntryPoint) == 0x000000, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_HasAuthority_ReturnValue) == 0x000006, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, Temp_delegate_Variable) == 0x00000C, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_PlayEvent_playback_instance) == 0x000020, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_PlayEvent_play_success) == 0x000030, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, K2Node_DynamicCast_AsBP_Laser_Target_Effect_Turret_Semi_Auto) == 0x000038, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::K2Node_DynamicCast_AsBP_Laser_Target_Effect_Turret_Semi_Auto' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_IsFiring_ReturnValue) == 0x000041, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_IsFiring_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_IsFiring_ReturnValue_1) == 0x000042, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_IsFiring_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_Not_PreBool_ReturnValue) == 0x000043, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto, CallFunc_BooleanAND_ReturnValue) == 0x000044, "Member 'BP_Weapon_TurretSemiAuto_C_ExecuteUbergraph_BP_Weapon_TurretSemiAuto::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_Weapon_TurretSemiAuto.BP_Weapon_TurretSemiAuto_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Weapon_TurretSemiAuto_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Weapon_TurretSemiAuto_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Weapon_TurretSemiAuto_C_ReceiveTick");
static_assert(sizeof(BP_Weapon_TurretSemiAuto_C_ReceiveTick) == 0x000004, "Wrong size on BP_Weapon_TurretSemiAuto_C_ReceiveTick");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Weapon_TurretSemiAuto_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Weapon_TurretSemiAuto.BP_Weapon_TurretSemiAuto_C.GetLaserSightComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_Weapon_TurretSemiAuto_C_GetLaserSightComponent final
{
public:
	class USniperTurretLaserSightComponent_C*     LaserSightComoponent;                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Weapon_TurretSemiAuto_C_GetLaserSightComponent) == 0x000008, "Wrong alignment on BP_Weapon_TurretSemiAuto_C_GetLaserSightComponent");
static_assert(sizeof(BP_Weapon_TurretSemiAuto_C_GetLaserSightComponent) == 0x000008, "Wrong size on BP_Weapon_TurretSemiAuto_C_GetLaserSightComponent");
static_assert(offsetof(BP_Weapon_TurretSemiAuto_C_GetLaserSightComponent, LaserSightComoponent) == 0x000000, "Member 'BP_Weapon_TurretSemiAuto_C_GetLaserSightComponent::LaserSightComoponent' has a wrong offset!");

}

