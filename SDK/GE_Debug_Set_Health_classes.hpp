#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Debug_Set_Health

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Debug_Set_Health.GE_Debug_Set_Health_C
// 0x0000 (0x0930 - 0x0930)
class UGE_Debug_Set_Health_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Debug_Set_Health_C">();
	}
	static class UGE_Debug_Set_Health_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Debug_Set_Health_C>();
	}
};
static_assert(alignof(UGE_Debug_Set_Health_C) == 0x000008, "Wrong alignment on UGE_Debug_Set_Health_C");
static_assert(sizeof(UGE_Debug_Set_Health_C) == 0x000930, "Wrong size on UGE_Debug_Set_Health_C");

}

