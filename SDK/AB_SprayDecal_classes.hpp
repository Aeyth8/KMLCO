#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_SprayDecal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_SprayDecal.AB_SprayDecal_C
// 0x0008 (0x04A0 - 0x0498)
class UAB_SprayDecal_C final : public UCAGameplayAbility_Managed
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AB_SprayDecal(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_SprayDecal_C">();
	}
	static class UAB_SprayDecal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_SprayDecal_C>();
	}
};
static_assert(alignof(UAB_SprayDecal_C) == 0x000008, "Wrong alignment on UAB_SprayDecal_C");
static_assert(sizeof(UAB_SprayDecal_C) == 0x0004A0, "Wrong size on UAB_SprayDecal_C");
static_assert(offsetof(UAB_SprayDecal_C, UberGraphFrame) == 0x000498, "Member 'UAB_SprayDecal_C::UberGraphFrame' has a wrong offset!");

}
