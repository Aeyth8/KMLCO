#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_Character_DroneLight

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Keaton_structs.hpp"
#include "CAAudio_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NPC_Character_DroneLight.BP_NPC_Character_DroneLight_C.ExecuteUbergraph_BP_NPC_Character_DroneLight
// 0x0448 (0x0448 - 0x0000)
struct BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECAAwarenessState Awareness_state)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void(class ACACharacter* Character, struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, struct FNetworkedHit& Networked_hit, class AActor* Killer)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x002C(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x0040(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0058(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x0070(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0084(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0098(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	ECAAwarenessState                             K2Node_CustomEvent_awareness_state;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           K2Node_CustomEvent_character;                      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                    K2Node_CustomEvent_death_gameplay_effect_spec;     // 0x00C8(0x0298)(ConstParm)
	float                                         K2Node_CustomEvent_damage_magnitude;               // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNetworkedHit                          K2Node_CustomEvent_networked_hit;                  // 0x0368(0x0068)(ConstParm, NoDestructor)
	const class AActor*                           K2Node_CustomEvent_killer;                         // 0x03D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_is_in_pool;                           // 0x03D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DA[0x2];                                      // 0x03DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_2;                          // 0x03DC(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_2;            // 0x03F0(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_2;                 // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0x3];                                      // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Amount;                               // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZeroG_ReturnValue;                    // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_409[0x3];                                      // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D[0x3];                                      // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_ComponentBoundEvent_tag;                    // 0x0424(0x000C)(NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_count;                  // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0438(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x3];                                      // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSpeed_ReturnValue;                     // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight) == 0x000008, "Wrong alignment on BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight");
static_assert(sizeof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight) == 0x000448, "Wrong size on BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, EntryPoint) == 0x000000, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, Temp_delegate_Variable) == 0x00002C, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, Temp_delegate_Variable_1) == 0x000040, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_PlayEvent_playback_instance) == 0x000058, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_PlayEvent_play_success) == 0x000068, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_PlayEvent_playback_instance_1) == 0x000070, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_PlayEvent_play_success_1) == 0x000080, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_PlayEvent_play_success_1' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CreateDelegate_OutputDelegate_2) == 0x000084, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CreateDelegate_OutputDelegate_3) == 0x000098, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B0, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CustomEvent_awareness_state) == 0x0000B8, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CustomEvent_awareness_state' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CustomEvent_character) == 0x0000C0, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CustomEvent_character' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CustomEvent_death_gameplay_effect_spec) == 0x0000C8, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CustomEvent_death_gameplay_effect_spec' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CustomEvent_damage_magnitude) == 0x000360, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CustomEvent_damage_magnitude' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CustomEvent_networked_hit) == 0x000368, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CustomEvent_networked_hit' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_CustomEvent_killer) == 0x0003D0, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_CustomEvent_killer' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_SwitchEnum_CmpSuccess) == 0x0003D8, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_Event_is_in_pool) == 0x0003D9, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_Event_is_in_pool' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, Temp_delegate_Variable_2) == 0x0003DC, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_PlayEvent_playback_instance_2) == 0x0003F0, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_PlayEvent_playback_instance_2' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_PlayEvent_play_success_2) == 0x000400, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_PlayEvent_play_success_2' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_Event_Amount) == 0x000404, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_Event_Amount' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_IsInZeroG_ReturnValue) == 0x000408, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_IsInZeroG_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_Event_DeltaSeconds) == 0x00040C, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_Dot_VectorVector_ReturnValue) == 0x000410, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_VSize_ReturnValue) == 0x000414, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000418, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_HasAuthority_ReturnValue) == 0x00041C, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_RandomFloatInRange_ReturnValue) == 0x000420, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_ComponentBoundEvent_tag) == 0x000424, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_ComponentBoundEvent_tag' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, K2Node_ComponentBoundEvent_count) == 0x000430, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::K2Node_ComponentBoundEvent_count' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000438, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_Greater_IntInt_ReturnValue) == 0x000440, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight, CallFunc_GetSpeed_ReturnValue) == 0x000444, "Member 'BP_NPC_Character_DroneLight_C_ExecuteUbergraph_BP_NPC_Character_DroneLight::CallFunc_GetSpeed_ReturnValue' has a wrong offset!");

// Function BP_NPC_Character_DroneLight.BP_NPC_Character_DroneLight_C.BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature) == 0x000004, "Wrong alignment on BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature");
static_assert(sizeof(BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature) == 0x000010, "Wrong size on BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature, Tag) == 0x000000, "Member 'BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature::Tag' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature, Count) == 0x00000C, "Member 'BP_NPC_Character_DroneLight_C_BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature::Count' has a wrong offset!");

// Function BP_NPC_Character_DroneLight.BP_NPC_Character_DroneLight_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_NPC_Character_DroneLight_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Character_DroneLight_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_NPC_Character_DroneLight_C_ReceiveTick");
static_assert(sizeof(BP_NPC_Character_DroneLight_C_ReceiveTick) == 0x000004, "Wrong size on BP_NPC_Character_DroneLight_C_ReceiveTick");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_NPC_Character_DroneLight_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_NPC_Character_DroneLight.BP_NPC_Character_DroneLight_C.SetScanIntensity
// 0x0004 (0x0004 - 0x0000)
struct BP_NPC_Character_DroneLight_C_SetScanIntensity final
{
public:
	float                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Character_DroneLight_C_SetScanIntensity) == 0x000004, "Wrong alignment on BP_NPC_Character_DroneLight_C_SetScanIntensity");
static_assert(sizeof(BP_NPC_Character_DroneLight_C_SetScanIntensity) == 0x000004, "Wrong size on BP_NPC_Character_DroneLight_C_SetScanIntensity");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_SetScanIntensity, Amount) == 0x000000, "Member 'BP_NPC_Character_DroneLight_C_SetScanIntensity::Amount' has a wrong offset!");

// Function BP_NPC_Character_DroneLight.BP_NPC_Character_DroneLight_C.OnPoolStatusChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_NPC_Character_DroneLight_C_OnPoolStatusChanged final
{
public:
	bool                                          Is_in_pool;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NPC_Character_DroneLight_C_OnPoolStatusChanged) == 0x000001, "Wrong alignment on BP_NPC_Character_DroneLight_C_OnPoolStatusChanged");
static_assert(sizeof(BP_NPC_Character_DroneLight_C_OnPoolStatusChanged) == 0x000001, "Wrong size on BP_NPC_Character_DroneLight_C_OnPoolStatusChanged");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_OnPoolStatusChanged, Is_in_pool) == 0x000000, "Member 'BP_NPC_Character_DroneLight_C_OnPoolStatusChanged::Is_in_pool' has a wrong offset!");

// Function BP_NPC_Character_DroneLight.BP_NPC_Character_DroneLight_C.m_on_death_delegate_Event_0
// 0x0318 (0x0318 - 0x0000)
struct BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0 final
{
public:
	class ACACharacter*                           Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                    Death_gameplay_effect_spec;                        // 0x0008(0x0298)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         Damage_magnitude;                                  // 0x02A0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNetworkedHit                          Networked_hit;                                     // 0x02A8(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	const class AActor*                           Killer;                                            // 0x0310(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0) == 0x000008, "Wrong alignment on BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0");
static_assert(sizeof(BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0) == 0x000318, "Wrong size on BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0, Character) == 0x000000, "Member 'BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0::Character' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0, Death_gameplay_effect_spec) == 0x000008, "Member 'BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0::Death_gameplay_effect_spec' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0, Damage_magnitude) == 0x0002A0, "Member 'BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0::Damage_magnitude' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0, Networked_hit) == 0x0002A8, "Member 'BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0::Networked_hit' has a wrong offset!");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0, Killer) == 0x000310, "Member 'BP_NPC_Character_DroneLight_C_M_on_death_delegate_Event_0::Killer' has a wrong offset!");

// Function BP_NPC_Character_DroneLight.BP_NPC_Character_DroneLight_C.m_on_awareness_state_changed_Event_0
// 0x0001 (0x0001 - 0x0000)
struct BP_NPC_Character_DroneLight_C_M_on_awareness_state_changed_Event_0 final
{
public:
	ECAAwarenessState                             Awareness_state;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Character_DroneLight_C_M_on_awareness_state_changed_Event_0) == 0x000001, "Wrong alignment on BP_NPC_Character_DroneLight_C_M_on_awareness_state_changed_Event_0");
static_assert(sizeof(BP_NPC_Character_DroneLight_C_M_on_awareness_state_changed_Event_0) == 0x000001, "Wrong size on BP_NPC_Character_DroneLight_C_M_on_awareness_state_changed_Event_0");
static_assert(offsetof(BP_NPC_Character_DroneLight_C_M_on_awareness_state_changed_Event_0, Awareness_state) == 0x000000, "Member 'BP_NPC_Character_DroneLight_C_M_on_awareness_state_changed_Event_0::Awareness_state' has a wrong offset!");

}

