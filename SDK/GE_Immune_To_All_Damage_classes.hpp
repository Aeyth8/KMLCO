#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Immune_To_All_Damage

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Immune_To_All_Damage.GE_Immune_To_All_Damage_C
// 0x0000 (0x0930 - 0x0930)
class UGE_Immune_To_All_Damage_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Immune_To_All_Damage_C">();
	}
	static class UGE_Immune_To_All_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Immune_To_All_Damage_C>();
	}
};
static_assert(alignof(UGE_Immune_To_All_Damage_C) == 0x000008, "Wrong alignment on UGE_Immune_To_All_Damage_C");
static_assert(sizeof(UGE_Immune_To_All_Damage_C) == 0x000930, "Wrong size on UGE_Immune_To_All_Damage_C");

}
