#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StandardOutlineButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CALocalisationRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_StandardOutlineButton.BP_StandardOutlineButton_C
// 0x0070 (0x0368 - 0x02F8)
class UBP_StandardOutlineButton_C final : public UCABaseUIElement
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             LabelText;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCAText                                Label_text;                                        // 0x0308(0x0030)(Edit, BlueprintVisible)
	struct FLinearColor                           button_default;                                    // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           button_hover;                                      // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Button_Pressed;                                    // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_StandardOutlineButton(int32 EntryPoint);
	void SetLabel(const class FText& Label);
	void BndEvt__m_internal_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnUserSelected(bool Using_mouse);
	void Construct();
	void OnUserFocused(bool Using_mouse);
	void OnUserLostFocus(bool Using_mouse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StandardOutlineButton_C">();
	}
	static class UBP_StandardOutlineButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_StandardOutlineButton_C>();
	}
};
static_assert(alignof(UBP_StandardOutlineButton_C) == 0x000008, "Wrong alignment on UBP_StandardOutlineButton_C");
static_assert(sizeof(UBP_StandardOutlineButton_C) == 0x000368, "Wrong size on UBP_StandardOutlineButton_C");
static_assert(offsetof(UBP_StandardOutlineButton_C, UberGraphFrame) == 0x0002F8, "Member 'UBP_StandardOutlineButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_StandardOutlineButton_C, LabelText) == 0x000300, "Member 'UBP_StandardOutlineButton_C::LabelText' has a wrong offset!");
static_assert(offsetof(UBP_StandardOutlineButton_C, Label_text) == 0x000308, "Member 'UBP_StandardOutlineButton_C::Label_text' has a wrong offset!");
static_assert(offsetof(UBP_StandardOutlineButton_C, button_default) == 0x000338, "Member 'UBP_StandardOutlineButton_C::button_default' has a wrong offset!");
static_assert(offsetof(UBP_StandardOutlineButton_C, button_hover) == 0x000348, "Member 'UBP_StandardOutlineButton_C::button_hover' has a wrong offset!");
static_assert(offsetof(UBP_StandardOutlineButton_C, Button_Pressed) == 0x000358, "Member 'UBP_StandardOutlineButton_C::Button_Pressed' has a wrong offset!");

}
