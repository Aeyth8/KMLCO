#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_Use

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AB_Player_ManagedBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Player_Use.AB_Player_Use_C
// 0x0008 (0x04A8 - 0x04A0)
class UAB_Player_Use_C final : public UAB_Player_ManagedBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AB_Player_Use_C;                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AB_Player_Use(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_2557C69041D7886A8E2C3695BB76FE6C(const struct FGameplayEventData& Payload);
	void OnRelease_2AEA513E4ED544855D54CA8283576166(float TimeHeld);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Player_Use_C">();
	}
	static class UAB_Player_Use_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Player_Use_C>();
	}
};
static_assert(alignof(UAB_Player_Use_C) == 0x000008, "Wrong alignment on UAB_Player_Use_C");
static_assert(sizeof(UAB_Player_Use_C) == 0x0004A8, "Wrong size on UAB_Player_Use_C");
static_assert(offsetof(UAB_Player_Use_C, UberGraphFrame_AB_Player_Use_C) == 0x0004A0, "Member 'UAB_Player_Use_C::UberGraphFrame_AB_Player_Use_C' has a wrong offset!");

}
