#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Weapon_Laser_Primary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Weapon_Laser_Primary.AB_Weapon_Laser_Primary_C
// 0x0020 (0x04F8 - 0x04D8)
class UAB_Weapon_Laser_Primary_C final : public UCAAbilityFireExoticWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ACAExoticWeapon_Laser*                  Laser;                                             // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OnNPCTauntPlayerElite;                             // 0x04E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_Weapon_Laser_Primary(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Weapon_Laser_Primary_C">();
	}
	static class UAB_Weapon_Laser_Primary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Weapon_Laser_Primary_C>();
	}
};
static_assert(alignof(UAB_Weapon_Laser_Primary_C) == 0x000008, "Wrong alignment on UAB_Weapon_Laser_Primary_C");
static_assert(sizeof(UAB_Weapon_Laser_Primary_C) == 0x0004F8, "Wrong size on UAB_Weapon_Laser_Primary_C");
static_assert(offsetof(UAB_Weapon_Laser_Primary_C, UberGraphFrame) == 0x0004D8, "Member 'UAB_Weapon_Laser_Primary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Weapon_Laser_Primary_C, Laser) == 0x0004E0, "Member 'UAB_Weapon_Laser_Primary_C::Laser' has a wrong offset!");
static_assert(offsetof(UAB_Weapon_Laser_Primary_C, OnNPCTauntPlayerElite) == 0x0004E8, "Member 'UAB_Weapon_Laser_Primary_C::OnNPCTauntPlayerElite' has a wrong offset!");

}

