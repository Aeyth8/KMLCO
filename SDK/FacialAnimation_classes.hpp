#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FacialAnimation

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class FacialAnimation.AudioCurveSourceComponent
// 0x0040 (0x0900 - 0x08C0)
class UAudioCurveSourceComponent final : public UAudioComponent
{
public:
	class FName                                   CurveSourceBindingName;                            // 0x08C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveSyncOffset;                                   // 0x08CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8D0[0x30];                                     // 0x08D0(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCurveSourceComponent">();
	}
	static class UAudioCurveSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCurveSourceComponent>();
	}
};
static_assert(alignof(UAudioCurveSourceComponent) == 0x000010, "Wrong alignment on UAudioCurveSourceComponent");
static_assert(sizeof(UAudioCurveSourceComponent) == 0x000900, "Wrong size on UAudioCurveSourceComponent");
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x0008C0, "Member 'UAudioCurveSourceComponent::CurveSourceBindingName' has a wrong offset!");
static_assert(offsetof(UAudioCurveSourceComponent, CurveSyncOffset) == 0x0008CC, "Member 'UAudioCurveSourceComponent::CurveSyncOffset' has a wrong offset!");

}
