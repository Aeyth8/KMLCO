#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_FoamDegradation

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_FoamDegradation.GE_FoamDegradation_C
// 0x0000 (0x0930 - 0x0930)
class UGE_FoamDegradation_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_FoamDegradation_C">();
	}
	static class UGE_FoamDegradation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_FoamDegradation_C>();
	}
};
static_assert(alignof(UGE_FoamDegradation_C) == 0x000008, "Wrong alignment on UGE_FoamDegradation_C");
static_assert(sizeof(UGE_FoamDegradation_C) == 0x000930, "Wrong size on UGE_FoamDegradation_C");

}
