#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BreachBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BreachBase.BP_BreachBase_C.ExecuteUbergraph_BP_BreachBase
// 0x0020 (0x0020 - 0x0000)
struct BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Breachable;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Owner;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnabled;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TransitionToStateByName_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TransitionToStateByName_ReturnValue_1;    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase) == 0x000008, "Wrong alignment on BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase");
static_assert(sizeof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase) == 0x000020, "Wrong size on BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase");
static_assert(offsetof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase, EntryPoint) == 0x000000, "Member 'BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase, K2Node_Event_Breachable) == 0x000008, "Member 'BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase::K2Node_Event_Breachable' has a wrong offset!");
static_assert(offsetof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase, K2Node_Event_Owner) == 0x000010, "Member 'BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase::K2Node_Event_Owner' has a wrong offset!");
static_assert(offsetof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase, K2Node_Event_bEnabled) == 0x000018, "Member 'BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase::K2Node_Event_bEnabled' has a wrong offset!");
static_assert(offsetof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase, CallFunc_TransitionToStateByName_ReturnValue) == 0x000019, "Member 'BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase::CallFunc_TransitionToStateByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase, CallFunc_TransitionToStateByName_ReturnValue_1) == 0x00001A, "Member 'BP_BreachBase_C_ExecuteUbergraph_BP_BreachBase::CallFunc_TransitionToStateByName_ReturnValue_1' has a wrong offset!");

// Function BP_BreachBase.BP_BreachBase_C.SetBreachEnabled
// 0x0010 (0x0010 - 0x0000)
struct BP_BreachBase_C_SetBreachEnabled final
{
public:
	class AActor*                                 Owner_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnabled;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BreachBase_C_SetBreachEnabled) == 0x000008, "Wrong alignment on BP_BreachBase_C_SetBreachEnabled");
static_assert(sizeof(BP_BreachBase_C_SetBreachEnabled) == 0x000010, "Wrong size on BP_BreachBase_C_SetBreachEnabled");
static_assert(offsetof(BP_BreachBase_C_SetBreachEnabled, Owner_0) == 0x000000, "Member 'BP_BreachBase_C_SetBreachEnabled::Owner_0' has a wrong offset!");
static_assert(offsetof(BP_BreachBase_C_SetBreachEnabled, bEnabled) == 0x000008, "Member 'BP_BreachBase_C_SetBreachEnabled::bEnabled' has a wrong offset!");

// Function BP_BreachBase.BP_BreachBase_C.BreachComplete
// 0x0008 (0x0008 - 0x0000)
struct BP_BreachBase_C_BreachComplete final
{
public:
	class AActor*                                 Breachable;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BreachBase_C_BreachComplete) == 0x000008, "Wrong alignment on BP_BreachBase_C_BreachComplete");
static_assert(sizeof(BP_BreachBase_C_BreachComplete) == 0x000008, "Wrong size on BP_BreachBase_C_BreachComplete");
static_assert(offsetof(BP_BreachBase_C_BreachComplete, Breachable) == 0x000000, "Member 'BP_BreachBase_C_BreachComplete::Breachable' has a wrong offset!");

}
