#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_Perks_DemoMan_WeaponVFX

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Keaton_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function GCA_Perks_DemoMan_WeaponVFX.GCA_Perks_DemoMan_WeaponVFX_C.WhileActive
// 0x0280 (0x0280 - 0x0000)
struct GCA_Perks_DemoMan_WeaponVFX_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCAWeaponVFXSet*                        DemoManVFXSet;                                     // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UCAUIHUDInterface*                CallFunc_GetUIHUDInterface_ReturnValue;            // 0x0108(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0118(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0130(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x013C(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0148(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0168(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0194(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2[0x6];                                      // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICALoadoutInterface>   K2Node_DynamicCast_AsCALoadout_Interface;          // 0x01E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCALoadoutComponent*                    CallFunc_GetLoadoutComponent_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAEquipmentBase*                       CallFunc_GetCurrentlyHeldDevice_ReturnValue;       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Weapon_Instant_Base_C*              K2Node_DynamicCast_AsBP_Weapon_Instant_Base;       // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCANiagaraComponentFOV*                 CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue; // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0230(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAHUDPerkActivity                     K2Node_MakeStruct_CAHUDPerkActivity;               // 0x023C(0x0014)(NoDestructor)
	bool                                          CallFunc_IsBeingViewed_ReturnValue;                // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0254(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0268(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive) == 0x000008, "Wrong alignment on GCA_Perks_DemoMan_WeaponVFX_C_WhileActive");
static_assert(sizeof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive) == 0x000280, "Wrong size on GCA_Perks_DemoMan_WeaponVFX_C_WhileActive");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, MyTarget) == 0x000000, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, Parameters) == 0x000008, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, ReturnValue) == 0x0000F8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, DemoManVFXSet) == 0x000100, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::DemoManVFXSet' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_GetUIHUDInterface_ReturnValue) == 0x000108, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_GetUIHUDInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000110, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000114, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000118, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000130, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00013C, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000148, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000168, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_Location) == 0x000188, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_Normal) == 0x000194, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001C4, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x0001D1, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, K2Node_DynamicCast_AsCACharacter) == 0x0001D8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, K2Node_DynamicCast_AsCALoadout_Interface) == 0x0001E8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::K2Node_DynamicCast_AsCALoadout_Interface' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, K2Node_DynamicCast_bSuccess_1) == 0x0001F8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_GetLoadoutComponent_ReturnValue) == 0x000200, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_GetLoadoutComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_GetCurrentlyHeldDevice_ReturnValue) == 0x000208, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_GetCurrentlyHeldDevice_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_IsValid_ReturnValue_1) == 0x000210, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, K2Node_DynamicCast_AsBP_Weapon_Instant_Base) == 0x000218, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::K2Node_DynamicCast_AsBP_Weapon_Instant_Base' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, K2Node_DynamicCast_bSuccess_2) == 0x000220, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue) == 0x000228, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_SpawnCANiagaraFOVSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_MakeLiteralName_ReturnValue) == 0x000230, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, K2Node_MakeStruct_CAHUDPerkActivity) == 0x00023C, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::K2Node_MakeStruct_CAHUDPerkActivity' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_IsBeingViewed_ReturnValue) == 0x000250, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_IsBeingViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, Temp_delegate_Variable) == 0x000254, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_PlayEvent_playback_instance) == 0x000268, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_WhileActive, CallFunc_PlayEvent_play_success) == 0x000278, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_WhileActive::CallFunc_PlayEvent_play_success' has a wrong offset!");

// Function GCA_Perks_DemoMan_WeaponVFX.GCA_Perks_DemoMan_WeaponVFX_C.OnRemove
// 0x0268 (0x0268 - 0x0000)
struct GCA_Perks_DemoMan_WeaponVFX_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UCAUIHUDInterface*                CallFunc_GetUIHUDInterface_ReturnValue;            // 0x0100(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0110(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0128(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0134(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0140(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0160(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CA[0x6];                                      // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICALoadoutInterface>   K2Node_DynamicCast_AsCALoadout_Interface;          // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBeingViewed_ReturnValue;                // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F2[0x6];                                      // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCALoadoutComponent*                    CallFunc_GetLoadoutComponent_ReturnValue;          // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAEquipmentBase*                       CallFunc_GetCurrentlyHeldDevice_ReturnValue;       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Weapon_Instant_Base_C*              K2Node_DynamicCast_AsBP_Weapon_Instant_Base;       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAHUDPerkActivity                     K2Node_MakeStruct_CAHUDPerkActivity;               // 0x0220(0x0014)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_235[0x3];                                      // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0238(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0250(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove) == 0x000008, "Wrong alignment on GCA_Perks_DemoMan_WeaponVFX_C_OnRemove");
static_assert(sizeof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove) == 0x000268, "Wrong size on GCA_Perks_DemoMan_WeaponVFX_C_OnRemove");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, MyTarget) == 0x000000, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, Parameters) == 0x000008, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, ReturnValue) == 0x0000F8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_GetUIHUDInterface_ReturnValue) == 0x000100, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_GetUIHUDInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000108, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00010C, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000110, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000128, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000134, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000140, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000160, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_Location) == 0x000180, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_Normal) == 0x00018C, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000198, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001A8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001B8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001BC, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001C8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0001C9, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, K2Node_DynamicCast_AsCACharacter) == 0x0001D0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, K2Node_DynamicCast_bSuccess) == 0x0001D8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, K2Node_DynamicCast_AsCALoadout_Interface) == 0x0001E0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::K2Node_DynamicCast_AsCALoadout_Interface' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, K2Node_DynamicCast_bSuccess_1) == 0x0001F0, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_IsBeingViewed_ReturnValue) == 0x0001F1, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_IsBeingViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_GetLoadoutComponent_ReturnValue) == 0x0001F8, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_GetLoadoutComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_GetCurrentlyHeldDevice_ReturnValue) == 0x000200, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_GetCurrentlyHeldDevice_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, K2Node_DynamicCast_AsBP_Weapon_Instant_Base) == 0x000208, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::K2Node_DynamicCast_AsBP_Weapon_Instant_Base' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, K2Node_DynamicCast_bSuccess_2) == 0x000210, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_MakeLiteralName_ReturnValue) == 0x000214, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, K2Node_MakeStruct_CAHUDPerkActivity) == 0x000220, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::K2Node_MakeStruct_CAHUDPerkActivity' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_IsValid_ReturnValue_1) == 0x000234, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, Temp_delegate_Variable) == 0x000238, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_PlayEvent_playback_instance) == 0x000250, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(GCA_Perks_DemoMan_WeaponVFX_C_OnRemove, CallFunc_PlayEvent_play_success) == 0x000260, "Member 'GCA_Perks_DemoMan_WeaponVFX_C_OnRemove::CallFunc_PlayEvent_play_success' has a wrong offset!");

}

