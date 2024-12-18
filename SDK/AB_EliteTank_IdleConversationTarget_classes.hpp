#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EliteTank_IdleConversationTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_EliteTank_IdleConversationTarget.AB_EliteTank_IdleConversationTarget_C
// 0x0038 (0x04C8 - 0x0490)
class UAB_EliteTank_IdleConversationTarget_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAnimMontage*>                   Anim_Montage_Array;                                // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 TargetAlly;                                        // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_NPC*                       OwnerNPC;                                          // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar_0;                                          // 0x04B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_EliteTank_IdleConversationTarget(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnCompleted_7582BB854B8C315C9634DE8B4DC37169();
	void OnBlendOut_7582BB854B8C315C9634DE8B4DC37169();
	void OnInterrupted_7582BB854B8C315C9634DE8B4DC37169();
	void OnCancelled_7582BB854B8C315C9634DE8B4DC37169();
	void OnSkipped_7582BB854B8C315C9634DE8B4DC37169();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_EliteTank_IdleConversationTarget_C">();
	}
	static class UAB_EliteTank_IdleConversationTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_EliteTank_IdleConversationTarget_C>();
	}
};
static_assert(alignof(UAB_EliteTank_IdleConversationTarget_C) == 0x000008, "Wrong alignment on UAB_EliteTank_IdleConversationTarget_C");
static_assert(sizeof(UAB_EliteTank_IdleConversationTarget_C) == 0x0004C8, "Wrong size on UAB_EliteTank_IdleConversationTarget_C");
static_assert(offsetof(UAB_EliteTank_IdleConversationTarget_C, UberGraphFrame) == 0x000490, "Member 'UAB_EliteTank_IdleConversationTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_EliteTank_IdleConversationTarget_C, Anim_Montage_Array) == 0x000498, "Member 'UAB_EliteTank_IdleConversationTarget_C::Anim_Montage_Array' has a wrong offset!");
static_assert(offsetof(UAB_EliteTank_IdleConversationTarget_C, TargetAlly) == 0x0004A8, "Member 'UAB_EliteTank_IdleConversationTarget_C::TargetAlly' has a wrong offset!");
static_assert(offsetof(UAB_EliteTank_IdleConversationTarget_C, OwnerNPC) == 0x0004B0, "Member 'UAB_EliteTank_IdleConversationTarget_C::OwnerNPC' has a wrong offset!");
static_assert(offsetof(UAB_EliteTank_IdleConversationTarget_C, NewVar_0) == 0x0004B8, "Member 'UAB_EliteTank_IdleConversationTarget_C::NewVar_0' has a wrong offset!");

}

