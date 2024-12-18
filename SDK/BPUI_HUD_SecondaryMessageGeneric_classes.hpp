#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_SecondaryMessageGeneric

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_SecondaryMessageGeneric.BPUI_HUD_SecondaryMessageGeneric_C
// 0x0090 (0x0680 - 0x05F0)
class UBPUI_HUD_SecondaryMessageGeneric_C final : public UCAHUDPrimaryMessageBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fading;                                            // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RectSlide;                                         // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Flash;                                             // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Main_fill;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Main_stroke;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outer_stroke;                                      // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSolid;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0630(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         LetterCount;                                       // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64C[0x4];                                      // 0x064C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Textn;                                             // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CurrentText;                                       // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 NextLetter;                                        // 0x0670(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_HUD_SecondaryMessageGeneric(int32 EntryPoint);
	void OnShow();
	void PlayFadeAnimation();
	void HideWidget();
	void SequenceEvent__ENTRYPOINTBPUI_HUD_SecondaryMessageGeneric_0();
	void SequenceEvent__ENTRYPOINTBPUI_HUD_SecondaryMessageGeneric_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_SecondaryMessageGeneric_C">();
	}
	static class UBPUI_HUD_SecondaryMessageGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_SecondaryMessageGeneric_C>();
	}
};
static_assert(alignof(UBPUI_HUD_SecondaryMessageGeneric_C) == 0x000008, "Wrong alignment on UBPUI_HUD_SecondaryMessageGeneric_C");
static_assert(sizeof(UBPUI_HUD_SecondaryMessageGeneric_C) == 0x000680, "Wrong size on UBPUI_HUD_SecondaryMessageGeneric_C");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, UberGraphFrame) == 0x0005F0, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, Fading) == 0x0005F8, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::Fading' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, RectSlide) == 0x000600, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::RectSlide' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, Flash) == 0x000608, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::Flash' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, Main_fill) == 0x000610, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::Main_fill' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, Main_stroke) == 0x000618, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::Main_stroke' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, Outer_stroke) == 0x000620, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::Outer_stroke' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, TextSolid) == 0x000628, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::TextSolid' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, Text) == 0x000630, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::Text' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, LetterCount) == 0x000648, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::LetterCount' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, Textn) == 0x000650, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::Textn' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, CurrentText) == 0x000660, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::CurrentText' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_SecondaryMessageGeneric_C, NextLetter) == 0x000670, "Member 'UBPUI_HUD_SecondaryMessageGeneric_C::NextLetter' has a wrong offset!");

}

