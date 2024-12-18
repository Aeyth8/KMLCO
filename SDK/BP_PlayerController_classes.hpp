#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CAAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x0030 (0x1500 - 0x14D0)
class ABP_PlayerController_C final : public ACAPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMediaSoundComponent*                   MediaSound;                                        // 0x14D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCAArcLensPingComponent*                CAArcLensPing;                                     // 0x14E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInZeroG;                                         // 0x14E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E9[0x3];                                     // 0x14E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            ZeroGEffectHandle;                                 // 0x14EC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerController(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnMissionComplete(bool Mission_success);
	void OnPlayerDeath(bool Team_present, bool Mission_success);
	void ReceiveBeginPlay();
	void PlayLocalDialouge(const struct FCAAudioEventType& Event, class UCAAudioComponent* Component, class AActor* Actor, bool Is_streamed, float Max_queue_time, ECAAudioDialoguePriority Priority, bool Interrupt_equal_priority);
	void RegisterMapEntityForTeamRevealEvent();
	void RemoveMapEntityForTeamRevealEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerController_C">();
	}
	static class ABP_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerController_C>();
	}
};
static_assert(alignof(ABP_PlayerController_C) == 0x000010, "Wrong alignment on ABP_PlayerController_C");
static_assert(sizeof(ABP_PlayerController_C) == 0x001500, "Wrong size on ABP_PlayerController_C");
static_assert(offsetof(ABP_PlayerController_C, UberGraphFrame) == 0x0014D0, "Member 'ABP_PlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, MediaSound) == 0x0014D8, "Member 'ABP_PlayerController_C::MediaSound' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, CAArcLensPing) == 0x0014E0, "Member 'ABP_PlayerController_C::CAArcLensPing' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, IsInZeroG) == 0x0014E8, "Member 'ABP_PlayerController_C::IsInZeroG' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, ZeroGEffectHandle) == 0x0014EC, "Member 'ABP_PlayerController_C::ZeroGEffectHandle' has a wrong offset!");

}

