#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_AlertTriggered

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_AlertTriggered.GE_AlertTriggered_C
// 0x0000 (0x0930 - 0x0930)
class UGE_AlertTriggered_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AlertTriggered_C">();
	}
	static class UGE_AlertTriggered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AlertTriggered_C>();
	}
};
static_assert(alignof(UGE_AlertTriggered_C) == 0x000008, "Wrong alignment on UGE_AlertTriggered_C");
static_assert(sizeof(UGE_AlertTriggered_C) == 0x000930, "Wrong size on UGE_AlertTriggered_C");

}
