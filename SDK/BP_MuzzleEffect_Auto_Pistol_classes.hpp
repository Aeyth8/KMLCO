#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MuzzleEffect_Auto_Pistol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MuzzleEffect_Auto_Pistol.BP_MuzzleEffect_Auto_Pistol_C
// 0x0010 (0x0320 - 0x0310)
class ABP_MuzzleEffect_Auto_Pistol_C final : public ACAMuzzleEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MuzzleEffect_Auto_Pistol(int32 EntryPoint);
	void OnFire();
	void OnEquip();
	void OnReload();
	void OnIdle();
	void OnSecondaryAction();
	void OnPrimaryAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MuzzleEffect_Auto_Pistol_C">();
	}
	static class ABP_MuzzleEffect_Auto_Pistol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MuzzleEffect_Auto_Pistol_C>();
	}
};
static_assert(alignof(ABP_MuzzleEffect_Auto_Pistol_C) == 0x000008, "Wrong alignment on ABP_MuzzleEffect_Auto_Pistol_C");
static_assert(sizeof(ABP_MuzzleEffect_Auto_Pistol_C) == 0x000320, "Wrong size on ABP_MuzzleEffect_Auto_Pistol_C");
static_assert(offsetof(ABP_MuzzleEffect_Auto_Pistol_C, UberGraphFrame) == 0x000310, "Member 'ABP_MuzzleEffect_Auto_Pistol_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MuzzleEffect_Auto_Pistol_C, DefaultSceneRoot) == 0x000318, "Member 'ABP_MuzzleEffect_Auto_Pistol_C::DefaultSceneRoot' has a wrong offset!");

}
