#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TeamReveal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TeamReveal.BP_TeamReveal_C
// 0x00D8 (0x03A8 - 0x02D0)
class UBP_TeamReveal_C final : public UCAGameplayStateComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         TeamLoot;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HighestPlayerLoot;                                 // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCATeamID                              PlayerTeamID;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAMapEntityPayload                    Payload;                                           // 0x02E8(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          MapIconActive;                                     // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           MapUpdateTimerHandle;                              // 0x0360(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         MinOffset;                                         // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxOffset;                                         // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetX;                                           // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetY;                                           // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeamhasHighValue;                                  // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_379[0x3];                                      // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentPlayerLoot;                                 // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAPlayerState*                         HighestPlayerState;                                // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MapEntityID;                                       // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCACollisionComponent*                  HighValueMarkerCollision;                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCATeamID>                      TeamsToNotify;                                     // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_TeamReveal(int32 EntryPoint);
	void CE_EndOverlap(class USceneComponent* OverlappedComponent, class AActor* OtherActor, class USceneComponent* OtherComp, int32 OtherBodyIndex);
	void CE_BeginOverlap(class USceneComponent* OverlappedComponent, class AActor* OtherActor, class USceneComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void MatchStateChanged(EYMatchState NewMatchState);
	void LootUpdated(const struct FTeamData& Team_data);
	void RevealPlayerOnMap(bool RevealedPlayer);
	void ResetMapIcon(bool NeedRegistration);
	void UpdateMapIcon();
	void GetPlayerLocationOffset(class AActor* ActortoLocate, float OffsetX_0, float OffsetY_0, float* ValueX, float* ValueY, float* ValueZ);
	bool IsRevealPinged(class UCAPlayerPingComponent* PingComponent, int32 PlayerID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TeamReveal_C">();
	}
	static class UBP_TeamReveal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TeamReveal_C>();
	}
};
static_assert(alignof(UBP_TeamReveal_C) == 0x000008, "Wrong alignment on UBP_TeamReveal_C");
static_assert(sizeof(UBP_TeamReveal_C) == 0x0003A8, "Wrong size on UBP_TeamReveal_C");
static_assert(offsetof(UBP_TeamReveal_C, UberGraphFrame) == 0x0002D0, "Member 'UBP_TeamReveal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, TeamLoot) == 0x0002D8, "Member 'UBP_TeamReveal_C::TeamLoot' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, HighestPlayerLoot) == 0x0002DC, "Member 'UBP_TeamReveal_C::HighestPlayerLoot' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, PlayerTeamID) == 0x0002E0, "Member 'UBP_TeamReveal_C::PlayerTeamID' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, Payload) == 0x0002E8, "Member 'UBP_TeamReveal_C::Payload' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, MapIconActive) == 0x000358, "Member 'UBP_TeamReveal_C::MapIconActive' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, MapUpdateTimerHandle) == 0x000360, "Member 'UBP_TeamReveal_C::MapUpdateTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, MinOffset) == 0x000368, "Member 'UBP_TeamReveal_C::MinOffset' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, MaxOffset) == 0x00036C, "Member 'UBP_TeamReveal_C::MaxOffset' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, OffsetX) == 0x000370, "Member 'UBP_TeamReveal_C::OffsetX' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, OffsetY) == 0x000374, "Member 'UBP_TeamReveal_C::OffsetY' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, TeamhasHighValue) == 0x000378, "Member 'UBP_TeamReveal_C::TeamhasHighValue' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, CurrentPlayerLoot) == 0x00037C, "Member 'UBP_TeamReveal_C::CurrentPlayerLoot' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, HighestPlayerState) == 0x000380, "Member 'UBP_TeamReveal_C::HighestPlayerState' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, MapEntityID) == 0x000388, "Member 'UBP_TeamReveal_C::MapEntityID' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, HighValueMarkerCollision) == 0x000390, "Member 'UBP_TeamReveal_C::HighValueMarkerCollision' has a wrong offset!");
static_assert(offsetof(UBP_TeamReveal_C, TeamsToNotify) == 0x000398, "Member 'UBP_TeamReveal_C::TeamsToNotify' has a wrong offset!");

}
