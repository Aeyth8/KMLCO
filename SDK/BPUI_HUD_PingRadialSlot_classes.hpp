#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_PingRadialSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_PingRadialSlot.BPUI_HUD_PingRadialSlot_C
// 0x0028 (0x0310 - 0x02E8)
class UBPUI_HUD_PingRadialSlot_C final : public UCAHUDRadialMenuSlotBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Over;                                              // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_background;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_pointer;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_147;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_HUD_PingRadialSlot(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetDisabledState();
	void SetFocusedState(bool Is_focused);
	void SetDefaultState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_PingRadialSlot_C">();
	}
	static class UBPUI_HUD_PingRadialSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_PingRadialSlot_C>();
	}
};
static_assert(alignof(UBPUI_HUD_PingRadialSlot_C) == 0x000008, "Wrong alignment on UBPUI_HUD_PingRadialSlot_C");
static_assert(sizeof(UBPUI_HUD_PingRadialSlot_C) == 0x000310, "Wrong size on UBPUI_HUD_PingRadialSlot_C");
static_assert(offsetof(UBPUI_HUD_PingRadialSlot_C, UberGraphFrame) == 0x0002E8, "Member 'UBPUI_HUD_PingRadialSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PingRadialSlot_C, Over) == 0x0002F0, "Member 'UBPUI_HUD_PingRadialSlot_C::Over' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PingRadialSlot_C, Img_background) == 0x0002F8, "Member 'UBPUI_HUD_PingRadialSlot_C::Img_background' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PingRadialSlot_C, Img_pointer) == 0x000300, "Member 'UBPUI_HUD_PingRadialSlot_C::Img_pointer' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_PingRadialSlot_C, VerticalBox_147) == 0x000308, "Member 'UBPUI_HUD_PingRadialSlot_C::VerticalBox_147' has a wrong offset!");

}
