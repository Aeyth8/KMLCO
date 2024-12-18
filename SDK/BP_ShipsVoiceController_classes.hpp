#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShipsVoiceController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Keaton_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ShipsVoiceController.BP_ShipsVoiceController_C
// 0x0118 (0x0370 - 0x0258)
class ABP_ShipsVoiceController_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstThreshold;                                  // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShipsVoiceCooldown;                                // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AllyExtractionStarted;                             // 0x026A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnemyExtractionStarted;                            // 0x026B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ExtractionPrevProgress;                            // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstExtraction;                                 // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RivalHasThreshold;                                 // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TeamExtractionContested;                           // 0x0272(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RivalExtractionContested;                          // 0x0273(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         CooldownTime;                                      // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExtractionProgressRealTime;                        // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DriverRivalExtractionStart;                        // 0x027C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DriverRivalExtractionImminent;                     // 0x0288(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RivalExtractionOngoing;                            // 0x0294(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RivalInitialExtractionStarted;                     // 0x02A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RivalExtractionStopped;                            // 0x02AC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TeamExtractionOngoing;                             // 0x02B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TeamInitialExtractionStarted;                      // 0x02C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RivalThresholdLost;                                // 0x02D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TeamThresholdLost;                                 // 0x02DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RivalThresholdMet;                                 // 0x02E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TeamThresholdMet;                                  // 0x02F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RivalInitialThresholdMet;                          // 0x0300(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TeamInitialThresholdMet;                           // 0x030C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TeamExtractionStopped;                             // 0x0318(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeamHasThreshold;                                  // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Extracted;                                         // 0x0325(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_326[0x2];                                      // 0x0326(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FuTeamThresholdMet;                                // 0x0328(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FuRivalThresholdMet;                               // 0x0334(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FuTeamThresholdLost;                               // 0x0340(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FuRivalThresholdLost;                              // 0x034C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ExtractionImminent;                                // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DriverTeamExtractionImminent;                      // 0x035C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetDoOnce;                                       // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnTeamExtractionStoppedAlreadyTriggered;           // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnRivalExtractionStoppedAlreadyTriggered;          // 0x036A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ShipsVoiceController(int32 EntryPoint);
	void PrintDialogueDebugBespoke(class FName TriggerName);
	void PrintDialogueDebugCooldown(class FName Trigger_name);
	void PreventInstantTrigger_ExtractionStopped_3();
	void PreventInstantTrigger_ExtractionStopped_2();
	void PreventInstantTrigger_ExtractionStopped_1();
	void FuThresholdMet();
	void FuThresholdLost();
	void CooldownReset();
	void ShipsvoiceCooldownUpdate();
	void ShipsVoice_UpdateExtractionProgress(float ExtractionProgress);
	void EnemyExtractionContested();
	void AllyExtractionContested();
	void FuDriverRivalExtraction();
	void FuDriverRivalExtractionStart();
	void OnGlobalCampLockdown(const class FText& VaultName);
	void OnAnyThresholdLost(bool IsMyTeam);
	void OnAnyThresholdReached(bool IsMyTeam);
	void OnLocalTeamExtracted();
	void OnEnemyTeamExtracted();
	void Audio_WaitBeforeCheckingExtractionProgress();
	void OnEnemyExtractionProgress(float ExtractionProgress);
	void OnEnemyExtractionAvailable(float ExtractionProgress);
	void OnTeamExtractionProgress(float ExtractionProgress);
	void ShipsVoiceController_OnThresholdStateChanged(ECAThresholdState ThresholdState, float ExtractionProgress);
	void OnTeamExtractionAvailable(float ExtractionProgress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ShipsVoiceController_C">();
	}
	static class ABP_ShipsVoiceController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ShipsVoiceController_C>();
	}
};
static_assert(alignof(ABP_ShipsVoiceController_C) == 0x000008, "Wrong alignment on ABP_ShipsVoiceController_C");
static_assert(sizeof(ABP_ShipsVoiceController_C) == 0x000370, "Wrong size on ABP_ShipsVoiceController_C");
static_assert(offsetof(ABP_ShipsVoiceController_C, UberGraphFrame) == 0x000258, "Member 'ABP_ShipsVoiceController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, DefaultSceneRoot) == 0x000260, "Member 'ABP_ShipsVoiceController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, IsFirstThreshold) == 0x000268, "Member 'ABP_ShipsVoiceController_C::IsFirstThreshold' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, ShipsVoiceCooldown) == 0x000269, "Member 'ABP_ShipsVoiceController_C::ShipsVoiceCooldown' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, AllyExtractionStarted) == 0x00026A, "Member 'ABP_ShipsVoiceController_C::AllyExtractionStarted' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, EnemyExtractionStarted) == 0x00026B, "Member 'ABP_ShipsVoiceController_C::EnemyExtractionStarted' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, ExtractionPrevProgress) == 0x00026C, "Member 'ABP_ShipsVoiceController_C::ExtractionPrevProgress' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, IsFirstExtraction) == 0x000270, "Member 'ABP_ShipsVoiceController_C::IsFirstExtraction' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalHasThreshold) == 0x000271, "Member 'ABP_ShipsVoiceController_C::RivalHasThreshold' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamExtractionContested) == 0x000272, "Member 'ABP_ShipsVoiceController_C::TeamExtractionContested' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalExtractionContested) == 0x000273, "Member 'ABP_ShipsVoiceController_C::RivalExtractionContested' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, CooldownTime) == 0x000274, "Member 'ABP_ShipsVoiceController_C::CooldownTime' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, ExtractionProgressRealTime) == 0x000278, "Member 'ABP_ShipsVoiceController_C::ExtractionProgressRealTime' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, DriverRivalExtractionStart) == 0x00027C, "Member 'ABP_ShipsVoiceController_C::DriverRivalExtractionStart' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, DriverRivalExtractionImminent) == 0x000288, "Member 'ABP_ShipsVoiceController_C::DriverRivalExtractionImminent' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalExtractionOngoing) == 0x000294, "Member 'ABP_ShipsVoiceController_C::RivalExtractionOngoing' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalInitialExtractionStarted) == 0x0002A0, "Member 'ABP_ShipsVoiceController_C::RivalInitialExtractionStarted' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalExtractionStopped) == 0x0002AC, "Member 'ABP_ShipsVoiceController_C::RivalExtractionStopped' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamExtractionOngoing) == 0x0002B8, "Member 'ABP_ShipsVoiceController_C::TeamExtractionOngoing' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamInitialExtractionStarted) == 0x0002C4, "Member 'ABP_ShipsVoiceController_C::TeamInitialExtractionStarted' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalThresholdLost) == 0x0002D0, "Member 'ABP_ShipsVoiceController_C::RivalThresholdLost' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamThresholdLost) == 0x0002DC, "Member 'ABP_ShipsVoiceController_C::TeamThresholdLost' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalThresholdMet) == 0x0002E8, "Member 'ABP_ShipsVoiceController_C::RivalThresholdMet' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamThresholdMet) == 0x0002F4, "Member 'ABP_ShipsVoiceController_C::TeamThresholdMet' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, RivalInitialThresholdMet) == 0x000300, "Member 'ABP_ShipsVoiceController_C::RivalInitialThresholdMet' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamInitialThresholdMet) == 0x00030C, "Member 'ABP_ShipsVoiceController_C::TeamInitialThresholdMet' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamExtractionStopped) == 0x000318, "Member 'ABP_ShipsVoiceController_C::TeamExtractionStopped' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, TeamHasThreshold) == 0x000324, "Member 'ABP_ShipsVoiceController_C::TeamHasThreshold' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, Extracted) == 0x000325, "Member 'ABP_ShipsVoiceController_C::Extracted' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, FuTeamThresholdMet) == 0x000328, "Member 'ABP_ShipsVoiceController_C::FuTeamThresholdMet' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, FuRivalThresholdMet) == 0x000334, "Member 'ABP_ShipsVoiceController_C::FuRivalThresholdMet' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, FuTeamThresholdLost) == 0x000340, "Member 'ABP_ShipsVoiceController_C::FuTeamThresholdLost' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, FuRivalThresholdLost) == 0x00034C, "Member 'ABP_ShipsVoiceController_C::FuRivalThresholdLost' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, ExtractionImminent) == 0x000358, "Member 'ABP_ShipsVoiceController_C::ExtractionImminent' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, DriverTeamExtractionImminent) == 0x00035C, "Member 'ABP_ShipsVoiceController_C::DriverTeamExtractionImminent' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, ResetDoOnce) == 0x000368, "Member 'ABP_ShipsVoiceController_C::ResetDoOnce' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, OnTeamExtractionStoppedAlreadyTriggered) == 0x000369, "Member 'ABP_ShipsVoiceController_C::OnTeamExtractionStoppedAlreadyTriggered' has a wrong offset!");
static_assert(offsetof(ABP_ShipsVoiceController_C, OnRivalExtractionStoppedAlreadyTriggered) == 0x00036A, "Member 'ABP_ShipsVoiceController_C::OnRivalExtractionStoppedAlreadyTriggered' has a wrong offset!");

}

