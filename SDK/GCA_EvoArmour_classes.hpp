#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_EvoArmour

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCA_EvoArmour.GCA_EvoArmour_C
// 0x0038 (0x02F8 - 0x02C0)
class AGCA_EvoArmour_C final : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstPerson;                                     // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         NiagaraSystem1P;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         NiagaraSystem3P;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NiagaraTP;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NiagaraFP;                                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCA_EvoArmour(int32 EntryPoint);
	void TriggerPostProcess(class AActor* Player);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCA_EvoArmour_C">();
	}
	static class AGCA_EvoArmour_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCA_EvoArmour_C>();
	}
};
static_assert(alignof(AGCA_EvoArmour_C) == 0x000008, "Wrong alignment on AGCA_EvoArmour_C");
static_assert(sizeof(AGCA_EvoArmour_C) == 0x0002F8, "Wrong size on AGCA_EvoArmour_C");
static_assert(offsetof(AGCA_EvoArmour_C, UberGraphFrame) == 0x0002C0, "Member 'AGCA_EvoArmour_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCA_EvoArmour_C, DefaultSceneRoot) == 0x0002C8, "Member 'AGCA_EvoArmour_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGCA_EvoArmour_C, IsFirstPerson) == 0x0002D0, "Member 'AGCA_EvoArmour_C::IsFirstPerson' has a wrong offset!");
static_assert(offsetof(AGCA_EvoArmour_C, NiagaraSystem1P) == 0x0002D8, "Member 'AGCA_EvoArmour_C::NiagaraSystem1P' has a wrong offset!");
static_assert(offsetof(AGCA_EvoArmour_C, NiagaraSystem3P) == 0x0002E0, "Member 'AGCA_EvoArmour_C::NiagaraSystem3P' has a wrong offset!");
static_assert(offsetof(AGCA_EvoArmour_C, NiagaraTP) == 0x0002E8, "Member 'AGCA_EvoArmour_C::NiagaraTP' has a wrong offset!");
static_assert(offsetof(AGCA_EvoArmour_C, NiagaraFP) == 0x0002F0, "Member 'AGCA_EvoArmour_C::NiagaraFP' has a wrong offset!");

}

