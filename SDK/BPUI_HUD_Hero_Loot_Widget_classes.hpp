#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_Hero_Loot_Widget

#include "Basic.hpp"

#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_Hero_Loot_Widget.BPUI_HUD_Hero_Loot_Widget_C
// 0x0010 (0x03E8 - 0x03D8)
class UBPUI_HUD_Hero_Loot_Widget_C final : public UCAHeroLootWidget
{
public:
	class UImage*                                 bg;                                                // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ZeroMinusgMinusbkgMinusimg;                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_Hero_Loot_Widget_C">();
	}
	static class UBPUI_HUD_Hero_Loot_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_Hero_Loot_Widget_C>();
	}
};
static_assert(alignof(UBPUI_HUD_Hero_Loot_Widget_C) == 0x000008, "Wrong alignment on UBPUI_HUD_Hero_Loot_Widget_C");
static_assert(sizeof(UBPUI_HUD_Hero_Loot_Widget_C) == 0x0003E8, "Wrong size on UBPUI_HUD_Hero_Loot_Widget_C");
static_assert(offsetof(UBPUI_HUD_Hero_Loot_Widget_C, bg) == 0x0003D8, "Member 'UBPUI_HUD_Hero_Loot_Widget_C::bg' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_Hero_Loot_Widget_C, ZeroMinusgMinusbkgMinusimg) == 0x0003E0, "Member 'UBPUI_HUD_Hero_Loot_Widget_C::ZeroMinusgMinusbkgMinusimg' has a wrong offset!");

}
