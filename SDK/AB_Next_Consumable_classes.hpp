#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Next_Consumable

#include "Basic.hpp"

#include "AB_Next_Equipment_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Next_Consumable.AB_Next_Consumable_C
// 0x0000 (0x04A8 - 0x04A8)
class UAB_Next_Consumable_C final : public UAB_Next_Equipment_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Next_Consumable_C">();
	}
	static class UAB_Next_Consumable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Next_Consumable_C>();
	}
};
static_assert(alignof(UAB_Next_Consumable_C) == 0x000008, "Wrong alignment on UAB_Next_Consumable_C");
static_assert(sizeof(UAB_Next_Consumable_C) == 0x0004A8, "Wrong size on UAB_Next_Consumable_C");

}

