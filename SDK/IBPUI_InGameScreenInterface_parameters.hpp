#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IBPUI_InGameScreenInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function iBPUI_InGameScreenInterface.iBPUI_InGameScreenInterface_C.UpdateWidget
// 0x0004 (0x0004 - 0x0000)
struct IBPUI_InGameScreenInterface_C_UpdateWidget final
{
public:
	int32                                         WidgetIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IBPUI_InGameScreenInterface_C_UpdateWidget) == 0x000004, "Wrong alignment on IBPUI_InGameScreenInterface_C_UpdateWidget");
static_assert(sizeof(IBPUI_InGameScreenInterface_C_UpdateWidget) == 0x000004, "Wrong size on IBPUI_InGameScreenInterface_C_UpdateWidget");
static_assert(offsetof(IBPUI_InGameScreenInterface_C_UpdateWidget, WidgetIndex) == 0x000000, "Member 'IBPUI_InGameScreenInterface_C_UpdateWidget::WidgetIndex' has a wrong offset!");

// Function iBPUI_InGameScreenInterface.iBPUI_InGameScreenInterface_C.UpdateNPCSpawnTime
// 0x0004 (0x0004 - 0x0000)
struct IBPUI_InGameScreenInterface_C_UpdateNPCSpawnTime final
{
public:
	int32                                         NPCWaveSpawnTime;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IBPUI_InGameScreenInterface_C_UpdateNPCSpawnTime) == 0x000004, "Wrong alignment on IBPUI_InGameScreenInterface_C_UpdateNPCSpawnTime");
static_assert(sizeof(IBPUI_InGameScreenInterface_C_UpdateNPCSpawnTime) == 0x000004, "Wrong size on IBPUI_InGameScreenInterface_C_UpdateNPCSpawnTime");
static_assert(offsetof(IBPUI_InGameScreenInterface_C_UpdateNPCSpawnTime, NPCWaveSpawnTime) == 0x000000, "Member 'IBPUI_InGameScreenInterface_C_UpdateNPCSpawnTime::NPCWaveSpawnTime' has a wrong offset!");

// Function iBPUI_InGameScreenInterface.iBPUI_InGameScreenInterface_C.UpdateSecurityStatus
// 0x0001 (0x0001 - 0x0000)
struct IBPUI_InGameScreenInterface_C_UpdateSecurityStatus final
{
public:
	bool                                          IsAlerted;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IBPUI_InGameScreenInterface_C_UpdateSecurityStatus) == 0x000001, "Wrong alignment on IBPUI_InGameScreenInterface_C_UpdateSecurityStatus");
static_assert(sizeof(IBPUI_InGameScreenInterface_C_UpdateSecurityStatus) == 0x000001, "Wrong size on IBPUI_InGameScreenInterface_C_UpdateSecurityStatus");
static_assert(offsetof(IBPUI_InGameScreenInterface_C_UpdateSecurityStatus, IsAlerted) == 0x000000, "Member 'IBPUI_InGameScreenInterface_C_UpdateSecurityStatus::IsAlerted' has a wrong offset!");

}
