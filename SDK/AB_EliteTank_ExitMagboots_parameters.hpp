#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EliteTank_ExitMagboots

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_EliteTank_ExitMagboots.AB_EliteTank_ExitMagboots_C.ExecuteUbergraph_AB_EliteTank_ExitMagboots
// 0x0100 (0x0100 - 0x0000)
struct AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ActionNumber_1;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ActionNumber)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_ActionNumber;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ActionNumber)>           K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0014)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_Repeat*                    CallFunc_RepeatAction_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0048(0x00B8)(ConstParm)
};
static_assert(alignof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots) == 0x000008, "Wrong alignment on AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots");
static_assert(sizeof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots) == 0x000100, "Wrong size on AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, EntryPoint) == 0x000000, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, K2Node_CustomEvent_ActionNumber_1) == 0x000004, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::K2Node_CustomEvent_ActionNumber_1' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, K2Node_CustomEvent_ActionNumber) == 0x00001C, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::K2Node_CustomEvent_ActionNumber' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, Temp_int_Variable) == 0x000034, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, CallFunc_RepeatAction_ReturnValue) == 0x000038, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::CallFunc_RepeatAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots, K2Node_Event_EventData) == 0x000048, "Member 'AB_EliteTank_ExitMagboots_C_ExecuteUbergraph_AB_EliteTank_ExitMagboots::K2Node_Event_EventData' has a wrong offset!");

// Function AB_EliteTank_ExitMagboots.AB_EliteTank_ExitMagboots_C.K2_ActivateAbilityFromEvent
// 0x00B8 (0x00B8 - 0x0000)
struct AB_EliteTank_ExitMagboots_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AB_EliteTank_ExitMagboots_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on AB_EliteTank_ExitMagboots_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(AB_EliteTank_ExitMagboots_C_K2_ActivateAbilityFromEvent) == 0x0000B8, "Wrong size on AB_EliteTank_ExitMagboots_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'AB_EliteTank_ExitMagboots_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function AB_EliteTank_ExitMagboots.AB_EliteTank_ExitMagboots_C.OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA
// 0x0004 (0x0004 - 0x0000)
struct AB_EliteTank_ExitMagboots_C_OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA final
{
public:
	int32                                         ActionNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_EliteTank_ExitMagboots_C_OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA) == 0x000004, "Wrong alignment on AB_EliteTank_ExitMagboots_C_OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA");
static_assert(sizeof(AB_EliteTank_ExitMagboots_C_OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA) == 0x000004, "Wrong size on AB_EliteTank_ExitMagboots_C_OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA, ActionNumber) == 0x000000, "Member 'AB_EliteTank_ExitMagboots_C_OnPerformAction_427D465E4A6DB0F3249FCAA3450C08EA::ActionNumber' has a wrong offset!");

// Function AB_EliteTank_ExitMagboots.AB_EliteTank_ExitMagboots_C.OnFinished_427D465E4A6DB0F3249FCAA3450C08EA
// 0x0004 (0x0004 - 0x0000)
struct AB_EliteTank_ExitMagboots_C_OnFinished_427D465E4A6DB0F3249FCAA3450C08EA final
{
public:
	int32                                         ActionNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_EliteTank_ExitMagboots_C_OnFinished_427D465E4A6DB0F3249FCAA3450C08EA) == 0x000004, "Wrong alignment on AB_EliteTank_ExitMagboots_C_OnFinished_427D465E4A6DB0F3249FCAA3450C08EA");
static_assert(sizeof(AB_EliteTank_ExitMagboots_C_OnFinished_427D465E4A6DB0F3249FCAA3450C08EA) == 0x000004, "Wrong size on AB_EliteTank_ExitMagboots_C_OnFinished_427D465E4A6DB0F3249FCAA3450C08EA");
static_assert(offsetof(AB_EliteTank_ExitMagboots_C_OnFinished_427D465E4A6DB0F3249FCAA3450C08EA, ActionNumber) == 0x000000, "Member 'AB_EliteTank_ExitMagboots_C_OnFinished_427D465E4A6DB0F3249FCAA3450C08EA::ActionNumber' has a wrong offset!");

}

