#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SniperTurretLaserSightComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function SniperTurretLaserSightComponent.SniperTurretLaserSightComponent_C.ExecuteUbergraph_SniperTurretLaserSightComponent
// 0x0030 (0x0030 - 0x0000)
struct SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Weapon_Instant_Base_C*              K2Node_DynamicCast_AsBP_Weapon_Instant_Base;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_LaserTargetEffect_TurretDrone_C*    K2Node_DynamicCast_AsBP_Laser_Target_Effect_Turret_Drone; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent) == 0x000008, "Wrong alignment on SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent");
static_assert(sizeof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent) == 0x000030, "Wrong size on SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent, EntryPoint) == 0x000000, "Member 'SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent, K2Node_DynamicCast_AsBP_Weapon_Instant_Base) == 0x000010, "Member 'SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent::K2Node_DynamicCast_AsBP_Weapon_Instant_Base' has a wrong offset!");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent, K2Node_DynamicCast_AsBP_Laser_Target_Effect_Turret_Drone) == 0x000020, "Member 'SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent::K2Node_DynamicCast_AsBP_Laser_Target_Effect_Turret_Drone' has a wrong offset!");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function SniperTurretLaserSightComponent.SniperTurretLaserSightComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct SniperTurretLaserSightComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SniperTurretLaserSightComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on SniperTurretLaserSightComponent_C_ReceiveTick");
static_assert(sizeof(SniperTurretLaserSightComponent_C_ReceiveTick) == 0x000004, "Wrong size on SniperTurretLaserSightComponent_C_ReceiveTick");
static_assert(offsetof(SniperTurretLaserSightComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'SniperTurretLaserSightComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
