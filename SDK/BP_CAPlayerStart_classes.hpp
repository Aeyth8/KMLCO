#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CAPlayerStart

#include "Basic.hpp"

#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CAPlayerStart.BP_CAPlayerStart_C
// 0x0000 (0x02A8 - 0x02A8)
class ABP_CAPlayerStart_C final : public ACAPlayerStart
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CAPlayerStart_C">();
	}
	static class ABP_CAPlayerStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CAPlayerStart_C>();
	}
};
static_assert(alignof(ABP_CAPlayerStart_C) == 0x000008, "Wrong alignment on ABP_CAPlayerStart_C");
static_assert(sizeof(ABP_CAPlayerStart_C) == 0x0002A8, "Wrong size on ABP_CAPlayerStart_C");

}

