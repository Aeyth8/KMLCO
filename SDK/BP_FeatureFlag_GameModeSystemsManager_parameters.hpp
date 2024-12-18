#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FeatureFlag_GameModeSystemsManager

#include "Basic.hpp"

#include "BPS_FeatureFlag_SystemActor_Data_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FeatureFlag_GameModeSystemsManager.BP_FeatureFlag_GameModeSystemsManager_C.ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager
// 0x0004 (0x0004 - 0x0000)
struct BP_FeatureFlag_GameModeSystemsManager_C_ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FeatureFlag_GameModeSystemsManager_C_ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager) == 0x000004, "Wrong alignment on BP_FeatureFlag_GameModeSystemsManager_C_ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager");
static_assert(sizeof(BP_FeatureFlag_GameModeSystemsManager_C_ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager) == 0x000004, "Wrong size on BP_FeatureFlag_GameModeSystemsManager_C_ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager, EntryPoint) == 0x000000, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_ExecuteUbergraph_BP_FeatureFlag_GameModeSystemsManager::EntryPoint' has a wrong offset!");

// Function BP_FeatureFlag_GameModeSystemsManager.BP_FeatureFlag_GameModeSystemsManager_C.InitializeFeatureFlagSystems
// 0x0090 (0x0090 - 0x0000)
struct BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBPS_FeatureFlag_SystemActor_Data      CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActorAlreadyPresentInLevel_ReturnValue; // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFeatureValid_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems) == 0x000010, "Wrong alignment on BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems");
static_assert(sizeof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems) == 0x000090, "Wrong size on BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_IsActorAlreadyPresentInLevel_ReturnValue) == 0x00003C, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_IsActorAlreadyPresentInLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_Not_PreBool_ReturnValue) == 0x00003E, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_IsValidClass_ReturnValue) == 0x00003F, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_IsFeatureValid_ReturnValue) == 0x000040, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_IsFeatureValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_GetOwner_ReturnValue_2) == 0x000048, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_InitializeFeatureFlagSystems::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_FeatureFlag_GameModeSystemsManager.BP_FeatureFlag_GameModeSystemsManager_C.IsActorAlreadyPresentInLevel
// 0x0028 (0x0028 - 0x0000)
struct BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel final
{
public:
	TSubclassOf<class AActor>                     ActorClass;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel) == 0x000008, "Wrong alignment on BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel");
static_assert(sizeof(BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel) == 0x000028, "Wrong size on BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel, ActorClass) == 0x000000, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel::ActorClass' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel, ReturnValue) == 0x000008, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'BP_FeatureFlag_GameModeSystemsManager_C_IsActorAlreadyPresentInLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

