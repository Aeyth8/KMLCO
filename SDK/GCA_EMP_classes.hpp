#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_EMP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CAAudio_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCA_EMP.GCA_EMP_C
// 0x0068 (0x0328 - 0x02C0)
class AGCA_EMP_C final : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Niagara_EMP_Status_Effect;                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara3PEffectReference;                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara1PEffectReference;                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OnCurseFrustrated;                                 // 0x02E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           As_CACharacter;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               TPAudioPlaybackInstance;                           // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCAAudioPlaybackInstance               FPAudioPlaybackInstance;                           // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACACharacter_MainPlayer*                LocalPlayer;                                       // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCA_EMP(int32 EntryPoint);
	void DelayedDialogueTP();
	void TPDialogueVoxWhenEMP_d();
	void DelayedDialogueFP();
	void FPDialogueVoxWhenEMP_d();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCA_EMP_C">();
	}
	static class AGCA_EMP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCA_EMP_C>();
	}
};
static_assert(alignof(AGCA_EMP_C) == 0x000008, "Wrong alignment on AGCA_EMP_C");
static_assert(sizeof(AGCA_EMP_C) == 0x000328, "Wrong size on AGCA_EMP_C");
static_assert(offsetof(AGCA_EMP_C, UberGraphFrame) == 0x0002C0, "Member 'AGCA_EMP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, DefaultSceneRoot) == 0x0002C8, "Member 'AGCA_EMP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, Niagara_EMP_Status_Effect) == 0x0002D0, "Member 'AGCA_EMP_C::Niagara_EMP_Status_Effect' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, Niagara3PEffectReference) == 0x0002D8, "Member 'AGCA_EMP_C::Niagara3PEffectReference' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, Niagara1PEffectReference) == 0x0002E0, "Member 'AGCA_EMP_C::Niagara1PEffectReference' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, OnCurseFrustrated) == 0x0002E8, "Member 'AGCA_EMP_C::OnCurseFrustrated' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, As_CACharacter) == 0x0002F8, "Member 'AGCA_EMP_C::As_CACharacter' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, TPAudioPlaybackInstance) == 0x000300, "Member 'AGCA_EMP_C::TPAudioPlaybackInstance' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, FPAudioPlaybackInstance) == 0x000310, "Member 'AGCA_EMP_C::FPAudioPlaybackInstance' has a wrong offset!");
static_assert(offsetof(AGCA_EMP_C, LocalPlayer) == 0x000320, "Member 'AGCA_EMP_C::LocalPlayer' has a wrong offset!");

}
