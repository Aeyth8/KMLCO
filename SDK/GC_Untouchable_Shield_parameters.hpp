#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Untouchable_Shield

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GC_Untouchable_Shield.GC_Untouchable_Shield_C.OnActive
// 0x0100 (0x0100 - 0x0000)
struct GC_Untouchable_Shield_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GC_Untouchable_Shield_C_OnActive) == 0x000008, "Wrong alignment on GC_Untouchable_Shield_C_OnActive");
static_assert(sizeof(GC_Untouchable_Shield_C_OnActive) == 0x000100, "Wrong size on GC_Untouchable_Shield_C_OnActive");
static_assert(offsetof(GC_Untouchable_Shield_C_OnActive, MyTarget) == 0x000000, "Member 'GC_Untouchable_Shield_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Untouchable_Shield_C_OnActive, Parameters) == 0x000008, "Member 'GC_Untouchable_Shield_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Untouchable_Shield_C_OnActive, ReturnValue) == 0x0000F8, "Member 'GC_Untouchable_Shield_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Untouchable_Shield_C_OnActive, CallFunc_IsValid_ReturnValue) == 0x0000F9, "Member 'GC_Untouchable_Shield_C_OnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GC_Untouchable_Shield.GC_Untouchable_Shield_C.OnRemove
// 0x0100 (0x0100 - 0x0000)
struct GC_Untouchable_Shield_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GC_Untouchable_Shield_C_OnRemove) == 0x000008, "Wrong alignment on GC_Untouchable_Shield_C_OnRemove");
static_assert(sizeof(GC_Untouchable_Shield_C_OnRemove) == 0x000100, "Wrong size on GC_Untouchable_Shield_C_OnRemove");
static_assert(offsetof(GC_Untouchable_Shield_C_OnRemove, MyTarget) == 0x000000, "Member 'GC_Untouchable_Shield_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Untouchable_Shield_C_OnRemove, Parameters) == 0x000008, "Member 'GC_Untouchable_Shield_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Untouchable_Shield_C_OnRemove, ReturnValue) == 0x0000F8, "Member 'GC_Untouchable_Shield_C_OnRemove::ReturnValue' has a wrong offset!");

}
