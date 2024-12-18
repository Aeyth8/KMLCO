#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThresholdMapRevealComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BPE_ThresholdMapRevealType_structs.hpp"
#include "Keaton_structs.hpp"
#include "BPS_MapRevealData_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C
// 0x0080 (0x0170 - 0x00F0)
class UBP_ThresholdMapRevealComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         IconMinOffset;                                     // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconMaxOffset;                                     // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_ThresholdMapRevealType                   RevealType;                                        // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UpdateMapIconsTimeAccumulated;                     // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpdateMapIconsFrequency;                           // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FCATeamID, struct FBPS_MapRevealData> RevealedPlayerMap;                                 // 0x0110(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TArray<struct FCATeamID>                      PrevThresholdTeamsArray;                           // 0x0160(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ThresholdMapRevealComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void LootUpdated(const struct FTeamData& Team_data);
	void GetPlayerLocationOffset(class AActor* ActortoLocate, float OffsetX, float OffsetY, float* ValueX, float* ValueY, float* ValueZ);
	void Unregister_Map_Icon(class ACAPlayerState* PlayerStateToUnregister);
	void RegisterMapIcon(TArray<class ACAPlayerState*>& PlayerStates, TArray<struct FCATeamID>& TeamsToNotify);
	void UpdateMapIcons();
	void GetAllTeamsExceptPlayerStateTeam(class ACAPlayerState* PlayerState, TArray<struct FCATeamID>* TeamsIdArray);
	void OnLootUpdated(const struct FTeamData& TeamData);
	class ACAPlayerState* GetMVPSafe(const struct FCATeamID& Team_id);
	void CheckForThresholdRevealPlayerUpdate();
	void GetTeamsToNotify(class ACAPlayerState* PlayerState, TArray<struct FCATeamID>* TeamsIdArray);
	void Get_Threshold_Teams(TArray<struct FCATeamID>* ThresholdTeamArray, TArray<struct FCATeamID>* NonThresholdTeamArray);
	void GetPlayerStatesFromTeamMembers(TArray<struct FTeamMember>& TeamMemberArray, TArray<class ACAPlayerState*>* PlayerStatesArray);
	void AreArraysTheSame(TArray<struct FCATeamID>& ArrayA, const TArray<struct FCATeamID>& ArrayB, bool* AreTheSame);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThresholdMapRevealComponent_C">();
	}
	static class UBP_ThresholdMapRevealComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ThresholdMapRevealComponent_C>();
	}
};
static_assert(alignof(UBP_ThresholdMapRevealComponent_C) == 0x000008, "Wrong alignment on UBP_ThresholdMapRevealComponent_C");
static_assert(sizeof(UBP_ThresholdMapRevealComponent_C) == 0x000170, "Wrong size on UBP_ThresholdMapRevealComponent_C");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, UberGraphFrame) == 0x0000F0, "Member 'UBP_ThresholdMapRevealComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, IconMinOffset) == 0x0000F8, "Member 'UBP_ThresholdMapRevealComponent_C::IconMinOffset' has a wrong offset!");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, IconMaxOffset) == 0x0000FC, "Member 'UBP_ThresholdMapRevealComponent_C::IconMaxOffset' has a wrong offset!");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, RevealType) == 0x000100, "Member 'UBP_ThresholdMapRevealComponent_C::RevealType' has a wrong offset!");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, UpdateMapIconsTimeAccumulated) == 0x000104, "Member 'UBP_ThresholdMapRevealComponent_C::UpdateMapIconsTimeAccumulated' has a wrong offset!");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, UpdateMapIconsFrequency) == 0x000108, "Member 'UBP_ThresholdMapRevealComponent_C::UpdateMapIconsFrequency' has a wrong offset!");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, RevealedPlayerMap) == 0x000110, "Member 'UBP_ThresholdMapRevealComponent_C::RevealedPlayerMap' has a wrong offset!");
static_assert(offsetof(UBP_ThresholdMapRevealComponent_C, PrevThresholdTeamsArray) == 0x000160, "Member 'UBP_ThresholdMapRevealComponent_C::PrevThresholdTeamsArray' has a wrong offset!");

}

