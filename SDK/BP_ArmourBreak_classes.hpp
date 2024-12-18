#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArmourBreak

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ArmourBreak.BP_ArmourBreak_C
// 0x0030 (0x0288 - 0x0258)
class ABP_ArmourBreak_C final : public ACAAttachedEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ParentActor;                                       // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEvoArmour;                                       // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         NiagaraSystem3P;                                   // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         NiagaraSystem1P;                                   // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ArmourBreak(int32 EntryPoint);
	void TriggerPostProcess();
	void OnArmourBreak(bool IsFirstPerson);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArmourBreak_C">();
	}
	static class ABP_ArmourBreak_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ArmourBreak_C>();
	}
};
static_assert(alignof(ABP_ArmourBreak_C) == 0x000008, "Wrong alignment on ABP_ArmourBreak_C");
static_assert(sizeof(ABP_ArmourBreak_C) == 0x000288, "Wrong size on ABP_ArmourBreak_C");
static_assert(offsetof(ABP_ArmourBreak_C, UberGraphFrame) == 0x000258, "Member 'ABP_ArmourBreak_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ArmourBreak_C, DefaultSceneRoot) == 0x000260, "Member 'ABP_ArmourBreak_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ArmourBreak_C, ParentActor) == 0x000268, "Member 'ABP_ArmourBreak_C::ParentActor' has a wrong offset!");
static_assert(offsetof(ABP_ArmourBreak_C, IsEvoArmour) == 0x000270, "Member 'ABP_ArmourBreak_C::IsEvoArmour' has a wrong offset!");
static_assert(offsetof(ABP_ArmourBreak_C, NiagaraSystem3P) == 0x000278, "Member 'ABP_ArmourBreak_C::NiagaraSystem3P' has a wrong offset!");
static_assert(offsetof(ABP_ArmourBreak_C, NiagaraSystem1P) == 0x000280, "Member 'ABP_ArmourBreak_C::NiagaraSystem1P' has a wrong offset!");

}

