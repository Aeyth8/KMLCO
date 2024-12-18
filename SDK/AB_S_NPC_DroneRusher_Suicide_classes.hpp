#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_S_NPC_DroneRusher_Suicide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_S_NPC_DroneRusher_Suicide.AB_S_NPC_DroneRusher_Suicide_C
// 0x0028 (0x04B8 - 0x0490)
class UAB_S_NPC_DroneRusher_Suicide_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAnimMontage*>                   AnimMontageArray;                                  // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 NewVar_0;                                          // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Montage_to_Play;                                   // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_S_NPC_DroneRusher_Suicide(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnCompleted_7CABBD3547B32C0684F42496835E717D();
	void OnBlendOut_7CABBD3547B32C0684F42496835E717D();
	void OnInterrupted_7CABBD3547B32C0684F42496835E717D();
	void OnCancelled_7CABBD3547B32C0684F42496835E717D();
	void OnSkipped_7CABBD3547B32C0684F42496835E717D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_S_NPC_DroneRusher_Suicide_C">();
	}
	static class UAB_S_NPC_DroneRusher_Suicide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_S_NPC_DroneRusher_Suicide_C>();
	}
};
static_assert(alignof(UAB_S_NPC_DroneRusher_Suicide_C) == 0x000008, "Wrong alignment on UAB_S_NPC_DroneRusher_Suicide_C");
static_assert(sizeof(UAB_S_NPC_DroneRusher_Suicide_C) == 0x0004B8, "Wrong size on UAB_S_NPC_DroneRusher_Suicide_C");
static_assert(offsetof(UAB_S_NPC_DroneRusher_Suicide_C, UberGraphFrame) == 0x000490, "Member 'UAB_S_NPC_DroneRusher_Suicide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_S_NPC_DroneRusher_Suicide_C, AnimMontageArray) == 0x000498, "Member 'UAB_S_NPC_DroneRusher_Suicide_C::AnimMontageArray' has a wrong offset!");
static_assert(offsetof(UAB_S_NPC_DroneRusher_Suicide_C, NewVar_0) == 0x0004A8, "Member 'UAB_S_NPC_DroneRusher_Suicide_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UAB_S_NPC_DroneRusher_Suicide_C, Montage_to_Play) == 0x0004B0, "Member 'UAB_S_NPC_DroneRusher_Suicide_C::Montage_to_Play' has a wrong offset!");

}

