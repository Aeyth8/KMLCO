#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_IdleAtJob

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Grunt_IdleAtJob.AB_Grunt_IdleAtJob_C
// 0x0018 (0x04A8 - 0x0490)
class UAB_Grunt_IdleAtJob_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAnimMontage*>                   Anim_Montage_Array;                                // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AB_Grunt_IdleAtJob(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnCompleted_0C0B201C48221D19219A0C85A20F07BD();
	void OnBlendOut_0C0B201C48221D19219A0C85A20F07BD();
	void OnInterrupted_0C0B201C48221D19219A0C85A20F07BD();
	void OnCancelled_0C0B201C48221D19219A0C85A20F07BD();
	void OnSkipped_0C0B201C48221D19219A0C85A20F07BD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Grunt_IdleAtJob_C">();
	}
	static class UAB_Grunt_IdleAtJob_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Grunt_IdleAtJob_C>();
	}
};
static_assert(alignof(UAB_Grunt_IdleAtJob_C) == 0x000008, "Wrong alignment on UAB_Grunt_IdleAtJob_C");
static_assert(sizeof(UAB_Grunt_IdleAtJob_C) == 0x0004A8, "Wrong size on UAB_Grunt_IdleAtJob_C");
static_assert(offsetof(UAB_Grunt_IdleAtJob_C, UberGraphFrame) == 0x000490, "Member 'UAB_Grunt_IdleAtJob_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_IdleAtJob_C, Anim_Montage_Array) == 0x000498, "Member 'UAB_Grunt_IdleAtJob_C::Anim_Montage_Array' has a wrong offset!");

}
