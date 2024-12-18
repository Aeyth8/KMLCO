#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_MapZoneIconBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_MapZoneIconBase.BPUI_HUD_MapZoneIconBase_C
// 0x0008 (0x04D0 - 0x04C8)
class UBPUI_HUD_MapZoneIconBase_C : public UCAHUDMapZoneIconWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPUI_HUD_MapZoneIconBase(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_MapZoneIconBase_C">();
	}
	static class UBPUI_HUD_MapZoneIconBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_MapZoneIconBase_C>();
	}
};
static_assert(alignof(UBPUI_HUD_MapZoneIconBase_C) == 0x000008, "Wrong alignment on UBPUI_HUD_MapZoneIconBase_C");
static_assert(sizeof(UBPUI_HUD_MapZoneIconBase_C) == 0x0004D0, "Wrong size on UBPUI_HUD_MapZoneIconBase_C");
static_assert(offsetof(UBPUI_HUD_MapZoneIconBase_C, UberGraphFrame) == 0x0004C8, "Member 'UBPUI_HUD_MapZoneIconBase_C::UberGraphFrame' has a wrong offset!");

}

