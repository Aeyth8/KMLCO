#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootCelebration_v4

#include "Basic.hpp"

#include "Keaton_structs.hpp"


namespace SDK::Params
{

// Function lootCelebration_v4.lootCelebration_v4_C.ExecuteUbergraph_lootCelebration_v4
// 0x02D0 (0x02D0 - 0x0000)
struct LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAPrimaryMessageTypesTableRow         CallFunc_GetMessageConfigData_ReturnValue;         // 0x0018(0x00D0)(ConstParm)
	struct FCAPrimaryMessageTypesTableRow         CallFunc_GetMessageConfigData_ReturnValue_1;       // 0x00E8(0x00D0)(ConstParm)
	class FText                                   CallFunc_MakeTextFromCAText_text;                  // 0x01B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAPrimaryMessageTypesTableRow         CallFunc_GetMessageConfigData_ReturnValue_2;       // 0x01E8(0x00D0)(ConstParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x02B8(0x0014)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4) == 0x000008, "Wrong alignment on LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4");
static_assert(sizeof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4) == 0x0002D0, "Wrong size on LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, EntryPoint) == 0x000000, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::EntryPoint' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_GetMessageConfigData_ReturnValue) == 0x000018, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_GetMessageConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_GetMessageConfigData_ReturnValue_1) == 0x0000E8, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_GetMessageConfigData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_MakeTextFromCAText_text) == 0x0001B8, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_MakeTextFromCAText_text' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_Conv_TextToString_ReturnValue) == 0x0001D0, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x0001E0, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, CallFunc_GetMessageConfigData_ReturnValue_2) == 0x0001E8, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::CallFunc_GetMessageConfigData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4, K2Node_CreateDelegate_OutputDelegate) == 0x0002B8, "Member 'LootCelebration_v4_C_ExecuteUbergraph_lootCelebration_v4::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}
