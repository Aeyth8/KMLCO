#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_PrimaryMessageGeneric_v4

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_PrimaryMessageGeneric_v4.BPUI_HUD_PrimaryMessageGeneric_v4_C
// 0x00B0 (0x06A0 - 0x05F0)
class UBPUI_HUD_PrimaryMessageGeneric_v4_C final : public UCAHUDPrimaryMessageBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fading;                                            // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RectSlide;                                         // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URetainerBox*                           ColorRetainerBox;                                  // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ElementFull;                                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ElementLeft;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ExtractIcon;                                       // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_73;                                          // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outer_stroke;                                      // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextOutline_1;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextOutline_2;                                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSolid;                                         // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0650(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         LetterCount;                                       // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66C[0x4];                                      // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Textn;                                             // 0x0670(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CurrentText;                                       // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 NextLetter;                                        // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_HUD_PrimaryMessageGeneric_v4(int32 EntryPoint);
	void OnShow();
	void PlayFadeAnimation();
	void HideWidget();
	void SequenceEvent__ENTRYPOINTBPUI_HUD_PrimaryMessageGeneric_v4_0();
	void SequenceEvent__ENTRYPOINTBPUI_HUD_PrimaryMessageGeneric_v4_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_PrimaryMessageGeneric_v4_C">();
	}
	static class UBPUI_HUD_PrimaryMessageGeneric_v4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_PrimaryMessageGeneric_v4_C>();
	}
};
static_assert(alignof(UBPUI_HUD_PrimaryMessageGeneric_v4_C) == 0x000008, "Wrong alignment on UBPUI_HUD_PrimaryMessageGeneric_v4_C");
static_assert(sizeof(UBPUI_HUD_PrimaryMessageGeneric_v4_C) == 0x0006A0, "Wrong size on UBPUI_HUD_PrimaryMessageGeneric_v4_C");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, UberGraphFrame) == 0x0005F0, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, Fading) == 0x0005F8, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::Fading' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, RectSlide) == 0x000600, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::RectSlide' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, ColorRetainerBox) == 0x000608, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::ColorRetainerBox' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, ElementFull) == 0x000610, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::ElementFull' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, ElementLeft) == 0x000618, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::ElementLeft' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, ExtractIcon) == 0x000620, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::ExtractIcon' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, Image_73) == 0x000628, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::Image_73' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, Outer_stroke) == 0x000630, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::Outer_stroke' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, TextOutline_1) == 0x000638, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::TextOutline_1' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, TextOutline_2) == 0x000640, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::TextOutline_2' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, TextSolid) == 0x000648, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::TextSolid' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, Text) == 0x000650, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::Text' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, LetterCount) == 0x000668, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::LetterCount' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, Textn) == 0x000670, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::Textn' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, CurrentText) == 0x000680, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::CurrentText' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PrimaryMessageGeneric_v4_C, NextLetter) == 0x000690, "Member 'UBPUI_HUD_PrimaryMessageGeneric_v4_C::NextLetter' has a wrong offset!");

}

