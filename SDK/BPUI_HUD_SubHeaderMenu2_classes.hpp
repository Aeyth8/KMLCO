#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_SubHeaderMenu2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_SubHeaderMenu2.BPUI_HUD_SubHeaderMenu2_C
// 0x0048 (0x0410 - 0x03C8)
class UBPUI_HUD_SubHeaderMenu2_C final : public UCAHUDHeaderMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Slide2;                                            // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       buttonsSlide;                                      // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Slide;                                             // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         Action_hint_container_L;                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Action_hint_container_R;                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MainOverlay;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Waves;                                             // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsCollapsed;                                       // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPUI_HUD_SubHeaderMenu2(int32 EntryPoint);
	void Collapsed();
	void Expanded();
	void OnVisibilityChanged_Event_0(ESlateVisibility InVisibility);
	void Construct();
	void BndEvt__BP_SubHeaderMenu_m_button_6_K2Node_ComponentBoundEvent_12_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_SubHeaderMenu_m_button_5_K2Node_ComponentBoundEvent_11_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_SubHeaderMenu_m_button_4_K2Node_ComponentBoundEvent_10_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_SubHeaderMenu_m_button_3_K2Node_ComponentBoundEvent_9_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_SubHeaderMenu_m_button_2_K2Node_ComponentBoundEvent_8_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_SubHeaderMenu_m_button_1_K2Node_ComponentBoundEvent_7_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_SubHeaderMenu_m_button_0_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void ShowActionHints(bool Show);
	void SequenceEvent__ENTRYPOINTBPUI_HUD_SubHeaderMenu2_0();
	void SequenceEvent__ENTRYPOINTBPUI_HUD_SubHeaderMenu2_1();
	void SequenceEvent__ENTRYPOINTBPUI_HUD_SubHeaderMenu2_2();
	void SequenceEvent__ENTRYPOINTBPUI_HUD_SubHeaderMenu2_3();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_SubHeaderMenu2_C">();
	}
	static class UBPUI_HUD_SubHeaderMenu2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_SubHeaderMenu2_C>();
	}
};
static_assert(alignof(UBPUI_HUD_SubHeaderMenu2_C) == 0x000008, "Wrong alignment on UBPUI_HUD_SubHeaderMenu2_C");
static_assert(sizeof(UBPUI_HUD_SubHeaderMenu2_C) == 0x000410, "Wrong size on UBPUI_HUD_SubHeaderMenu2_C");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, UberGraphFrame) == 0x0003C8, "Member 'UBPUI_HUD_SubHeaderMenu2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, Slide2) == 0x0003D0, "Member 'UBPUI_HUD_SubHeaderMenu2_C::Slide2' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, buttonsSlide) == 0x0003D8, "Member 'UBPUI_HUD_SubHeaderMenu2_C::buttonsSlide' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, Slide) == 0x0003E0, "Member 'UBPUI_HUD_SubHeaderMenu2_C::Slide' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, Action_hint_container_L) == 0x0003E8, "Member 'UBPUI_HUD_SubHeaderMenu2_C::Action_hint_container_L' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, Action_hint_container_R) == 0x0003F0, "Member 'UBPUI_HUD_SubHeaderMenu2_C::Action_hint_container_R' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, MainOverlay) == 0x0003F8, "Member 'UBPUI_HUD_SubHeaderMenu2_C::MainOverlay' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, Waves) == 0x000400, "Member 'UBPUI_HUD_SubHeaderMenu2_C::Waves' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SubHeaderMenu2_C, IsCollapsed) == 0x000408, "Member 'UBPUI_HUD_SubHeaderMenu2_C::IsCollapsed' has a wrong offset!");

}

