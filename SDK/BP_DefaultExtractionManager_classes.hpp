#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DefaultExtractionManager

#include "Basic.hpp"

#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DefaultExtractionManager.BP_DefaultExtractionManager_C
// 0x0008 (0x0400 - 0x03F8)
class ABP_DefaultExtractionManager_C final : public ACAExtractionManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DefaultExtractionManager_C">();
	}
	static class ABP_DefaultExtractionManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DefaultExtractionManager_C>();
	}
};
static_assert(alignof(ABP_DefaultExtractionManager_C) == 0x000008, "Wrong alignment on ABP_DefaultExtractionManager_C");
static_assert(sizeof(ABP_DefaultExtractionManager_C) == 0x000400, "Wrong size on ABP_DefaultExtractionManager_C");
static_assert(offsetof(ABP_DefaultExtractionManager_C, DefaultSceneRoot) == 0x0003F8, "Member 'ABP_DefaultExtractionManager_C::DefaultSceneRoot' has a wrong offset!");

}
