#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Vent_Destruction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Vent_Destruction.BP_Vent_Destruction_C
// 0x0030 (0x0288 - 0x0258)
class ABP_Vent_Destruction_C final : public ACAExplosionEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         GroundDistance;                                    // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCAEmitterEnabledState>         NewVar_0;                                          // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNiagaraSystem*                         NiagaraEffect;                                     // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Vent_Destruction(int32 EntryPoint);
	void OnTrigger(const struct FVector& Epicenter, float Radius, bool Attached_to_surface, const struct FVector& Surface_normal, const struct FVector& Incoming_direction, bool Friendly, float Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Vent_Destruction_C">();
	}
	static class ABP_Vent_Destruction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Vent_Destruction_C>();
	}
};
static_assert(alignof(ABP_Vent_Destruction_C) == 0x000008, "Wrong alignment on ABP_Vent_Destruction_C");
static_assert(sizeof(ABP_Vent_Destruction_C) == 0x000288, "Wrong size on ABP_Vent_Destruction_C");
static_assert(offsetof(ABP_Vent_Destruction_C, UberGraphFrame) == 0x000258, "Member 'ABP_Vent_Destruction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Vent_Destruction_C, DefaultSceneRoot) == 0x000260, "Member 'ABP_Vent_Destruction_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Vent_Destruction_C, GroundDistance) == 0x000268, "Member 'ABP_Vent_Destruction_C::GroundDistance' has a wrong offset!");
static_assert(offsetof(ABP_Vent_Destruction_C, NewVar_0) == 0x000270, "Member 'ABP_Vent_Destruction_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_Vent_Destruction_C, NiagaraEffect) == 0x000280, "Member 'ABP_Vent_Destruction_C::NiagaraEffect' has a wrong offset!");

}
