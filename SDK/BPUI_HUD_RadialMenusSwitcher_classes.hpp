#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_RadialMenusSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C
// 0x0138 (0x05A0 - 0x0468)
class UBPUI_HUD_RadialMenusSwitcher_C final : public UCAHUDRadialMenusSwitcherWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0468(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPUI_HUD_PingRadialMenu_C*             BPUI_HUD_PingRadialMenu;                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Label_left;                                        // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Label_right;                                       // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HUD_InputDisplayWidget_C*         Menu_switch_left_button;                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HUD_InputDisplayWidget_C*         Menu_switch_right_button;                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Prompt_left;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Prompt_right;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_emotes;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_pings;                                        // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_sprays;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Txt_item_name;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Txt_item_type;                                     // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFeatureClassPtr                       Emote_class_ptr;                                   // 0x04D0(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFeatureClassPtr                       Spray_class_ptr;                                   // 0x0538(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher(int32 EntryPoint);
	void OnItemFocused(class UCAHUDRadialMenuSlotBase* Slot_0);
	void InitCallbacks();
	void RefreshItemLabel();
	void OnActiveMenuChanged();
	void InitSprayWheel();
	void InitEmoteWheel();
	void PreConstruct(bool IsDesignTime);
	void OnHide();
	void OnShow();
	void CaptureInput();
	void ReleaseInput();
	void RefreshSwitchButtons();
	void UpdatePrompt(int32 Page_index, class UPanelWidget* Prompt, class UCATextBlock* Label);

	void GetLabel(int32 Page_index, struct FCAText* Label_text) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_RadialMenusSwitcher_C">();
	}
	static class UBPUI_HUD_RadialMenusSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_RadialMenusSwitcher_C>();
	}
};
static_assert(alignof(UBPUI_HUD_RadialMenusSwitcher_C) == 0x000008, "Wrong alignment on UBPUI_HUD_RadialMenusSwitcher_C");
static_assert(sizeof(UBPUI_HUD_RadialMenusSwitcher_C) == 0x0005A0, "Wrong size on UBPUI_HUD_RadialMenusSwitcher_C");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, UberGraphFrame) == 0x000468, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, BPUI_HUD_PingRadialMenu) == 0x000470, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::BPUI_HUD_PingRadialMenu' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Label_left) == 0x000478, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Label_left' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Label_right) == 0x000480, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Label_right' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Menu_switch_left_button) == 0x000488, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Menu_switch_left_button' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Menu_switch_right_button) == 0x000490, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Menu_switch_right_button' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Prompt_left) == 0x000498, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Prompt_left' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Prompt_right) == 0x0004A0, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Prompt_right' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Slot_emotes) == 0x0004A8, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Slot_emotes' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Slot_pings) == 0x0004B0, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Slot_pings' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Slot_sprays) == 0x0004B8, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Slot_sprays' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Txt_item_name) == 0x0004C0, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Txt_item_name' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Txt_item_type) == 0x0004C8, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Txt_item_type' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Emote_class_ptr) == 0x0004D0, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Emote_class_ptr' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_RadialMenusSwitcher_C, Spray_class_ptr) == 0x000538, "Member 'UBPUI_HUD_RadialMenusSwitcher_C::Spray_class_ptr' has a wrong offset!");

}

