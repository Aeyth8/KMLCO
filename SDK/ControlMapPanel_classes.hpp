#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlMapPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ControlMapPanel.ControlMapPanel_C
// 0x0038 (0x02D8 - 0x02A0)
class UControlMapPanel_C final : public UCAControlMapPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFE_screenTitle_C*                      FE_screenTitle;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_controlKey;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_controlPad;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_controlPad_playstation;                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        View_stack;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsMatchStartActive;                                // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ControlMapPanel(int32 EntryPoint);
	void OnInputModeChanged();
	void OnShow();
	void InitialiseBasedOnControlMode();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ControlMapPanel_C">();
	}
	static class UControlMapPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlMapPanel_C>();
	}
};
static_assert(alignof(UControlMapPanel_C) == 0x000008, "Wrong alignment on UControlMapPanel_C");
static_assert(sizeof(UControlMapPanel_C) == 0x0002D8, "Wrong size on UControlMapPanel_C");
static_assert(offsetof(UControlMapPanel_C, UberGraphFrame) == 0x0002A0, "Member 'UControlMapPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UControlMapPanel_C, FE_screenTitle) == 0x0002A8, "Member 'UControlMapPanel_C::FE_screenTitle' has a wrong offset!");
static_assert(offsetof(UControlMapPanel_C, Img_controlKey) == 0x0002B0, "Member 'UControlMapPanel_C::Img_controlKey' has a wrong offset!");
static_assert(offsetof(UControlMapPanel_C, Img_controlPad) == 0x0002B8, "Member 'UControlMapPanel_C::Img_controlPad' has a wrong offset!");
static_assert(offsetof(UControlMapPanel_C, Img_controlPad_playstation) == 0x0002C0, "Member 'UControlMapPanel_C::Img_controlPad_playstation' has a wrong offset!");
static_assert(offsetof(UControlMapPanel_C, View_stack) == 0x0002C8, "Member 'UControlMapPanel_C::View_stack' has a wrong offset!");
static_assert(offsetof(UControlMapPanel_C, IsMatchStartActive) == 0x0002D0, "Member 'UControlMapPanel_C::IsMatchStartActive' has a wrong offset!");

}

