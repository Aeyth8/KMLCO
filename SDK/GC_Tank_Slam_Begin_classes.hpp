#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Tank_Slam_Begin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Tank_Slam_Begin.GC_Tank_Slam_Begin_C
// 0x0028 (0x02E8 - 0x02C0)
class AGC_Tank_Slam_Begin_C final : public AGameplayCueNotify_Actor
{
public:
	class UNiagaraComponent*                      TankSlam_Charge_End;                               // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      TankSlam_Charge_Loop;                              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VFX_Location;                                      // 0x02D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Tank_Slam_Begin_C">();
	}
	static class AGC_Tank_Slam_Begin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Tank_Slam_Begin_C>();
	}
};
static_assert(alignof(AGC_Tank_Slam_Begin_C) == 0x000008, "Wrong alignment on AGC_Tank_Slam_Begin_C");
static_assert(sizeof(AGC_Tank_Slam_Begin_C) == 0x0002E8, "Wrong size on AGC_Tank_Slam_Begin_C");
static_assert(offsetof(AGC_Tank_Slam_Begin_C, TankSlam_Charge_End) == 0x0002C0, "Member 'AGC_Tank_Slam_Begin_C::TankSlam_Charge_End' has a wrong offset!");
static_assert(offsetof(AGC_Tank_Slam_Begin_C, TankSlam_Charge_Loop) == 0x0002C8, "Member 'AGC_Tank_Slam_Begin_C::TankSlam_Charge_Loop' has a wrong offset!");
static_assert(offsetof(AGC_Tank_Slam_Begin_C, DefaultSceneRoot) == 0x0002D0, "Member 'AGC_Tank_Slam_Begin_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGC_Tank_Slam_Begin_C, VFX_Location) == 0x0002D8, "Member 'AGC_Tank_Slam_Begin_C::VFX_Location' has a wrong offset!");

}
