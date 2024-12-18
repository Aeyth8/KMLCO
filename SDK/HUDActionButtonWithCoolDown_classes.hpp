#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDActionButtonWithCoolDown

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C
// 0x0028 (0x06D0 - 0x06A8)
class UHUDActionButtonWithCoolDown_C final : public UCAHUDActionElementWithCoolDown
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                           bg_hover;                                          // 0x06B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           bg_default;                                        // 0x06C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUDActionButtonWithCoolDown(int32 EntryPoint);
	void OnInputChanged(bool Is_controller, const ECAInputMode Input_mode);
	void SetUnfocusedState();
	void SetFocusedState();
	void OnUserSelected(bool Using_mouse);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BndEvt__m_internal_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnUserLostFocus(bool Using_mouse);
	void OnUserFocused(bool Using_mouse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUDActionButtonWithCoolDown_C">();
	}
	static class UHUDActionButtonWithCoolDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDActionButtonWithCoolDown_C>();
	}
};
static_assert(alignof(UHUDActionButtonWithCoolDown_C) == 0x000008, "Wrong alignment on UHUDActionButtonWithCoolDown_C");
static_assert(sizeof(UHUDActionButtonWithCoolDown_C) == 0x0006D0, "Wrong size on UHUDActionButtonWithCoolDown_C");
static_assert(offsetof(UHUDActionButtonWithCoolDown_C, UberGraphFrame) == 0x0006A8, "Member 'UHUDActionButtonWithCoolDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUDActionButtonWithCoolDown_C, bg_hover) == 0x0006B0, "Member 'UHUDActionButtonWithCoolDown_C::bg_hover' has a wrong offset!");
static_assert(offsetof(UHUDActionButtonWithCoolDown_C, bg_default) == 0x0006C0, "Member 'UHUDActionButtonWithCoolDown_C::bg_default' has a wrong offset!");

}

