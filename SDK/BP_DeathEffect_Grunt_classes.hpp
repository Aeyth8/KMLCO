#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathEffect_Grunt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeathEffect_Grunt.BP_DeathEffect_Grunt_C
// 0x0060 (0x05F0 - 0x0590)
class ABP_DeathEffect_Grunt_C final : public ACADeathEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FadeOutMat;                                        // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FadeOutMat2;                                       // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      DeathVFX;                                          // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FloorCheckTimer;                                   // 0x05B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ZeroG;                                             // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FallCheckTrue;                                     // 0x05C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C2[0x6];                                      // 0x05C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 MeshRef;                                           // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitDirVector;                                      // 0x05D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DC[0x4];                                      // 0x05DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         DeathNiagaraSystem;                                // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VFXEndTime;                                        // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DeathEffect_Grunt(int32 EntryPoint);
	void Finish();
	void OnDeath();
	void OnPoolStateChanged(bool Is_in_pool);
	void OnShotAfterDeath(const struct FNetworkedHit& Hit);
	void BodyRemovalEnd();
	void Activate_BodyRemoval();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeathEffect_Grunt_C">();
	}
	static class ABP_DeathEffect_Grunt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeathEffect_Grunt_C>();
	}
};
static_assert(alignof(ABP_DeathEffect_Grunt_C) == 0x000008, "Wrong alignment on ABP_DeathEffect_Grunt_C");
static_assert(sizeof(ABP_DeathEffect_Grunt_C) == 0x0005F0, "Wrong size on ABP_DeathEffect_Grunt_C");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, UberGraphFrame) == 0x000590, "Member 'ABP_DeathEffect_Grunt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, DefaultSceneRoot) == 0x000598, "Member 'ABP_DeathEffect_Grunt_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, FadeOutMat) == 0x0005A0, "Member 'ABP_DeathEffect_Grunt_C::FadeOutMat' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, FadeOutMat2) == 0x0005A8, "Member 'ABP_DeathEffect_Grunt_C::FadeOutMat2' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, DeathVFX) == 0x0005B0, "Member 'ABP_DeathEffect_Grunt_C::DeathVFX' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, FloorCheckTimer) == 0x0005B8, "Member 'ABP_DeathEffect_Grunt_C::FloorCheckTimer' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, ZeroG) == 0x0005C0, "Member 'ABP_DeathEffect_Grunt_C::ZeroG' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, FallCheckTrue) == 0x0005C1, "Member 'ABP_DeathEffect_Grunt_C::FallCheckTrue' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, MeshRef) == 0x0005C8, "Member 'ABP_DeathEffect_Grunt_C::MeshRef' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, HitDirVector) == 0x0005D0, "Member 'ABP_DeathEffect_Grunt_C::HitDirVector' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, DeathNiagaraSystem) == 0x0005E0, "Member 'ABP_DeathEffect_Grunt_C::DeathNiagaraSystem' has a wrong offset!");
static_assert(offsetof(ABP_DeathEffect_Grunt_C, VFXEndTime) == 0x0005E8, "Member 'ABP_DeathEffect_Grunt_C::VFXEndTime' has a wrong offset!");

}
