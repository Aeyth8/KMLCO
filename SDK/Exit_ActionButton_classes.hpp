#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Exit_ActionButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Exit_ActionButton.Exit_ActionButton_C
// 0x0018 (0x0708 - 0x06F0)
class UExit_ActionButton_C final : public UCABaseActionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Exit_ActionButton(int32 EntryPoint);
	void SetUnfocusedState();
	void SetFocusedState();
	void Construct();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Exit_ActionButton_C">();
	}
	static class UExit_ActionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExit_ActionButton_C>();
	}
};
static_assert(alignof(UExit_ActionButton_C) == 0x000008, "Wrong alignment on UExit_ActionButton_C");
static_assert(sizeof(UExit_ActionButton_C) == 0x000708, "Wrong size on UExit_ActionButton_C");
static_assert(offsetof(UExit_ActionButton_C, UberGraphFrame) == 0x0006F0, "Member 'UExit_ActionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UExit_ActionButton_C, Image) == 0x0006F8, "Member 'UExit_ActionButton_C::Image' has a wrong offset!");
static_assert(offsetof(UExit_ActionButton_C, Image_1) == 0x000700, "Member 'UExit_ActionButton_C::Image_1' has a wrong offset!");

}
