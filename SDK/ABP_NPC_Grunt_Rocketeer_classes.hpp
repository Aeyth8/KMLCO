#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_Grunt_Rocketeer

#include "Basic.hpp"

#include "ABP_NPC_Grunt_Standard_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_NPC_Grunt_Rocketeer.ABP_NPC_Grunt_Rocketeer_C
// 0x0000 (0x6B20 - 0x6B20)
class UABP_NPC_Grunt_Rocketeer_C final : public UABP_NPC_Grunt_Standard_C
{
public:
	void ShouldLowerWeaponInCombat(bool* IsInCombat_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_NPC_Grunt_Rocketeer_C">();
	}
	static class UABP_NPC_Grunt_Rocketeer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_NPC_Grunt_Rocketeer_C>();
	}
};
static_assert(alignof(UABP_NPC_Grunt_Rocketeer_C) == 0x000010, "Wrong alignment on UABP_NPC_Grunt_Rocketeer_C");
static_assert(sizeof(UABP_NPC_Grunt_Rocketeer_C) == 0x006B20, "Wrong size on UABP_NPC_Grunt_Rocketeer_C");

}
