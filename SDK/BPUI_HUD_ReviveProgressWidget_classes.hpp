#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_ReviveProgressWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_ReviveProgressWidget.BPUI_HUD_ReviveProgressWidget_C
// 0x0038 (0x0480 - 0x0448)
class UBPUI_HUD_ReviveProgressWidget_C final : public UCAHUDReviveProgress
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ProgressFix;                                       // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 bg;                                                // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Key;                                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Progress_v2;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBg;                                        // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_ReviveProgressWidget_C">();
	}
	static class UBPUI_HUD_ReviveProgressWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_ReviveProgressWidget_C>();
	}
};
static_assert(alignof(UBPUI_HUD_ReviveProgressWidget_C) == 0x000008, "Wrong alignment on UBPUI_HUD_ReviveProgressWidget_C");
static_assert(sizeof(UBPUI_HUD_ReviveProgressWidget_C) == 0x000480, "Wrong size on UBPUI_HUD_ReviveProgressWidget_C");
static_assert(offsetof(UBPUI_HUD_ReviveProgressWidget_C, UberGraphFrame) == 0x000448, "Member 'UBPUI_HUD_ReviveProgressWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_ReviveProgressWidget_C, ProgressFix) == 0x000450, "Member 'UBPUI_HUD_ReviveProgressWidget_C::ProgressFix' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_ReviveProgressWidget_C, bg) == 0x000458, "Member 'UBPUI_HUD_ReviveProgressWidget_C::bg' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_ReviveProgressWidget_C, Glow) == 0x000460, "Member 'UBPUI_HUD_ReviveProgressWidget_C::Glow' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_ReviveProgressWidget_C, IMG_Key) == 0x000468, "Member 'UBPUI_HUD_ReviveProgressWidget_C::IMG_Key' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_ReviveProgressWidget_C, IMG_Progress_v2) == 0x000470, "Member 'UBPUI_HUD_ReviveProgressWidget_C::IMG_Progress_v2' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_ReviveProgressWidget_C, ProgressBg) == 0x000478, "Member 'UBPUI_HUD_ReviveProgressWidget_C::ProgressBg' has a wrong offset!");

}

