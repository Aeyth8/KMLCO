#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeaderButton

#include "Basic.hpp"

#include "CALocalisationRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_HeaderButton.BP_HeaderButton_C
// 0x00F0 (0x0400 - 0x0310)
class UBP_HeaderButton_C final : public UCAToggleUIElement
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       bump;                                              // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       barScale;                                          // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Highlight_Line;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockIcon;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_Glitch;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            Hover_text_color;                                  // 0x0348(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            Normal_text_color;                                 // 0x0370(0x0028)(Edit, BlueprintVisible)
	struct FCAText                                Lable_text;                                        // 0x0398(0x0030)(Edit, BlueprintVisible)
	struct FSlateColor                            Selected_text_color;                               // 0x03C8(0x0028)(Edit, BlueprintVisible)
	float                                         GlitchMaterialValue;                               // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Main_Glitch_Material_Inst;                         // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HeaderButton(int32 EntryPoint);
	void UpdateColors(const struct FSlateColor& Hovered_color, const struct FSlateColor& Normal_color, const struct FSlateColor& Selected_color);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void GlitchMaterial();
	void SetLabel(const class FText& Label);
	void OnIsEnabledChanged(bool bInIsEnabled);
	void SetFocusedState();
	void SetInactiveState();
	void SetSelectedState();
	void OnUserSelected(bool Using_mouse);
	void OnUserLostFocus(bool Using_mouse);
	void OnUserFocused(bool Using_mouse);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeaderButton_C">();
	}
	static class UBP_HeaderButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HeaderButton_C>();
	}
};
static_assert(alignof(UBP_HeaderButton_C) == 0x000008, "Wrong alignment on UBP_HeaderButton_C");
static_assert(sizeof(UBP_HeaderButton_C) == 0x000400, "Wrong size on UBP_HeaderButton_C");
static_assert(offsetof(UBP_HeaderButton_C, UberGraphFrame) == 0x000310, "Member 'UBP_HeaderButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, bump) == 0x000318, "Member 'UBP_HeaderButton_C::bump' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, Selected) == 0x000320, "Member 'UBP_HeaderButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, barScale) == 0x000328, "Member 'UBP_HeaderButton_C::barScale' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, Highlight_Line) == 0x000330, "Member 'UBP_HeaderButton_C::Highlight_Line' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, LockIcon) == 0x000338, "Member 'UBP_HeaderButton_C::LockIcon' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, RetainerBox_Glitch) == 0x000340, "Member 'UBP_HeaderButton_C::RetainerBox_Glitch' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, Hover_text_color) == 0x000348, "Member 'UBP_HeaderButton_C::Hover_text_color' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, Normal_text_color) == 0x000370, "Member 'UBP_HeaderButton_C::Normal_text_color' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, Lable_text) == 0x000398, "Member 'UBP_HeaderButton_C::Lable_text' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, Selected_text_color) == 0x0003C8, "Member 'UBP_HeaderButton_C::Selected_text_color' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, GlitchMaterialValue) == 0x0003F0, "Member 'UBP_HeaderButton_C::GlitchMaterialValue' has a wrong offset!");
static_assert(offsetof(UBP_HeaderButton_C, Main_Glitch_Material_Inst) == 0x0003F8, "Member 'UBP_HeaderButton_C::Main_Glitch_Material_Inst' has a wrong offset!");

}
