#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_TurretRailgun_Projectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Weapon_Instant_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Weapon_TurretRailgun_Projectile.BP_Weapon_TurretRailgun_Projectile_C
// 0x0010 (0x1210 - 0x1200)
class ABP_Weapon_TurretRailgun_Projectile_C final : public ABP_Weapon_Instant_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Weapon_TurretRailgun_Projectile_C; // 0x1200(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USniperTurretLaserSightComponent_C*     SniperTurretLaserSightComponent1;                  // 0x1208(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Weapon_TurretRailgun_Projectile(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Weapon_TurretRailgun_Projectile_C">();
	}
	static class ABP_Weapon_TurretRailgun_Projectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Weapon_TurretRailgun_Projectile_C>();
	}
};
static_assert(alignof(ABP_Weapon_TurretRailgun_Projectile_C) == 0x000008, "Wrong alignment on ABP_Weapon_TurretRailgun_Projectile_C");
static_assert(sizeof(ABP_Weapon_TurretRailgun_Projectile_C) == 0x001210, "Wrong size on ABP_Weapon_TurretRailgun_Projectile_C");
static_assert(offsetof(ABP_Weapon_TurretRailgun_Projectile_C, UberGraphFrame_BP_Weapon_TurretRailgun_Projectile_C) == 0x001200, "Member 'ABP_Weapon_TurretRailgun_Projectile_C::UberGraphFrame_BP_Weapon_TurretRailgun_Projectile_C' has a wrong offset!");
static_assert(offsetof(ABP_Weapon_TurretRailgun_Projectile_C, SniperTurretLaserSightComponent1) == 0x001208, "Member 'ABP_Weapon_TurretRailgun_Projectile_C::SniperTurretLaserSightComponent1' has a wrong offset!");

}

