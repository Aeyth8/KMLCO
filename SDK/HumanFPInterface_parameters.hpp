#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HumanFPInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function HumanFPInterface.HumanFPInterface_C.SetIsHeldGadgetOrAbility
// 0x0002 (0x0002 - 0x0000)
struct HumanFPInterface_C_SetIsHeldGadgetOrAbility final
{
public:
	bool                                          IsHeld;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShouldUseLeftHandIK;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HumanFPInterface_C_SetIsHeldGadgetOrAbility) == 0x000001, "Wrong alignment on HumanFPInterface_C_SetIsHeldGadgetOrAbility");
static_assert(sizeof(HumanFPInterface_C_SetIsHeldGadgetOrAbility) == 0x000002, "Wrong size on HumanFPInterface_C_SetIsHeldGadgetOrAbility");
static_assert(offsetof(HumanFPInterface_C_SetIsHeldGadgetOrAbility, IsHeld) == 0x000000, "Member 'HumanFPInterface_C_SetIsHeldGadgetOrAbility::IsHeld' has a wrong offset!");
static_assert(offsetof(HumanFPInterface_C_SetIsHeldGadgetOrAbility, ShouldUseLeftHandIK) == 0x000001, "Member 'HumanFPInterface_C_SetIsHeldGadgetOrAbility::ShouldUseLeftHandIK' has a wrong offset!");

// Function HumanFPInterface.HumanFPInterface_C.IsZGBoosting?
// 0x0001 (0x0001 - 0x0000)
struct HumanFPInterface_C_IsZGBoosting_ final
{
public:
	bool                                          IsZGBoosting;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HumanFPInterface_C_IsZGBoosting_) == 0x000001, "Wrong alignment on HumanFPInterface_C_IsZGBoosting_");
static_assert(sizeof(HumanFPInterface_C_IsZGBoosting_) == 0x000001, "Wrong size on HumanFPInterface_C_IsZGBoosting_");
static_assert(offsetof(HumanFPInterface_C_IsZGBoosting_, IsZGBoosting) == 0x000000, "Member 'HumanFPInterface_C_IsZGBoosting_::IsZGBoosting' has a wrong offset!");

}
