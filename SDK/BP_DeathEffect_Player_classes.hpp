#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathEffect_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeathEffect_Player.BP_DeathEffect_Player_C
// 0x0050 (0x05E0 - 0x0590)
class ABP_DeathEffect_Player_C final : public ACADeathEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      DeathVFX;                                          // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ZeroG;                                             // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FallCheckTrue;                                     // 0x05A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA[0x6];                                      // 0x05AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 MeshRef;                                           // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitDirVector;                                      // 0x05B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitDirection;                                      // 0x05C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         NiagaraTemplate;                                   // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 KillingActor;                                      // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DeathEffect_Player(int32 EntryPoint);
	void SpawnLingeringPart();
	void Finish();
	void OnDeath();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeathEffect_Player_C">();
	}
	static class ABP_DeathEffect_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeathEffect_Player_C>();
	}
};
static_assert(alignof(ABP_DeathEffect_Player_C) == 0x000008, "Wrong alignment on ABP_DeathEffect_Player_C");
static_assert(sizeof(ABP_DeathEffect_Player_C) == 0x0005E0, "Wrong size on ABP_DeathEffect_Player_C");
static_assert(offsetof(ABP_DeathEffect_Player_C, UberGraphFrame) == 0x000590, "Member 'ABP_DeathEffect_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, DefaultSceneRoot) == 0x000598, "Member 'ABP_DeathEffect_Player_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, DeathVFX) == 0x0005A0, "Member 'ABP_DeathEffect_Player_C::DeathVFX' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, ZeroG) == 0x0005A8, "Member 'ABP_DeathEffect_Player_C::ZeroG' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, FallCheckTrue) == 0x0005A9, "Member 'ABP_DeathEffect_Player_C::FallCheckTrue' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, MeshRef) == 0x0005B0, "Member 'ABP_DeathEffect_Player_C::MeshRef' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, HitDirVector) == 0x0005B8, "Member 'ABP_DeathEffect_Player_C::HitDirVector' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, HitDirection) == 0x0005C4, "Member 'ABP_DeathEffect_Player_C::HitDirection' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, NiagaraTemplate) == 0x0005D0, "Member 'ABP_DeathEffect_Player_C::NiagaraTemplate' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Player_C, KillingActor) == 0x0005D8, "Member 'ABP_DeathEffect_Player_C::KillingActor' has a wrong offset!");

}

