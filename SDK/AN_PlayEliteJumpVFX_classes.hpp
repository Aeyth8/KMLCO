#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_PlayEliteJumpVFX

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_PlayEliteJumpVFX.AN_PlayEliteJumpVFX_C
// 0x0008 (0x0048 - 0x0040)
class UAN_PlayEliteJumpVFX_C final : public UAnimNotify
{
public:
	float                                         VFXDuration;                                       // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_PlayEliteJumpVFX_C">();
	}
	static class UAN_PlayEliteJumpVFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_PlayEliteJumpVFX_C>();
	}
};
static_assert(alignof(UAN_PlayEliteJumpVFX_C) == 0x000008, "Wrong alignment on UAN_PlayEliteJumpVFX_C");
static_assert(sizeof(UAN_PlayEliteJumpVFX_C) == 0x000048, "Wrong size on UAN_PlayEliteJumpVFX_C");
static_assert(offsetof(UAN_PlayEliteJumpVFX_C, VFXDuration) == 0x000040, "Member 'UAN_PlayEliteJumpVFX_C::VFXDuration' has a wrong offset!");

}

