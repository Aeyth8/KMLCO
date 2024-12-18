#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CuttingBreach

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_BreachBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CuttingBreach.BP_CuttingBreach_C
// 0x01C0 (0x05D0 - 0x0410)
class ABP_CuttingBreach_C final : public ABP_BreachBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CuttingBreach_C;                 // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCAAudioMusicPlaylistComponent*         CAAudioMusicPlaylist_HackingMusic;                 // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ARIndicator;                                       // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCACollisionComponent*                  CACollision_CatLaserTargeting;                     // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCAFoamAlignmentComponent*              CAFoamAlignment;                                   // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCAAudioComponent*                      CAAudioMusicInstance;                              // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_VaultCutting;                                   // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_BreachingTool_InProgress;                       // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCAHitPointComponent*                   CAHitPoint;                                        // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCACollisionComponent*                  TargetObjectCACollision;                           // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_DroneExplosion;                                  // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HackingDevice;                                     // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCAAudioComponent*                      CAAudioDrone;                                      // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_CuttingSparks;                                  // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Drone_Cutter;                                   // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Drone;                                             // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CutPosition;                                       // 0x0490(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitPosition;                                      // 0x049C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            Capture;                                           // 0x04A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 User;                                              // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InstigatingTeamID;                                 // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Progress;                                          // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BreachingUpgradeMagnitude_1;                       // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BreachingUpgradeMagnitude_2;                       // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BreachingUpgradeMagnitude_3;                       // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BreachingUpgradeMagnitude_default;                 // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 UserAbilitySystemComponentRef;                     // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Parent;                                            // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Audio_Vault_Progress;                              // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCATeamID                              TeamID;                                            // 0x04E4(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   OnBreachingToolDestroyed;                          // 0x04E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OnVaultOpened;                                     // 0x04F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UCAInventoryItem>        InventoryItem_BreachingGadget_1;                   // 0x0500(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCAInventoryItem>        InventoryItem_BreachingGadget_2;                   // 0x0530(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCAInventoryItem>        InventoryItem_BreachingGadget_3;                   // 0x0560(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   OnVaultAttackBreachingDevice;                      // 0x0590(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Friendly_team_Dialogue_Max_Distance;               // 0x059C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>            GE_Capture_Class;                                  // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GE_Capture;                                        // 0x05A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          BreachingToolDestroyed;                            // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1[0x3];                                      // 0x05B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   OnTeamBreachingToolDestroyed;                      // 0x05B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentSecurtityArea;                              // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hacking_Device_Audio_State;                        // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CuttingBreach(int32 EntryPoint);
	void CampInRecovery();
	void DriverTrigger();
	void DestroyFoam();
	void BndEvt__BP_CuttingBreach_m_ability_system_component_K2Node_ComponentBoundEvent_1_OnHitReceived__DelegateSignature(const struct FCADamageEffectInfo& Damage_effect_info);
	void SetBreachEnabled(class AActor* Owner_0, bool bEnabled);
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_19_EventDisabled__DelegateSignature();
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_18_EventEnabled__DelegateSignature();
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_17_EventActivating__DelegateSignature();
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_16_EventComplete__DelegateSignature();
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_15_EventBreaching__DelegateSignature();
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_14_EventDestroyed__DelegateSignature();
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_13_EventPlacing__DelegateSignature();
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_12_EventPlaced__DelegateSignature(class AActor* User_0);
	void BndEvt__BreachStateMachine_K2Node_ComponentBoundEvent_11_UpdateActivation__DelegateSignature(float Progress_0);
	void UpdateBreachProgress(float Percentage, const struct FTransform& Location);
	void UserConstructionScript();
	void SetDroneVisible(bool Visible);
	void Set_Interactable(bool CanInteract);
	void TriggerVFX();
	void ApplyCaptureEffect(class AActor* User_0);
	void GetBreachingUpgradeMagnatude(class AActor* User_0, float* Magnatude);
	void HasUnlocksQuicklyTag(class AActor* TargetActor, bool* Result);
	void GetCaptureEffectPeriod(float* Period);
	void GetActivatingStateDuration(float* Duration);
	void GetSecurityAreas(TArray<class AActor*>* Areas);
	void ApplySecurityTrigger(const struct FGameplayTag& Mission_trigger);
	void HackingDevice_AudioStartStop(int32 HackingDevice_AudioState);

	struct FCATeamID GetCATeamID() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CuttingBreach_C">();
	}
	static class ABP_CuttingBreach_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CuttingBreach_C>();
	}
};
static_assert(alignof(ABP_CuttingBreach_C) == 0x000008, "Wrong alignment on ABP_CuttingBreach_C");
static_assert(sizeof(ABP_CuttingBreach_C) == 0x0005D0, "Wrong size on ABP_CuttingBreach_C");
static_assert(offsetof(ABP_CuttingBreach_C, UberGraphFrame_BP_CuttingBreach_C) == 0x000410, "Member 'ABP_CuttingBreach_C::UberGraphFrame_BP_CuttingBreach_C' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CAAudioMusicPlaylist_HackingMusic) == 0x000418, "Member 'ABP_CuttingBreach_C::CAAudioMusicPlaylist_HackingMusic' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, ARIndicator) == 0x000420, "Member 'ABP_CuttingBreach_C::ARIndicator' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CACollision_CatLaserTargeting) == 0x000428, "Member 'ABP_CuttingBreach_C::CACollision_CatLaserTargeting' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CAFoamAlignment) == 0x000430, "Member 'ABP_CuttingBreach_C::CAFoamAlignment' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CAAudioMusicInstance) == 0x000438, "Member 'ABP_CuttingBreach_C::CAAudioMusicInstance' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, NS_VaultCutting) == 0x000440, "Member 'ABP_CuttingBreach_C::NS_VaultCutting' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, NS_BreachingTool_InProgress) == 0x000448, "Member 'ABP_CuttingBreach_C::NS_BreachingTool_InProgress' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CAHitPoint) == 0x000450, "Member 'ABP_CuttingBreach_C::CAHitPoint' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, TargetObjectCACollision) == 0x000458, "Member 'ABP_CuttingBreach_C::TargetObjectCACollision' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, P_DroneExplosion) == 0x000460, "Member 'ABP_CuttingBreach_C::P_DroneExplosion' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, HackingDevice) == 0x000468, "Member 'ABP_CuttingBreach_C::HackingDevice' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CAAudioDrone) == 0x000470, "Member 'ABP_CuttingBreach_C::CAAudioDrone' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, NS_CuttingSparks) == 0x000478, "Member 'ABP_CuttingBreach_C::NS_CuttingSparks' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, SM_Drone_Cutter) == 0x000480, "Member 'ABP_CuttingBreach_C::SM_Drone_Cutter' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, Drone) == 0x000488, "Member 'ABP_CuttingBreach_C::Drone' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CutPosition) == 0x000490, "Member 'ABP_CuttingBreach_C::CutPosition' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, InitPosition) == 0x00049C, "Member 'ABP_CuttingBreach_C::InitPosition' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, Capture) == 0x0004A8, "Member 'ABP_CuttingBreach_C::Capture' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, User) == 0x0004B0, "Member 'ABP_CuttingBreach_C::User' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, InstigatingTeamID) == 0x0004B8, "Member 'ABP_CuttingBreach_C::InstigatingTeamID' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, Progress) == 0x0004BC, "Member 'ABP_CuttingBreach_C::Progress' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, BreachingUpgradeMagnitude_1) == 0x0004C0, "Member 'ABP_CuttingBreach_C::BreachingUpgradeMagnitude_1' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, BreachingUpgradeMagnitude_2) == 0x0004C4, "Member 'ABP_CuttingBreach_C::BreachingUpgradeMagnitude_2' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, BreachingUpgradeMagnitude_3) == 0x0004C8, "Member 'ABP_CuttingBreach_C::BreachingUpgradeMagnitude_3' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, BreachingUpgradeMagnitude_default) == 0x0004CC, "Member 'ABP_CuttingBreach_C::BreachingUpgradeMagnitude_default' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, UserAbilitySystemComponentRef) == 0x0004D0, "Member 'ABP_CuttingBreach_C::UserAbilitySystemComponentRef' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, Parent) == 0x0004D8, "Member 'ABP_CuttingBreach_C::Parent' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, Audio_Vault_Progress) == 0x0004E0, "Member 'ABP_CuttingBreach_C::Audio_Vault_Progress' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, TeamID) == 0x0004E4, "Member 'ABP_CuttingBreach_C::TeamID' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, OnBreachingToolDestroyed) == 0x0004E8, "Member 'ABP_CuttingBreach_C::OnBreachingToolDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, OnVaultOpened) == 0x0004F4, "Member 'ABP_CuttingBreach_C::OnVaultOpened' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, InventoryItem_BreachingGadget_1) == 0x000500, "Member 'ABP_CuttingBreach_C::InventoryItem_BreachingGadget_1' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, InventoryItem_BreachingGadget_2) == 0x000530, "Member 'ABP_CuttingBreach_C::InventoryItem_BreachingGadget_2' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, InventoryItem_BreachingGadget_3) == 0x000560, "Member 'ABP_CuttingBreach_C::InventoryItem_BreachingGadget_3' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, OnVaultAttackBreachingDevice) == 0x000590, "Member 'ABP_CuttingBreach_C::OnVaultAttackBreachingDevice' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, Friendly_team_Dialogue_Max_Distance) == 0x00059C, "Member 'ABP_CuttingBreach_C::Friendly_team_Dialogue_Max_Distance' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, GE_Capture_Class) == 0x0005A0, "Member 'ABP_CuttingBreach_C::GE_Capture_Class' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, GE_Capture) == 0x0005A8, "Member 'ABP_CuttingBreach_C::GE_Capture' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, BreachingToolDestroyed) == 0x0005B0, "Member 'ABP_CuttingBreach_C::BreachingToolDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, OnTeamBreachingToolDestroyed) == 0x0005B4, "Member 'ABP_CuttingBreach_C::OnTeamBreachingToolDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, CurrentSecurtityArea) == 0x0005C0, "Member 'ABP_CuttingBreach_C::CurrentSecurtityArea' has a wrong offset!");
static_assert(offsetof(ABP_CuttingBreach_C, Hacking_Device_Audio_State) == 0x0005C8, "Member 'ABP_CuttingBreach_C::Hacking_Device_Audio_State' has a wrong offset!");

}

