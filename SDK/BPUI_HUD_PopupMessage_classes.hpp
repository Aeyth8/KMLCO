#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_PopupMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_PopupMessage.BPUI_HUD_PopupMessage_C
// 0x0060 (0x0600 - 0x05A0)
class UBPUI_HUD_PopupMessage_C final : public UCAHUDOnboardingPopupMessage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Popup_show;                                        // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_Tint;                                           // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BODY_BG;                                           // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HUD_InputDisplayWidget_C*         BPUI_HUD_InputDisplayWidget;                       // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FOOTER_BG;                                         // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FullscreenBlink;                                   // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_122;                                         // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_203;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_210;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Waves;                                             // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_HUD_PopupMessage(int32 EntryPoint);
	void EmptyEvent();
	void OnHide();
	void OnShow();
	void Block_Game_Input(TDelegate<void()> Callback);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_PopupMessage_C">();
	}
	static class UBPUI_HUD_PopupMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_PopupMessage_C>();
	}
};
static_assert(alignof(UBPUI_HUD_PopupMessage_C) == 0x000008, "Wrong alignment on UBPUI_HUD_PopupMessage_C");
static_assert(sizeof(UBPUI_HUD_PopupMessage_C) == 0x000600, "Wrong size on UBPUI_HUD_PopupMessage_C");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, UberGraphFrame) == 0x0005A0, "Member 'UBPUI_HUD_PopupMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, Popup_show) == 0x0005A8, "Member 'UBPUI_HUD_PopupMessage_C::Popup_show' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, BG_Tint) == 0x0005B0, "Member 'UBPUI_HUD_PopupMessage_C::BG_Tint' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, BODY_BG) == 0x0005B8, "Member 'UBPUI_HUD_PopupMessage_C::BODY_BG' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, BPUI_HUD_InputDisplayWidget) == 0x0005C0, "Member 'UBPUI_HUD_PopupMessage_C::BPUI_HUD_InputDisplayWidget' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, FOOTER_BG) == 0x0005C8, "Member 'UBPUI_HUD_PopupMessage_C::FOOTER_BG' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, FullscreenBlink) == 0x0005D0, "Member 'UBPUI_HUD_PopupMessage_C::FullscreenBlink' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, Image_65) == 0x0005D8, "Member 'UBPUI_HUD_PopupMessage_C::Image_65' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, Image_122) == 0x0005E0, "Member 'UBPUI_HUD_PopupMessage_C::Image_122' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, Image_203) == 0x0005E8, "Member 'UBPUI_HUD_PopupMessage_C::Image_203' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, ProgressBar_210) == 0x0005F0, "Member 'UBPUI_HUD_PopupMessage_C::ProgressBar_210' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PopupMessage_C, Waves) == 0x0005F8, "Member 'UBPUI_HUD_PopupMessage_C::Waves' has a wrong offset!");

}
