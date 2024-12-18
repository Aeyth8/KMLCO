#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaserTargetEffect_TurretSemiAuto

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto
// 0x00E8 (0x00E8 - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_NPC*                       K2Node_DynamicCast_AsCACharacter_NPC;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Is_active)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Is_in_pool)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0014)(ZeroConstructor, NoDestructor)
	struct FVector                                K2Node_Event_target_location;                      // 0x003C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        K2Node_Event_parent_component;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetChargeProportion_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F[0x1];                                       // 0x007F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0088(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasGameplayTag_ReturnValue;               // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_is_active;                      // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_is_in_pool;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Weapon_Instant_Base_C*              K2Node_CustomEvent_OwningWeapon;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B4(0x0014)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00D0(0x0014)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetChargeProportion_ReturnValue_1;        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto) == 0x000008, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto) == 0x0000E8, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, EntryPoint) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_DynamicCast_AsCACharacter_NPC) == 0x000008, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_DynamicCast_AsCACharacter_NPC' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_Event_target_location) == 0x00003C, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_Event_target_location' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_Event_parent_component) == 0x000048, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_Event_parent_component' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000050, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_GetSocketLocation_ReturnValue) == 0x00005C, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_IsDedicatedServer_ReturnValue) == 0x000074, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_GetChargeProportion_ReturnValue) == 0x000078, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_GetChargeProportion_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00007C, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_IsValid_ReturnValue_1) == 0x00007D, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_IsValid_ReturnValue_2) == 0x00007E, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_GetOwner_ReturnValue) == 0x000080, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CreateDelegate_OutputDelegate_2) == 0x000088, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_HasGameplayTag_ReturnValue) == 0x00009C, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_HasGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CustomEvent_is_active) == 0x00009D, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CustomEvent_is_active' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_Not_PreBool_ReturnValue) == 0x00009E, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_BooleanAND_ReturnValue) == 0x00009F, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CustomEvent_is_in_pool) == 0x0000A0, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CustomEvent_is_in_pool' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CustomEvent_OwningWeapon) == 0x0000A8, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CustomEvent_OwningWeapon' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x0000B0, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B4, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000C8, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000D0, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto, CallFunc_GetChargeProportion_ReturnValue_1) == 0x0000E4, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretSemiAuto::CallFunc_GetChargeProportion_ReturnValue_1' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.EventReadyInitializeClient
// 0x0008 (0x0008 - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_EventReadyInitializeClient final
{
public:
	class ABP_Weapon_Instant_Base_C*              OwningWeapon_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_EventReadyInitializeClient) == 0x000008, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_EventReadyInitializeClient");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_EventReadyInitializeClient) == 0x000008, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_EventReadyInitializeClient");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_EventReadyInitializeClient, OwningWeapon_0) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_EventReadyInitializeClient::OwningWeapon_0' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.Owner Pool State Change
// 0x0001 (0x0001 - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_Owner_Pool_State_Change final
{
public:
	bool                                          Is_in_pool;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_Owner_Pool_State_Change) == 0x000001, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_Owner_Pool_State_Change");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_Owner_Pool_State_Change) == 0x000001, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_Owner_Pool_State_Change");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_Owner_Pool_State_Change, Is_in_pool) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_Owner_Pool_State_Change::Is_in_pool' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.Target Laser State Change
// 0x0001 (0x0001 - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_Target_Laser_State_Change final
{
public:
	bool                                          Is_active;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_Target_Laser_State_Change) == 0x000001, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_Target_Laser_State_Change");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_Target_Laser_State_Change) == 0x000001, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_Target_Laser_State_Change");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_Target_Laser_State_Change, Is_active) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_Target_Laser_State_Change::Is_active' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.OnSetupBeam
// 0x0008 (0x0008 - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_OnSetupBeam final
{
public:
	class USceneComponent*                        Parent_component;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_OnSetupBeam) == 0x000008, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_OnSetupBeam");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_OnSetupBeam) == 0x000008, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_OnSetupBeam");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_OnSetupBeam, Parent_component) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_OnSetupBeam::Parent_component' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.OnTargetLocationChange
// 0x000C (0x000C - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_OnTargetLocationChange final
{
public:
	struct FVector                                Target_location;                                   // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_OnTargetLocationChange) == 0x000004, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_OnTargetLocationChange");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_OnTargetLocationChange) == 0x00000C, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_OnTargetLocationChange");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_OnTargetLocationChange, Target_location) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_OnTargetLocationChange::Target_location' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.Set Laser Colour
// 0x0008 (0x0008 - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour final
{
public:
	float                                         Charge;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FadeOut;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour) == 0x000004, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour) == 0x000008, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour, Charge) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour::Charge' has a wrong offset!");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour, FadeOut) == 0x000004, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_Set_Laser_Colour::FadeOut' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.SetLaserStart
// 0x000C (0x000C - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserStart final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserStart) == 0x000004, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserStart");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserStart) == 0x00000C, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserStart");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserStart, Location) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserStart::Location' has a wrong offset!");

// Function BP_LaserTargetEffect_TurretSemiAuto.BP_LaserTargetEffect_TurretSemiAuto_C.SetLaserEnd
// 0x000C (0x000C - 0x0000)
struct BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserEnd final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserEnd) == 0x000004, "Wrong alignment on BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserEnd");
static_assert(sizeof(BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserEnd) == 0x00000C, "Wrong size on BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserEnd");
static_assert(offsetof(BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserEnd, Location) == 0x000000, "Member 'BP_LaserTargetEffect_TurretSemiAuto_C_SetLaserEnd::Location' has a wrong offset!");

}

