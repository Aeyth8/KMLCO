#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_MatchEndWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_MatchEndWidget.BPUI_HUD_MatchEndWidget_C
// 0x00C0 (0x0500 - 0x0440)
class UBPUI_HUD_MatchEndWidget_C final : public UCAMatchEndWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       bnd_team_won_animation1;                           // 0x0448(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 bg_3;                                              // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           BGTEXT1_1;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           BGTEXT2;                                           // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           BGTEXT3_1;                                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           BGTEXT4_1;                                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           Lose_box;                                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           New_rank;                                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Overlay;                                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Placed_label;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Rank_label_1;                                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_6;                                     // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_7;                                     // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_8;                                     // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           Survived_box;                                      // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Win_box;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Win_text;                                          // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   OnPostMatchWin;                                    // 0x04E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OnPostMatchLosingTeam;                             // 0x04EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeamDead;                                          // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPUI_HUD_MatchEndWidget(int32 EntryPoint);
	void MatchEndDialogue();
	void OpenScreen();
	void CollapseLoseBox();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_MatchEndWidget_C">();
	}
	static class UBPUI_HUD_MatchEndWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_MatchEndWidget_C>();
	}
};
static_assert(alignof(UBPUI_HUD_MatchEndWidget_C) == 0x000008, "Wrong alignment on UBPUI_HUD_MatchEndWidget_C");
static_assert(sizeof(UBPUI_HUD_MatchEndWidget_C) == 0x000500, "Wrong size on UBPUI_HUD_MatchEndWidget_C");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, UberGraphFrame) == 0x000440, "Member 'UBPUI_HUD_MatchEndWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, bnd_team_won_animation1) == 0x000448, "Member 'UBPUI_HUD_MatchEndWidget_C::bnd_team_won_animation1' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, bg_3) == 0x000450, "Member 'UBPUI_HUD_MatchEndWidget_C::bg_3' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, BGTEXT1_1) == 0x000458, "Member 'UBPUI_HUD_MatchEndWidget_C::BGTEXT1_1' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, BGTEXT2) == 0x000460, "Member 'UBPUI_HUD_MatchEndWidget_C::BGTEXT2' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, BGTEXT3_1) == 0x000468, "Member 'UBPUI_HUD_MatchEndWidget_C::BGTEXT3_1' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, BGTEXT4_1) == 0x000470, "Member 'UBPUI_HUD_MatchEndWidget_C::BGTEXT4_1' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, Lose_box) == 0x000478, "Member 'UBPUI_HUD_MatchEndWidget_C::Lose_box' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, New_rank) == 0x000480, "Member 'UBPUI_HUD_MatchEndWidget_C::New_rank' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, Overlay) == 0x000488, "Member 'UBPUI_HUD_MatchEndWidget_C::Overlay' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, Placed_label) == 0x000490, "Member 'UBPUI_HUD_MatchEndWidget_C::Placed_label' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, Rank_label_1) == 0x000498, "Member 'UBPUI_HUD_MatchEndWidget_C::Rank_label_1' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, RetainerBox) == 0x0004A0, "Member 'UBPUI_HUD_MatchEndWidget_C::RetainerBox' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, RetainerBox_6) == 0x0004A8, "Member 'UBPUI_HUD_MatchEndWidget_C::RetainerBox_6' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, RetainerBox_7) == 0x0004B0, "Member 'UBPUI_HUD_MatchEndWidget_C::RetainerBox_7' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, RetainerBox_8) == 0x0004B8, "Member 'UBPUI_HUD_MatchEndWidget_C::RetainerBox_8' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, Survived_box) == 0x0004C0, "Member 'UBPUI_HUD_MatchEndWidget_C::Survived_box' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, WidgetSwitcher_0) == 0x0004C8, "Member 'UBPUI_HUD_MatchEndWidget_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, Win_box) == 0x0004D0, "Member 'UBPUI_HUD_MatchEndWidget_C::Win_box' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, Win_text) == 0x0004D8, "Member 'UBPUI_HUD_MatchEndWidget_C::Win_text' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, OnPostMatchWin) == 0x0004E0, "Member 'UBPUI_HUD_MatchEndWidget_C::OnPostMatchWin' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, OnPostMatchLosingTeam) == 0x0004EC, "Member 'UBPUI_HUD_MatchEndWidget_C::OnPostMatchLosingTeam' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_MatchEndWidget_C, TeamDead) == 0x0004F8, "Member 'UBPUI_HUD_MatchEndWidget_C::TeamDead' has a wrong offset!");

}
