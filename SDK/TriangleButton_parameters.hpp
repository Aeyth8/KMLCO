#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TriangleButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function TriangleButton.TriangleButton_C.ExecuteUbergraph_TriangleButton
// 0x0010 (0x0010 - 0x0000)
struct TriangleButton_C_ExecuteUbergraph_TriangleButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TriangleButton_C_ExecuteUbergraph_TriangleButton) == 0x000008, "Wrong alignment on TriangleButton_C_ExecuteUbergraph_TriangleButton");
static_assert(sizeof(TriangleButton_C_ExecuteUbergraph_TriangleButton) == 0x000010, "Wrong size on TriangleButton_C_ExecuteUbergraph_TriangleButton");
static_assert(offsetof(TriangleButton_C_ExecuteUbergraph_TriangleButton, EntryPoint) == 0x000000, "Member 'TriangleButton_C_ExecuteUbergraph_TriangleButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(TriangleButton_C_ExecuteUbergraph_TriangleButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'TriangleButton_C_ExecuteUbergraph_TriangleButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
