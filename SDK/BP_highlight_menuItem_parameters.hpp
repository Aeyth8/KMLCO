#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_highlight_menuItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_highlight_menuItem.BP_highlight_menuItem_C.ExecuteUbergraph_BP_highlight_menuItem
// 0x0010 (0x0010 - 0x0000)
struct BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem) == 0x000008, "Wrong alignment on BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem");
static_assert(sizeof(BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem) == 0x000010, "Wrong size on BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem");
static_assert(offsetof(BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem, EntryPoint) == 0x000000, "Member 'BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000008, "Member 'BP_highlight_menuItem_C_ExecuteUbergraph_BP_highlight_menuItem::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");

}
