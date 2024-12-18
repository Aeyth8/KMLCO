#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_Grunt

#include "Basic.hpp"

#include "BP_NPC_Character_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC_Grunt.BP_NPC_Grunt_C
// 0x0020 (0x2090 - 0x2070)
class ABP_NPC_Grunt_C final : public ABP_NPC_Character_C
{
public:
	class UCapsuleComponent*                      WeaponTraceOverlapCapsule;                         // 0x2070(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicalAnimationComponent*            PhysicalAnimation;                                 // 0x2078(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_NPCLootSpawner_C*                  BPC_NPCLootSpawner;                                // 0x2080(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_Grunt_C">();
	}
	static class ABP_NPC_Grunt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_Grunt_C>();
	}
};
static_assert(alignof(ABP_NPC_Grunt_C) == 0x000010, "Wrong alignment on ABP_NPC_Grunt_C");
static_assert(sizeof(ABP_NPC_Grunt_C) == 0x002090, "Wrong size on ABP_NPC_Grunt_C");
static_assert(offsetof(ABP_NPC_Grunt_C, WeaponTraceOverlapCapsule) == 0x002070, "Member 'ABP_NPC_Grunt_C::WeaponTraceOverlapCapsule' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Grunt_C, PhysicalAnimation) == 0x002078, "Member 'ABP_NPC_Grunt_C::PhysicalAnimation' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Grunt_C, BPC_NPCLootSpawner) == 0x002080, "Member 'ABP_NPC_Grunt_C::BPC_NPCLootSpawner' has a wrong offset!");

}

