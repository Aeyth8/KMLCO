#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_Melee

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CAGameDatabase_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Grunt_Melee.AB_Grunt_Melee_C
// 0x0070 (0x0500 - 0x0490)
class UAB_Grunt_Melee_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAnimMontage*>                   Anim_Montage_Array;                                // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACACharacter_NPC*                       Owner_NPC;                                         // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCAComponent_NPCTargetManager*          Owner_Target_Manager;                              // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target_Actor;                                      // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Melee_Damage;                                   // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Push_Event_Tag;                                    // 0x04C8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Push_Magnitude;                                    // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           HitEffectGameplayCue;                              // 0x04D8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E4[0x4];                                      // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCADataTableRowHandle                  MeleeTime;                                         // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AB_Grunt_Melee(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void EventReceived_5D75B83A439A00FD198CB98EB1FA3C62(const struct FGameplayEventData& Payload);
	void OnCompleted_9F1D88B349D88F66F5364B8B49ED5FBD();
	void OnBlendOut_9F1D88B349D88F66F5364B8B49ED5FBD();
	void OnInterrupted_9F1D88B349D88F66F5364B8B49ED5FBD();
	void OnCancelled_9F1D88B349D88F66F5364B8B49ED5FBD();
	void OnSkipped_9F1D88B349D88F66F5364B8B49ED5FBD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Grunt_Melee_C">();
	}
	static class UAB_Grunt_Melee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Grunt_Melee_C>();
	}
};
static_assert(alignof(UAB_Grunt_Melee_C) == 0x000008, "Wrong alignment on UAB_Grunt_Melee_C");
static_assert(sizeof(UAB_Grunt_Melee_C) == 0x000500, "Wrong size on UAB_Grunt_Melee_C");
static_assert(offsetof(UAB_Grunt_Melee_C, UberGraphFrame) == 0x000490, "Member 'UAB_Grunt_Melee_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, Anim_Montage_Array) == 0x000498, "Member 'UAB_Grunt_Melee_C::Anim_Montage_Array' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, Owner_NPC) == 0x0004A8, "Member 'UAB_Grunt_Melee_C::Owner_NPC' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, Owner_Target_Manager) == 0x0004B0, "Member 'UAB_Grunt_Melee_C::Owner_Target_Manager' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, Target_Actor) == 0x0004B8, "Member 'UAB_Grunt_Melee_C::Target_Actor' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, GE_Melee_Damage) == 0x0004C0, "Member 'UAB_Grunt_Melee_C::GE_Melee_Damage' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, Push_Event_Tag) == 0x0004C8, "Member 'UAB_Grunt_Melee_C::Push_Event_Tag' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, Push_Magnitude) == 0x0004D4, "Member 'UAB_Grunt_Melee_C::Push_Magnitude' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, HitEffectGameplayCue) == 0x0004D8, "Member 'UAB_Grunt_Melee_C::HitEffectGameplayCue' has a wrong offset!");
static_assert(offsetof(UAB_Grunt_Melee_C, MeleeTime) == 0x0004E8, "Member 'UAB_Grunt_Melee_C::MeleeTime' has a wrong offset!");

}
