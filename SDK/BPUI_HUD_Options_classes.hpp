#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_Options

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_Options.BPUI_HUD_Options_C
// 0x0018 (0x03E8 - 0x03D0)
class UBPUI_HUD_Options_C final : public UCAHUDBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicOptionsPanel_C*                 Dynamic_options;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsMatchStartActive;                                // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPUI_HUD_Options(int32 EntryPoint);
	void BlockInputEvent();
	void SetTitles(const struct FCAText& Parent_Title, const struct FCAText& Screen_Title);
	void OnHide();
	void OnShow();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void CaptureInput();
	void ReleaseInput();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_Options_C">();
	}
	static class UBPUI_HUD_Options_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_Options_C>();
	}
};
static_assert(alignof(UBPUI_HUD_Options_C) == 0x000008, "Wrong alignment on UBPUI_HUD_Options_C");
static_assert(sizeof(UBPUI_HUD_Options_C) == 0x0003E8, "Wrong size on UBPUI_HUD_Options_C");
static_assert(offsetof(UBPUI_HUD_Options_C, UberGraphFrame) == 0x0003D0, "Member 'UBPUI_HUD_Options_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_Options_C, Dynamic_options) == 0x0003D8, "Member 'UBPUI_HUD_Options_C::Dynamic_options' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_Options_C, IsMatchStartActive) == 0x0003E0, "Member 'UBPUI_HUD_Options_C::IsMatchStartActive' has a wrong offset!");

}

