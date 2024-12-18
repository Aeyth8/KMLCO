#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_Jump_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AB_Player_ManagedBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Player_Jump_New.AB_Player_Jump_New_C
// 0x0010 (0x04B0 - 0x04A0)
class UAB_Player_Jump_New_C final : public UAB_Player_ManagedBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AB_Player_Jump_New_C;               // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundWave*                             Sound;                                             // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_Player_Jump_New(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Player_Jump_New_C">();
	}
	static class UAB_Player_Jump_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Player_Jump_New_C>();
	}
};
static_assert(alignof(UAB_Player_Jump_New_C) == 0x000008, "Wrong alignment on UAB_Player_Jump_New_C");
static_assert(sizeof(UAB_Player_Jump_New_C) == 0x0004B0, "Wrong size on UAB_Player_Jump_New_C");
static_assert(offsetof(UAB_Player_Jump_New_C, UberGraphFrame_AB_Player_Jump_New_C) == 0x0004A0, "Member 'UAB_Player_Jump_New_C::UberGraphFrame_AB_Player_Jump_New_C' has a wrong offset!");
static_assert(offsetof(UAB_Player_Jump_New_C, Sound) == 0x0004A8, "Member 'UAB_Player_Jump_New_C::Sound' has a wrong offset!");

}

