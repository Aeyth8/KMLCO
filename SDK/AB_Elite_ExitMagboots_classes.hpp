#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Elite_ExitMagboots

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Elite_ExitMagboots.AB_Elite_ExitMagboots_C
// 0x0008 (0x0498 - 0x0490)
class UAB_Elite_ExitMagboots_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AB_Elite_ExitMagboots(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnPerformAction_ABD296204E9057F9C837C790D0109F09(int32 ActionNumber);
	void OnFinished_ABD296204E9057F9C837C790D0109F09(int32 ActionNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Elite_ExitMagboots_C">();
	}
	static class UAB_Elite_ExitMagboots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Elite_ExitMagboots_C>();
	}
};
static_assert(alignof(UAB_Elite_ExitMagboots_C) == 0x000008, "Wrong alignment on UAB_Elite_ExitMagboots_C");
static_assert(sizeof(UAB_Elite_ExitMagboots_C) == 0x000498, "Wrong size on UAB_Elite_ExitMagboots_C");
static_assert(offsetof(UAB_Elite_ExitMagboots_C, UberGraphFrame) == 0x000490, "Member 'UAB_Elite_ExitMagboots_C::UberGraphFrame' has a wrong offset!");

}

