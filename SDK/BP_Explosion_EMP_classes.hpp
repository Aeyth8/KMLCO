#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Explosion_EMP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Explosion_EMP.BP_Explosion_EMP_C
// 0x00A0 (0x02F8 - 0x0258)
class ABP_Explosion_EMP_C final : public ACAExplosionEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCACollisionComponent*                  CACollision;                                       // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         GroundDistance;                                    // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsZeroG;                                           // 0x0274(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         OneG_AOE_Explosion;                                // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         ZeroG_AOE_Explosion;                               // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         AOE_Persistent;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Epicenter;                                         // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Surface_Normal;                                    // 0x029C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IFF;                                               // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EMPUpgraded;                                       // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AA[0x6];                                      // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         OneG_AOE_Explosion_Upgrade;                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         OneG_AOE_Persistent_Upgrade;                       // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         ZeroG_AOE_Explosion_Upgrade;                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         ZeroG_AOE_Persistent_Upgrade;                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  RequiredLevelTag;                                  // 0x02D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Radius;                                            // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Explosion_EMP(int32 EntryPoint);
	void OnTrigger(const struct FVector& Epicenter_0, float Radius_0, bool Attached_to_surface, const struct FVector& Surface_normal, const struct FVector& Incoming_direction, bool Friendly, float Duration_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Explosion_EMP_C">();
	}
	static class ABP_Explosion_EMP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Explosion_EMP_C>();
	}
};
static_assert(alignof(ABP_Explosion_EMP_C) == 0x000008, "Wrong alignment on ABP_Explosion_EMP_C");
static_assert(sizeof(ABP_Explosion_EMP_C) == 0x0002F8, "Wrong size on ABP_Explosion_EMP_C");
static_assert(offsetof(ABP_Explosion_EMP_C, UberGraphFrame) == 0x000258, "Member 'ABP_Explosion_EMP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, CACollision) == 0x000260, "Member 'ABP_Explosion_EMP_C::CACollision' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, DefaultSceneRoot) == 0x000268, "Member 'ABP_Explosion_EMP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, GroundDistance) == 0x000270, "Member 'ABP_Explosion_EMP_C::GroundDistance' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, IsZeroG) == 0x000274, "Member 'ABP_Explosion_EMP_C::IsZeroG' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, OneG_AOE_Explosion) == 0x000278, "Member 'ABP_Explosion_EMP_C::OneG_AOE_Explosion' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, ZeroG_AOE_Explosion) == 0x000280, "Member 'ABP_Explosion_EMP_C::ZeroG_AOE_Explosion' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, AOE_Persistent) == 0x000288, "Member 'ABP_Explosion_EMP_C::AOE_Persistent' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, Epicenter) == 0x000290, "Member 'ABP_Explosion_EMP_C::Epicenter' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, Surface_Normal) == 0x00029C, "Member 'ABP_Explosion_EMP_C::Surface_Normal' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, IFF) == 0x0002A8, "Member 'ABP_Explosion_EMP_C::IFF' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, EMPUpgraded) == 0x0002A9, "Member 'ABP_Explosion_EMP_C::EMPUpgraded' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, OneG_AOE_Explosion_Upgrade) == 0x0002B0, "Member 'ABP_Explosion_EMP_C::OneG_AOE_Explosion_Upgrade' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, OneG_AOE_Persistent_Upgrade) == 0x0002B8, "Member 'ABP_Explosion_EMP_C::OneG_AOE_Persistent_Upgrade' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, ZeroG_AOE_Explosion_Upgrade) == 0x0002C0, "Member 'ABP_Explosion_EMP_C::ZeroG_AOE_Explosion_Upgrade' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, ZeroG_AOE_Persistent_Upgrade) == 0x0002C8, "Member 'ABP_Explosion_EMP_C::ZeroG_AOE_Persistent_Upgrade' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, RequiredLevelTag) == 0x0002D0, "Member 'ABP_Explosion_EMP_C::RequiredLevelTag' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, Radius) == 0x0002F0, "Member 'ABP_Explosion_EMP_C::Radius' has a wrong offset!");
static_assert(offsetof(ABP_Explosion_EMP_C, Duration) == 0x0002F4, "Member 'ABP_Explosion_EMP_C::Duration' has a wrong offset!");

}

