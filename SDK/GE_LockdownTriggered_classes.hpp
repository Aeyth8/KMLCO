#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_LockdownTriggered

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_LockdownTriggered.GE_LockdownTriggered_C
// 0x0000 (0x0930 - 0x0930)
class UGE_LockdownTriggered_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_LockdownTriggered_C">();
	}
	static class UGE_LockdownTriggered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_LockdownTriggered_C>();
	}
};
static_assert(alignof(UGE_LockdownTriggered_C) == 0x000008, "Wrong alignment on UGE_LockdownTriggered_C");
static_assert(sizeof(UGE_LockdownTriggered_C) == 0x000930, "Wrong size on UGE_LockdownTriggered_C");

}
