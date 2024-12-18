#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_TutorialScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_TutorialScreen.BPUI_TutorialScreen_C
// 0x0020 (0x0408 - 0x03E8)
class UBPUI_TutorialScreen_C final : public UCAHUDTutorialScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHUDSecondaryActionButton_C*            back_btn;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HowToPlay_CardContainer_C*        Card_container;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Parent_container;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_TutorialScreen(int32 EntryPoint);
	void Back_Button_Selected();
	void BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void OnHide();
	void OnShow();
	void OnLoaded_6AECB6764F5AC039527E919ED39554FB(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_TutorialScreen_C">();
	}
	static class UBPUI_TutorialScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_TutorialScreen_C>();
	}
};
static_assert(alignof(UBPUI_TutorialScreen_C) == 0x000008, "Wrong alignment on UBPUI_TutorialScreen_C");
static_assert(sizeof(UBPUI_TutorialScreen_C) == 0x000408, "Wrong size on UBPUI_TutorialScreen_C");
static_assert(offsetof(UBPUI_TutorialScreen_C, UberGraphFrame) == 0x0003E8, "Member 'UBPUI_TutorialScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_TutorialScreen_C, back_btn) == 0x0003F0, "Member 'UBPUI_TutorialScreen_C::back_btn' has a wrong offset!");
static_assert(offsetof(UBPUI_TutorialScreen_C, Card_container) == 0x0003F8, "Member 'UBPUI_TutorialScreen_C::Card_container' has a wrong offset!");
static_assert(offsetof(UBPUI_TutorialScreen_C, Parent_container) == 0x000400, "Member 'UBPUI_TutorialScreen_C::Parent_container' has a wrong offset!");

}

