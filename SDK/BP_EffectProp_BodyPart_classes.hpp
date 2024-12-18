#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectProp_BodyPart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EffectProp_BodyPart.BP_EffectProp_BodyPart_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_EffectProp_BodyPart_C : public ACAEffectProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_EffectProp_BodyPart(int32 EntryPoint);
	void OnSplat(int32 Splat_counter, class UPrimitiveComponent* Hit_component, class AActor* Other_actor, class UPrimitiveComponent* Other_comp, const struct FVector& Normal_impulse, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EffectProp_BodyPart_C">();
	}
	static class ABP_EffectProp_BodyPart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EffectProp_BodyPart_C>();
	}
};
static_assert(alignof(ABP_EffectProp_BodyPart_C) == 0x000008, "Wrong alignment on ABP_EffectProp_BodyPart_C");
static_assert(sizeof(ABP_EffectProp_BodyPart_C) == 0x0003B8, "Wrong size on ABP_EffectProp_BodyPart_C");
static_assert(offsetof(ABP_EffectProp_BodyPart_C, UberGraphFrame) == 0x0003B0, "Member 'ABP_EffectProp_BodyPart_C::UberGraphFrame' has a wrong offset!");

}

