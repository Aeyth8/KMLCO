#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NavAreaVent

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NavAreaVent.BP_NavAreaVent_C
// 0x0000 (0x0050 - 0x0050)
class UBP_NavAreaVent_C final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NavAreaVent_C">();
	}
	static class UBP_NavAreaVent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NavAreaVent_C>();
	}
};
static_assert(alignof(UBP_NavAreaVent_C) == 0x000008, "Wrong alignment on UBP_NavAreaVent_C");
static_assert(sizeof(UBP_NavAreaVent_C) == 0x000050, "Wrong size on UBP_NavAreaVent_C");

}
