#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KeybindingInputPanel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CALocalisationRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_KeybindingInputPanel.BP_KeybindingInputPanel_C
// 0x01C8 (0x0520 - 0x0358)
class UBP_KeybindingInputPanel_C final : public UCAKeybindingInputPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Popup_Show;                                        // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_Tint;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_1;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_2;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_action;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_msg_1;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_msg_2;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_image;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_KeyDisplayWidget_C*                 Primary_key;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_210;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slot_text;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Waves;                                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Inactive_colour;                                   // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Focus_colour;                                      // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Selected_colour;                                   // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAText                                Title_1;                                           // 0x03F8(0x0030)(Edit, BlueprintVisible)
	struct FCAText                                Title_2;                                           // 0x0428(0x0030)(Edit, BlueprintVisible)
	struct FCAText                                Msg_1;                                             // 0x0458(0x0030)(Edit, BlueprintVisible)
	struct FCAText                                Msg_2;                                             // 0x0488(0x0030)(Edit, BlueprintVisible)
	struct FCAText                                Action;                                            // 0x04B8(0x0030)(Edit, BlueprintVisible)
	struct FCAText                                Axis;                                              // 0x04E8(0x0030)(Edit, BlueprintVisible)
	bool                                          Is_action;                                         // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_KeybindingInputPanel(int32 EntryPoint);
	void SetFocusedState();
	void BndEvt__BP_KeybindingInputPanel_cancel_button_K2Node_ComponentBoundEvent_1_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_KeybindingInputPanel_cancel_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void SetInactiveState();
	void OnRefreshView();
	void ApplyTitles();
	void ApplyLabels();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KeybindingInputPanel_C">();
	}
	static class UBP_KeybindingInputPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_KeybindingInputPanel_C>();
	}
};
static_assert(alignof(UBP_KeybindingInputPanel_C) == 0x000008, "Wrong alignment on UBP_KeybindingInputPanel_C");
static_assert(sizeof(UBP_KeybindingInputPanel_C) == 0x000520, "Wrong size on UBP_KeybindingInputPanel_C");
static_assert(offsetof(UBP_KeybindingInputPanel_C, UberGraphFrame) == 0x000358, "Member 'UBP_KeybindingInputPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Popup_Show) == 0x000360, "Member 'UBP_KeybindingInputPanel_C::Popup_Show' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, BG_Tint) == 0x000368, "Member 'UBP_KeybindingInputPanel_C::BG_Tint' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Image_65) == 0x000370, "Member 'UBP_KeybindingInputPanel_C::Image_65' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Label_1) == 0x000378, "Member 'UBP_KeybindingInputPanel_C::Label_1' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Label_2) == 0x000380, "Member 'UBP_KeybindingInputPanel_C::Label_2' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Label_action) == 0x000388, "Member 'UBP_KeybindingInputPanel_C::Label_action' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Label_msg_1) == 0x000390, "Member 'UBP_KeybindingInputPanel_C::Label_msg_1' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Label_msg_2) == 0x000398, "Member 'UBP_KeybindingInputPanel_C::Label_msg_2' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, M_image) == 0x0003A0, "Member 'UBP_KeybindingInputPanel_C::M_image' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Primary_key) == 0x0003A8, "Member 'UBP_KeybindingInputPanel_C::Primary_key' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, ProgressBar_210) == 0x0003B0, "Member 'UBP_KeybindingInputPanel_C::ProgressBar_210' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Slot_text) == 0x0003B8, "Member 'UBP_KeybindingInputPanel_C::Slot_text' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Waves) == 0x0003C0, "Member 'UBP_KeybindingInputPanel_C::Waves' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Inactive_colour) == 0x0003C8, "Member 'UBP_KeybindingInputPanel_C::Inactive_colour' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Focus_colour) == 0x0003D8, "Member 'UBP_KeybindingInputPanel_C::Focus_colour' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Selected_colour) == 0x0003E8, "Member 'UBP_KeybindingInputPanel_C::Selected_colour' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Title_1) == 0x0003F8, "Member 'UBP_KeybindingInputPanel_C::Title_1' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Title_2) == 0x000428, "Member 'UBP_KeybindingInputPanel_C::Title_2' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Msg_1) == 0x000458, "Member 'UBP_KeybindingInputPanel_C::Msg_1' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Msg_2) == 0x000488, "Member 'UBP_KeybindingInputPanel_C::Msg_2' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Action) == 0x0004B8, "Member 'UBP_KeybindingInputPanel_C::Action' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Axis) == 0x0004E8, "Member 'UBP_KeybindingInputPanel_C::Axis' has a wrong offset!");
static_assert(offsetof(UBP_KeybindingInputPanel_C, Is_action) == 0x000518, "Member 'UBP_KeybindingInputPanel_C::Is_action' has a wrong offset!");

}
