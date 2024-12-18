#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_EnterMagboots

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Grunt_EnterMagboots.AB_Grunt_EnterMagboots_C
// 0x0008 (0x0498 - 0x0490)
class UAB_Grunt_EnterMagboots_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AB_Grunt_EnterMagboots(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnPerformAction_6BCDFA76408D7D0A45647487370C1749(int32 ActionNumber);
	void OnFinished_6BCDFA76408D7D0A45647487370C1749(int32 ActionNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Grunt_EnterMagboots_C">();
	}
	static class UAB_Grunt_EnterMagboots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Grunt_EnterMagboots_C>();
	}
};
static_assert(alignof(UAB_Grunt_EnterMagboots_C) == 0x000008, "Wrong alignment on UAB_Grunt_EnterMagboots_C");
static_assert(sizeof(UAB_Grunt_EnterMagboots_C) == 0x000498, "Wrong size on UAB_Grunt_EnterMagboots_C");
static_assert(offsetof(UAB_Grunt_EnterMagboots_C, UberGraphFrame) == 0x000490, "Member 'UAB_Grunt_EnterMagboots_C::UberGraphFrame' has a wrong offset!");

}

