#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TraceEffect_BloodSplatter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TraceEffect_BloodSplatter.BP_TraceEffect_BloodSplatter_C
// 0x0030 (0x0288 - 0x0258)
class ABP_TraceEffect_BloodSplatter_C final : public ACATraceEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      BloodSplatterChunky;                               // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      BloodSplatterWall;                                 // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      BloodSpray;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      BloodSplatterWallZeroG;                            // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TraceEffect_BloodSplatter(int32 EntryPoint);
	void OnTrigger(const struct FHitResult& Hit_result, const struct FCATraceAuxiliaryResult& Auxiliary_result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TraceEffect_BloodSplatter_C">();
	}
	static class ABP_TraceEffect_BloodSplatter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TraceEffect_BloodSplatter_C>();
	}
};
static_assert(alignof(ABP_TraceEffect_BloodSplatter_C) == 0x000008, "Wrong alignment on ABP_TraceEffect_BloodSplatter_C");
static_assert(sizeof(ABP_TraceEffect_BloodSplatter_C) == 0x000288, "Wrong size on ABP_TraceEffect_BloodSplatter_C");
static_assert(offsetof(ABP_TraceEffect_BloodSplatter_C, UberGraphFrame) == 0x000258, "Member 'ABP_TraceEffect_BloodSplatter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TraceEffect_BloodSplatter_C, DefaultSceneRoot) == 0x000260, "Member 'ABP_TraceEffect_BloodSplatter_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TraceEffect_BloodSplatter_C, BloodSplatterChunky) == 0x000268, "Member 'ABP_TraceEffect_BloodSplatter_C::BloodSplatterChunky' has a wrong offset!");
static_assert(offsetof(ABP_TraceEffect_BloodSplatter_C, BloodSplatterWall) == 0x000270, "Member 'ABP_TraceEffect_BloodSplatter_C::BloodSplatterWall' has a wrong offset!");
static_assert(offsetof(ABP_TraceEffect_BloodSplatter_C, BloodSpray) == 0x000278, "Member 'ABP_TraceEffect_BloodSplatter_C::BloodSpray' has a wrong offset!");
static_assert(offsetof(ABP_TraceEffect_BloodSplatter_C, BloodSplatterWallZeroG) == 0x000280, "Member 'ABP_TraceEffect_BloodSplatter_C::BloodSplatterWallZeroG' has a wrong offset!");

}

