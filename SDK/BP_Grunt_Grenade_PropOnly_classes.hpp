#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Grunt_Grenade_PropOnly

#include "Basic.hpp"

#include "BP_Projectile_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Grunt_Grenade_PropOnly.BP_Grunt_Grenade_PropOnly_C
// 0x0010 (0x0550 - 0x0540)
class ABP_Grunt_Grenade_PropOnly_C final : public ABP_Projectile_Base_C
{
public:
	class UPointLightComponent*                   DetonationLight;                                   // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCustomiseSkeletalMeshComponent*        VisibleSkeletalMesh;                               // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Grunt_Grenade_PropOnly_C">();
	}
	static class ABP_Grunt_Grenade_PropOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Grunt_Grenade_PropOnly_C>();
	}
};
static_assert(alignof(ABP_Grunt_Grenade_PropOnly_C) == 0x000010, "Wrong alignment on ABP_Grunt_Grenade_PropOnly_C");
static_assert(sizeof(ABP_Grunt_Grenade_PropOnly_C) == 0x000550, "Wrong size on ABP_Grunt_Grenade_PropOnly_C");
static_assert(offsetof(ABP_Grunt_Grenade_PropOnly_C, DetonationLight) == 0x000538, "Member 'ABP_Grunt_Grenade_PropOnly_C::DetonationLight' has a wrong offset!");
static_assert(offsetof(ABP_Grunt_Grenade_PropOnly_C, VisibleSkeletalMesh) == 0x000540, "Member 'ABP_Grunt_Grenade_PropOnly_C::VisibleSkeletalMesh' has a wrong offset!");

}

