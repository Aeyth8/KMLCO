#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Add_Health

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Add_Health.GE_Add_Health_C
// 0x0000 (0x0930 - 0x0930)
class UGE_Add_Health_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Add_Health_C">();
	}
	static class UGE_Add_Health_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Add_Health_C>();
	}
};
static_assert(alignof(UGE_Add_Health_C) == 0x000008, "Wrong alignment on UGE_Add_Health_C");
static_assert(sizeof(UGE_Add_Health_C) == 0x000930, "Wrong size on UGE_Add_Health_C");

}

