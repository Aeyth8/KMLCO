#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DragQueen_Untouchable_Shield

#include "Basic.hpp"

#include "Keaton_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ExecuteUbergraph_BP_DragQueen_Untouchable_Shield
// 0x03F0 (0x03F0 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FCADamageEffectInfo& Damage_effect_info)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActorIsA_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCADamageEffectInfo                    K2Node_CustomEvent_damage_effect_info;             // 0x0028(0x02F8)(ConstParm)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x3];                                      // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x032C(0x0014)(ZeroConstructor, NoDestructor)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_349[0x3];                                      // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x034C(0x0014)(ZeroConstructor, NoDestructor)
	class ACACharacter*                           K2Node_DynamicCast_AsCACharacter;                  // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAAttachedEffect*                      CallFunc_SpawnCAAttachedEffectByRow_ReturnValue;   // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCADragQueenExplosionComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0378(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAAttachedEffect*                      CallFunc_SpawnCAAttachedEffectByRow_ReturnValue_1; // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput;        // 0x0398(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class UGameplayTask_WaitDelay*                CallFunc_TaskWaitDelay_ReturnValue;                // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBeingViewed_ReturnValue;                // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B3[0x5];                                      // 0x03B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAAttachedEffect*                      K2Node_Select_Default;                             // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBeingViewed_ReturnValue_1;              // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x03C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x03C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasGameplayTag_ReturnValue;               // 0x03C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x03C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput_1;      // 0x03D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class UGameplayTask_WaitDelay*                CallFunc_TaskWaitDelay_ReturnValue_1;              // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield) == 0x000008, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield) == 0x0003F0, "Wrong size on BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, EntryPoint) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_Event_OtherActor) == 0x000018, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_ActorIsA_ReturnValue) == 0x000020, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_ActorIsA_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_CustomEvent_damage_effect_info) == 0x000028, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_CustomEvent_damage_effect_info' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_Event_EndPlayReason) == 0x000320, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_Event_DeltaSeconds) == 0x000324, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, Temp_bool_Variable) == 0x000328, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_CreateDelegate_OutputDelegate_1) == 0x00032C, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_GetInstigator_ReturnValue) == 0x000340, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsValid_ReturnValue) == 0x000348, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_CreateDelegate_OutputDelegate_2) == 0x00034C, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_DynamicCast_AsCACharacter) == 0x000360, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_DynamicCast_AsCACharacter' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_DynamicCast_bSuccess) == 0x000368, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_SpawnCAAttachedEffectByRow_ReturnValue) == 0x000370, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_SpawnCAAttachedEffectByRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_GetComponentByClass_ReturnValue) == 0x000378, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_SpawnCAAttachedEffectByRow_ReturnValue_1) == 0x000380, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_SpawnCAAttachedEffectByRow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsValid_ReturnValue_1) == 0x000388, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000390, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_TaskWaitDelay_TaskOwner_CastInput) == 0x000398, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_TaskWaitDelay_TaskOwner_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_TaskWaitDelay_ReturnValue) == 0x0003A8, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_TaskWaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsBeingViewed_ReturnValue) == 0x0003B0, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsBeingViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_Not_PreBool_ReturnValue) == 0x0003B1, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsValid_ReturnValue_2) == 0x0003B2, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, K2Node_Select_Default) == 0x0003B8, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsBeingViewed_ReturnValue_1) == 0x0003C0, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsBeingViewed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsDedicatedServer_ReturnValue) == 0x0003C1, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsValid_ReturnValue_3) == 0x0003C2, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_HasGameplayTag_ReturnValue) == 0x0003C3, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_HasGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x0003C8, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_TaskWaitDelay_TaskOwner_CastInput_1) == 0x0003D0, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_TaskWaitDelay_TaskOwner_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_TaskWaitDelay_ReturnValue_1) == 0x0003E0, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_TaskWaitDelay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield, CallFunc_IsValid_ReturnValue_4) == 0x0003E8, "Member 'BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_ReceiveTick");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_ReceiveTick) == 0x000004, "Wrong size on BP_DragQueen_Untouchable_Shield_C_ReceiveTick");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.Hit Recieved
// 0x02F8 (0x02F8 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_Hit_Recieved final
{
public:
	struct FCADamageEffectInfo                    Damage_effect_info;                                // 0x0000(0x02F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_Hit_Recieved) == 0x000008, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_Hit_Recieved");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_Hit_Recieved) == 0x0002F8, "Wrong size on BP_DragQueen_Untouchable_Shield_C_Hit_Recieved");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_Hit_Recieved, Damage_effect_info) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_Hit_Recieved::Damage_effect_info' has a wrong offset!");

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.Disable Projectile Explosion
// 0x0018 (0x0018 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion final
{
public:
	class AActor*                                 Projectile;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPC_ProjectileAoE_C*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion) == 0x000008, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion) == 0x000018, "Wrong size on BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion, Projectile) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion::Projectile' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.AdjustShieldSizeAndPositionBasedOnActorPenetration
// 0x00E8 (0x00E8 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     CallFunc_CapsuleTraceMulti_OutHits;                // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_CapsuleTraceMulti_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPenetrationDisplacementInSphereOfComponentsWithTagsFromHitResults_ReturnValue; // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0058(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration) == 0x000008, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration) == 0x0000E8, "Wrong size on BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00000C, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_CapsuleTraceMulti_OutHits) == 0x000018, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_CapsuleTraceMulti_OutHits' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_CapsuleTraceMulti_ReturnValue) == 0x000028, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_CapsuleTraceMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_GetPenetrationDisplacementInSphereOfComponentsWithTagsFromHitResults_ReturnValue) == 0x00002C, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_GetPenetrationDisplacementInSphereOfComponentsWithTagsFromHitResults_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_VSize_ReturnValue) == 0x000038, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_MapRangeClamped_ReturnValue) == 0x00003C, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000040, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_Add_VectorVector_ReturnValue) == 0x00004C, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000058, "Member 'BP_DragQueen_Untouchable_Shield_C_AdjustShieldSizeAndPositionBasedOnActorPenetration::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.SetBalancingData
// 0x0018 (0x0018 - 0x0000)
struct BP_DragQueen_Untouchable_Shield_C_SetBalancingData final
{
public:
	struct FCAGameplayEffectTableValueRow         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0000(0x0010)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DragQueen_Untouchable_Shield_C_SetBalancingData) == 0x000008, "Wrong alignment on BP_DragQueen_Untouchable_Shield_C_SetBalancingData");
static_assert(sizeof(BP_DragQueen_Untouchable_Shield_C_SetBalancingData) == 0x000018, "Wrong size on BP_DragQueen_Untouchable_Shield_C_SetBalancingData");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_SetBalancingData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'BP_DragQueen_Untouchable_Shield_C_SetBalancingData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_DragQueen_Untouchable_Shield_C_SetBalancingData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000010, "Member 'BP_DragQueen_Untouchable_Shield_C_SetBalancingData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}
