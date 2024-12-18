#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_GenericProgress

#include "Basic.hpp"

#include "CALocalisationRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HUD_GenericProgress.BPUI_HUD_GenericProgress_C
// 0x00B0 (0x0340 - 0x0290)
class UBPUI_HUD_GenericProgress_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       bounce;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ProgressFix;                                       // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_125;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Progress_v2;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Progress_txt;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_57;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         TimeTarget;                                        // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         TimeSpent;                                         // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCompleted;                                        // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoDestroyOnComplete;                             // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2DA[0x6];                                      // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAText                                ProgressLabel;                                     // 0x02E0(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FCAText                                FinishedLabel;                                     // 0x0310(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BPUI_HUD_GenericProgress(int32 EntryPoint);
	void OnProgressFinished();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HUD_GenericProgress_C">();
	}
	static class UBPUI_HUD_GenericProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HUD_GenericProgress_C>();
	}
};
static_assert(alignof(UBPUI_HUD_GenericProgress_C) == 0x000008, "Wrong alignment on UBPUI_HUD_GenericProgress_C");
static_assert(sizeof(UBPUI_HUD_GenericProgress_C) == 0x000340, "Wrong size on UBPUI_HUD_GenericProgress_C");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, UberGraphFrame) == 0x000290, "Member 'UBPUI_HUD_GenericProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, bounce) == 0x000298, "Member 'UBPUI_HUD_GenericProgress_C::bounce' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, ProgressFix) == 0x0002A0, "Member 'UBPUI_HUD_GenericProgress_C::ProgressFix' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, Image) == 0x0002A8, "Member 'UBPUI_HUD_GenericProgress_C::Image' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, Image_125) == 0x0002B0, "Member 'UBPUI_HUD_GenericProgress_C::Image_125' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, IMG_Progress_v2) == 0x0002B8, "Member 'UBPUI_HUD_GenericProgress_C::IMG_Progress_v2' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, Progress_txt) == 0x0002C0, "Member 'UBPUI_HUD_GenericProgress_C::Progress_txt' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, ProgressBar_57) == 0x0002C8, "Member 'UBPUI_HUD_GenericProgress_C::ProgressBar_57' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, TimeTarget) == 0x0002D0, "Member 'UBPUI_HUD_GenericProgress_C::TimeTarget' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, TimeSpent) == 0x0002D4, "Member 'UBPUI_HUD_GenericProgress_C::TimeSpent' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, bCompleted) == 0x0002D8, "Member 'UBPUI_HUD_GenericProgress_C::bCompleted' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, AutoDestroyOnComplete) == 0x0002D9, "Member 'UBPUI_HUD_GenericProgress_C::AutoDestroyOnComplete' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, ProgressLabel) == 0x0002E0, "Member 'UBPUI_HUD_GenericProgress_C::ProgressLabel' has a wrong offset!");
static_assert(offsetof(UBPUI_HUD_GenericProgress_C, FinishedLabel) == 0x000310, "Member 'UBPUI_HUD_GenericProgress_C::FinishedLabel' has a wrong offset!");

}

