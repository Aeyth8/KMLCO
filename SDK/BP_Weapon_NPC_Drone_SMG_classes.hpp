#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_NPC_Drone_SMG

#include "Basic.hpp"

#include "BP_Weapon_Instant_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Weapon_NPC_Drone_SMG.BP_Weapon_NPC_Drone_SMG_C
// 0x0000 (0x1200 - 0x1200)
class ABP_Weapon_NPC_Drone_SMG_C final : public ABP_Weapon_Instant_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Weapon_NPC_Drone_SMG_C">();
	}
	static class ABP_Weapon_NPC_Drone_SMG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Weapon_NPC_Drone_SMG_C>();
	}
};
static_assert(alignof(ABP_Weapon_NPC_Drone_SMG_C) == 0x000008, "Wrong alignment on ABP_Weapon_NPC_Drone_SMG_C");
static_assert(sizeof(ABP_Weapon_NPC_Drone_SMG_C) == 0x001200, "Wrong size on ABP_Weapon_NPC_Drone_SMG_C");

}
