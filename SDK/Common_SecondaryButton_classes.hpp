#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Common_SecondaryButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Common_SecondaryButton.Common_SecondaryButton_C
// 0x0048 (0x0738 - 0x06F0)
class UCommon_SecondaryButton_C final : public UCABaseActionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PressAnim;                                         // 0x06F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 bg_texture;                                        // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_a;                                            // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           bg_hover;                                          // 0x0710(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           bg_default;                                        // 0x0720(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowTexture;                                       // 0x0730(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Common_SecondaryButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Common_SecondaryButton_m_internal_button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Common_CTAButton_m_internal_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetUnfocusedState();
	void SetFocusedState();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Common_SecondaryButton_C">();
	}
	static class UCommon_SecondaryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommon_SecondaryButton_C>();
	}
};
static_assert(alignof(UCommon_SecondaryButton_C) == 0x000008, "Wrong alignment on UCommon_SecondaryButton_C");
static_assert(sizeof(UCommon_SecondaryButton_C) == 0x000738, "Wrong size on UCommon_SecondaryButton_C");
static_assert(offsetof(UCommon_SecondaryButton_C, UberGraphFrame) == 0x0006F0, "Member 'UCommon_SecondaryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommon_SecondaryButton_C, PressAnim) == 0x0006F8, "Member 'UCommon_SecondaryButton_C::PressAnim' has a wrong offset!");
static_assert(offsetof(UCommon_SecondaryButton_C, bg_texture) == 0x000700, "Member 'UCommon_SecondaryButton_C::bg_texture' has a wrong offset!");
static_assert(offsetof(UCommon_SecondaryButton_C, Slot_a) == 0x000708, "Member 'UCommon_SecondaryButton_C::Slot_a' has a wrong offset!");
static_assert(offsetof(UCommon_SecondaryButton_C, bg_hover) == 0x000710, "Member 'UCommon_SecondaryButton_C::bg_hover' has a wrong offset!");
static_assert(offsetof(UCommon_SecondaryButton_C, bg_default) == 0x000720, "Member 'UCommon_SecondaryButton_C::bg_default' has a wrong offset!");
static_assert(offsetof(UCommon_SecondaryButton_C, ShowTexture) == 0x000730, "Member 'UCommon_SecondaryButton_C::ShowTexture' has a wrong offset!");

}
