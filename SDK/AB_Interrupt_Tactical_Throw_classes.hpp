#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Interrupt_Tactical_Throw

#include "Basic.hpp"

#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Interrupt_Tactical_Throw.AB_Interrupt_Tactical_Throw_C
// 0x0000 (0x0490 - 0x0490)
class UAB_Interrupt_Tactical_Throw_C final : public UCAGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Interrupt_Tactical_Throw_C">();
	}
	static class UAB_Interrupt_Tactical_Throw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Interrupt_Tactical_Throw_C>();
	}
};
static_assert(alignof(UAB_Interrupt_Tactical_Throw_C) == 0x000008, "Wrong alignment on UAB_Interrupt_Tactical_Throw_C");
static_assert(sizeof(UAB_Interrupt_Tactical_Throw_C) == 0x000490, "Wrong size on UAB_Interrupt_Tactical_Throw_C");

}

