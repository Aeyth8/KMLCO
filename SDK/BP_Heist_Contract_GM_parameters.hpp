#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Heist_Contract_GM

#include "Basic.hpp"

#include "CALootEventStruct_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.ExecuteUbergraph_BP_Heist_Contract_GM
// 0x0070 (0x0070 - 0x0000)
struct BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACASecurityArea*>                CallFunc_GetSecurityAreasWithCampTypeID_ReturnValue; // 0x0020(0x0010)(ReferenceParm)
	class ACASecurityArea*                        CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetVaultDoor_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAVaultActor*                          K2Node_DynamicCast_AsCAVault_Actor;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShipping_ReturnValue;                   // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM) == 0x000008, "Wrong alignment on BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM");
static_assert(sizeof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM) == 0x000070, "Wrong size on BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, EntryPoint) == 0x000000, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_GetSecurityAreasWithCampTypeID_ReturnValue) == 0x000020, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_GetSecurityAreasWithCampTypeID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_GetVaultDoor_ReturnValue) == 0x000040, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_GetVaultDoor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, K2Node_DynamicCast_AsCAVault_Actor) == 0x000048, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::K2Node_DynamicCast_AsCAVault_Actor' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, Temp_bool_Has_Been_Initd_Variable) == 0x000064, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, Temp_bool_IsClosed_Variable) == 0x000065, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_IsShipping_ReturnValue) == 0x000066, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_IsShipping_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_Not_PreBool_ReturnValue) == 0x000067, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_BooleanAND_ReturnValue) == 0x000068, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM, CallFunc_Subtract_IntInt_ReturnValue) == 0x00006C, "Member 'BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.TeamRevealEvent
// 0x0040 (0x0040 - 0x0000)
struct BP_Heist_Contract_GM_C_TeamRevealEvent final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EnemyRevealEventManager_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Heist_Contract_GM_C_TeamRevealEvent) == 0x000010, "Wrong alignment on BP_Heist_Contract_GM_C_TeamRevealEvent");
static_assert(sizeof(BP_Heist_Contract_GM_C_TeamRevealEvent) == 0x000040, "Wrong size on BP_Heist_Contract_GM_C_TeamRevealEvent");
static_assert(offsetof(BP_Heist_Contract_GM_C_TeamRevealEvent, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_Heist_Contract_GM_C_TeamRevealEvent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_TeamRevealEvent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000030, "Member 'BP_Heist_Contract_GM_C_TeamRevealEvent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_TeamRevealEvent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000038, "Member 'BP_Heist_Contract_GM_C_TeamRevealEvent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.Check If Event Can Be Activated
// 0x002C (0x002C - 0x0000)
struct BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated final
{
public:
	bool                                          CanBeActivated;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TeamHasThreshold;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCALootEventStruct                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated) == 0x000004, "Wrong alignment on BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated");
static_assert(sizeof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated) == 0x00002C, "Wrong size on BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CanBeActivated) == 0x000000, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CanBeActivated' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, TeamHasThreshold) == 0x000001, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::TeamHasThreshold' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00000C, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000014, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000018, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_GetDataTableRowFromName_OutRow) == 0x00001C, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000028, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000029, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.FindAndActivateEvent
// 0x0020 (0x0020 - 0x0000)
struct BP_Heist_Contract_GM_C_FindAndActivateEvent final
{
public:
	TArray<class ABP_LootEvent_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm)
	class ABP_LootEvent_C*                        CallFunc_Array_Random_OutItem;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Heist_Contract_GM_C_FindAndActivateEvent) == 0x000008, "Wrong alignment on BP_Heist_Contract_GM_C_FindAndActivateEvent");
static_assert(sizeof(BP_Heist_Contract_GM_C_FindAndActivateEvent) == 0x000020, "Wrong size on BP_Heist_Contract_GM_C_FindAndActivateEvent");
static_assert(offsetof(BP_Heist_Contract_GM_C_FindAndActivateEvent, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'BP_Heist_Contract_GM_C_FindAndActivateEvent::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_FindAndActivateEvent, CallFunc_Array_Random_OutItem) == 0x000010, "Member 'BP_Heist_Contract_GM_C_FindAndActivateEvent::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_FindAndActivateEvent, CallFunc_Array_Random_OutIndex) == 0x000018, "Member 'BP_Heist_Contract_GM_C_FindAndActivateEvent::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(BP_Heist_Contract_GM_C_FindAndActivateEvent, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_Heist_Contract_GM_C_FindAndActivateEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
