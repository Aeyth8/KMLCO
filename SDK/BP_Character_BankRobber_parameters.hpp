#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_BankRobber

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Keaton_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.ExecuteUbergraph_BP_Character_BankRobber
// 0x0360 (0x0360 - 0x0000)
struct BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPC_BankRobber_Turret_C*            K2Node_DynamicCast_AsBP_NPC_Bank_Robber_Turret;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_ComponentBoundEvent_tag;                    // 0x0014(0x000C)(NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_count;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsActive;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class ACACharacter_NPC*                 K2Node_Event_Turret;                               // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter*                           K2Node_Event_character;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                    K2Node_Event_death_gameplay_effect_spec;           // 0x0050(0x0298)(ConstParm)
	float                                         K2Node_Event_damage_magnitude;                     // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNetworkedHit                          K2Node_Event_networked_hit;                        // 0x02F0(0x0068)(ConstParm, NoDestructor)
	const class AActor*                           K2Node_Event_killer;                               // 0x0358(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber) == 0x000008, "Wrong alignment on BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber");
static_assert(sizeof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber) == 0x000360, "Wrong size on BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, EntryPoint) == 0x000000, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_DynamicCast_AsBP_NPC_Bank_Robber_Turret) == 0x000008, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_DynamicCast_AsBP_NPC_Bank_Robber_Turret' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_ComponentBoundEvent_tag) == 0x000014, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_ComponentBoundEvent_tag' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_ComponentBoundEvent_count) == 0x000020, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_ComponentBoundEvent_count' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000025, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, CallFunc_BooleanAND_ReturnValue) == 0x000026, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, CallFunc_BooleanAND_ReturnValue_1) == 0x000027, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000028, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_Event_IsActive) == 0x000030, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_Event_IsActive' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_Event_Turret) == 0x000038, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_Event_Turret' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, CallFunc_HasAuthority_ReturnValue) == 0x000040, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_Event_character) == 0x000048, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_Event_character' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_Event_death_gameplay_effect_spec) == 0x000050, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_Event_death_gameplay_effect_spec' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_Event_damage_magnitude) == 0x0002E8, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_Event_damage_magnitude' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_Event_networked_hit) == 0x0002F0, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_Event_networked_hit' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber, K2Node_Event_killer) == 0x000358, "Member 'BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber::K2Node_Event_killer' has a wrong offset!");

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.SetTurretActive
// 0x0010 (0x0010 - 0x0000)
struct BP_Character_BankRobber_C_SetTurretActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class ACACharacter_NPC*                 Turret;                                            // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Character_BankRobber_C_SetTurretActive) == 0x000008, "Wrong alignment on BP_Character_BankRobber_C_SetTurretActive");
static_assert(sizeof(BP_Character_BankRobber_C_SetTurretActive) == 0x000010, "Wrong size on BP_Character_BankRobber_C_SetTurretActive");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretActive, IsActive) == 0x000000, "Member 'BP_Character_BankRobber_C_SetTurretActive::IsActive' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretActive, Turret) == 0x000008, "Member 'BP_Character_BankRobber_C_SetTurretActive::Turret' has a wrong offset!");

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature) == 0x000004, "Wrong alignment on BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature");
static_assert(sizeof(BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature) == 0x000010, "Wrong size on BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature");
static_assert(offsetof(BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature, Tag) == 0x000000, "Member 'BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature::Tag' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature, Count) == 0x00000C, "Member 'BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature::Count' has a wrong offset!");

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.OnTurretDestroyed
// 0x0010 (0x0010 - 0x0000)
struct BP_Character_BankRobber_C_OnTurretDestroyed final
{
public:
	class ABP_NPC_BankRobber_Turret_C*            K2Node_DynamicCast_AsBP_NPC_Bank_Robber_Turret;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Character_BankRobber_C_OnTurretDestroyed) == 0x000008, "Wrong alignment on BP_Character_BankRobber_C_OnTurretDestroyed");
static_assert(sizeof(BP_Character_BankRobber_C_OnTurretDestroyed) == 0x000010, "Wrong size on BP_Character_BankRobber_C_OnTurretDestroyed");
static_assert(offsetof(BP_Character_BankRobber_C_OnTurretDestroyed, K2Node_DynamicCast_AsBP_NPC_Bank_Robber_Turret) == 0x000000, "Member 'BP_Character_BankRobber_C_OnTurretDestroyed::K2Node_DynamicCast_AsBP_NPC_Bank_Robber_Turret' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_OnTurretDestroyed, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_Character_BankRobber_C_OnTurretDestroyed::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.SetTurretHealth
// 0x0050 (0x0050 - 0x0000)
struct BP_Character_BankRobber_C_SetTurretHealth final
{
public:
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAttributeInitialisationTableHealth  CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Character_BankRobber_C_SetTurretHealth) == 0x000008, "Wrong alignment on BP_Character_BankRobber_C_SetTurretHealth");
static_assert(sizeof(BP_Character_BankRobber_C_SetTurretHealth) == 0x000050, "Wrong size on BP_Character_BankRobber_C_SetTurretHealth");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretHealth, Temp_bool_Has_Been_Initd_Variable) == 0x000000, "Member 'BP_Character_BankRobber_C_SetTurretHealth::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretHealth, Temp_bool_IsClosed_Variable) == 0x000001, "Member 'BP_Character_BankRobber_C_SetTurretHealth::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretHealth, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'BP_Character_BankRobber_C_SetTurretHealth::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretHealth, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000040, "Member 'BP_Character_BankRobber_C_SetTurretHealth::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretHealth, CallFunc_Multiply_IntInt_ReturnValue) == 0x000044, "Member 'BP_Character_BankRobber_C_SetTurretHealth::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_SetTurretHealth, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000048, "Member 'BP_Character_BankRobber_C_SetTurretHealth::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.OnRep_TurretProperlyDestroyed
// 0x0010 (0x0010 - 0x0000)
struct BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed final
{
public:
	const class UCAUIHUDInterface*                CallFunc_GetUIHUDInterface_ReturnValue;            // 0x0000(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed) == 0x000008, "Wrong alignment on BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed");
static_assert(sizeof(BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed) == 0x000010, "Wrong size on BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed");
static_assert(offsetof(BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed, CallFunc_GetUIHUDInterface_ReturnValue) == 0x000000, "Member 'BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed::CallFunc_GetUIHUDInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_Character_BankRobber_C_OnRep_TurretProperlyDestroyed::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.OnDeath
// 0x0318 (0x0318 - 0x0000)
struct BP_Character_BankRobber_C_OnDeath final
{
public:
	class ACACharacter*                           Character_0;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                    Death_gameplay_effect_spec;                        // 0x0008(0x0298)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         Damage_magnitude;                                  // 0x02A0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNetworkedHit                          Networked_hit;                                     // 0x02A8(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	const class AActor*                           Killer;                                            // 0x0310(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Character_BankRobber_C_OnDeath) == 0x000008, "Wrong alignment on BP_Character_BankRobber_C_OnDeath");
static_assert(sizeof(BP_Character_BankRobber_C_OnDeath) == 0x000318, "Wrong size on BP_Character_BankRobber_C_OnDeath");
static_assert(offsetof(BP_Character_BankRobber_C_OnDeath, Character_0) == 0x000000, "Member 'BP_Character_BankRobber_C_OnDeath::Character_0' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_OnDeath, Death_gameplay_effect_spec) == 0x000008, "Member 'BP_Character_BankRobber_C_OnDeath::Death_gameplay_effect_spec' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_OnDeath, Damage_magnitude) == 0x0002A0, "Member 'BP_Character_BankRobber_C_OnDeath::Damage_magnitude' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_OnDeath, Networked_hit) == 0x0002A8, "Member 'BP_Character_BankRobber_C_OnDeath::Networked_hit' has a wrong offset!");
static_assert(offsetof(BP_Character_BankRobber_C_OnDeath, Killer) == 0x000310, "Member 'BP_Character_BankRobber_C_OnDeath::Killer' has a wrong offset!");

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.IsTurretDestroyed
// 0x0001 (0x0001 - 0x0000)
struct BP_Character_BankRobber_C_IsTurretDestroyed final
{
public:
	bool                                          IsDestroyed;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Character_BankRobber_C_IsTurretDestroyed) == 0x000001, "Wrong alignment on BP_Character_BankRobber_C_IsTurretDestroyed");
static_assert(sizeof(BP_Character_BankRobber_C_IsTurretDestroyed) == 0x000001, "Wrong size on BP_Character_BankRobber_C_IsTurretDestroyed");
static_assert(offsetof(BP_Character_BankRobber_C_IsTurretDestroyed, IsDestroyed) == 0x000000, "Member 'BP_Character_BankRobber_C_IsTurretDestroyed::IsDestroyed' has a wrong offset!");

}
