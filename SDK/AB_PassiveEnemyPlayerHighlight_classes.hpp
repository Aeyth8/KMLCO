#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_PassiveEnemyPlayerHighlight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"
#include "CARendering_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_PassiveEnemyPlayerHighlight.AB_PassiveEnemyPlayerHighlight_C
// 0x0058 (0x04E8 - 0x0490)
class UAB_PassiveEnemyPlayerHighlight_C final : public UCAGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ScanDistance;                                      // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C[0x4];                                      // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           OwningCharacter;                                   // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACACharacter*>                   HilightedEnemyArray;                               // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ACAGlobalHighlightManager*              HighlightManager;                                  // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHighlightSightRules                   HighlightRules;                                    // 0x04C0(0x000C)(Edit, BlueprintVisible, NoDestructor)
	ECAOutlineColor                               Highlight_Colour;                                  // 0x04CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD[0x3];                                      // 0x04CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   HighlightName;                                     // 0x04D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC[0x4];                                      // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAPlayerController*                    PlayerController;                                  // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_PassiveEnemyPlayerHighlight(int32 EntryPoint);
	void AbilityRemoved(class AActor* User, class UCAGameplayAbility* Ability, const struct FGameplayAbilitySpecHandle& Handle);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void GetActorsWithinScanDistance(TArray<class AActor*>* ArrayOfActors);
	void GetEnemyPlayersToHighlight(TArray<class ACACharacter*>* EnemyCharacterArray);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_PassiveEnemyPlayerHighlight_C">();
	}
	static class UAB_PassiveEnemyPlayerHighlight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_PassiveEnemyPlayerHighlight_C>();
	}
};
static_assert(alignof(UAB_PassiveEnemyPlayerHighlight_C) == 0x000008, "Wrong alignment on UAB_PassiveEnemyPlayerHighlight_C");
static_assert(sizeof(UAB_PassiveEnemyPlayerHighlight_C) == 0x0004E8, "Wrong size on UAB_PassiveEnemyPlayerHighlight_C");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, UberGraphFrame) == 0x000490, "Member 'UAB_PassiveEnemyPlayerHighlight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, ScanDistance) == 0x000498, "Member 'UAB_PassiveEnemyPlayerHighlight_C::ScanDistance' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, OwningCharacter) == 0x0004A0, "Member 'UAB_PassiveEnemyPlayerHighlight_C::OwningCharacter' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, HilightedEnemyArray) == 0x0004A8, "Member 'UAB_PassiveEnemyPlayerHighlight_C::HilightedEnemyArray' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, HighlightManager) == 0x0004B8, "Member 'UAB_PassiveEnemyPlayerHighlight_C::HighlightManager' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, HighlightRules) == 0x0004C0, "Member 'UAB_PassiveEnemyPlayerHighlight_C::HighlightRules' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, Highlight_Colour) == 0x0004CC, "Member 'UAB_PassiveEnemyPlayerHighlight_C::Highlight_Colour' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, HighlightName) == 0x0004D0, "Member 'UAB_PassiveEnemyPlayerHighlight_C::HighlightName' has a wrong offset!");
static_assert(offsetof(UAB_PassiveEnemyPlayerHighlight_C, PlayerController) == 0x0004E0, "Member 'UAB_PassiveEnemyPlayerHighlight_C::PlayerController' has a wrong offset!");

}
