#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_FusedProjectile

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_FusedProjectile.I_FusedProjectile_C
// 0x0000 (0x0030 - 0x0030)
class II_FusedProjectile_C final : public IInterface
{
public:
	void Defuse();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_FusedProjectile_C">();
	}
	static class II_FusedProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_FusedProjectile_C>();
	}
};
static_assert(alignof(II_FusedProjectile_C) == 0x000008, "Wrong alignment on II_FusedProjectile_C");
static_assert(sizeof(II_FusedProjectile_C) == 0x000030, "Wrong size on II_FusedProjectile_C");

}

