#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_PostGame_Teammate_new

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_PostGame_Teammate_new.BPUI_PostGame_Teammate_new_C
// 0x0018 (0x0380 - 0x0368)
class UBPUI_PostGame_Teammate_new_C final : public UCAPostGameTeammateWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_194;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PlayerImageMaterialInst;                           // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_PostGame_Teammate_new(int32 EntryPoint);
	void OnInitialized();
	void OnPlayerDisconnected(ECAEndGameReason M_end_game_reason);
	void OnPlayerTimedOut();
	void OnPlayerKilled();
	void OnPlayerExtracted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_PostGame_Teammate_new_C">();
	}
	static class UBPUI_PostGame_Teammate_new_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_PostGame_Teammate_new_C>();
	}
};
static_assert(alignof(UBPUI_PostGame_Teammate_new_C) == 0x000008, "Wrong alignment on UBPUI_PostGame_Teammate_new_C");
static_assert(sizeof(UBPUI_PostGame_Teammate_new_C) == 0x000380, "Wrong size on UBPUI_PostGame_Teammate_new_C");
static_assert(offsetof(UBPUI_PostGame_Teammate_new_C, UberGraphFrame) == 0x000368, "Member 'UBPUI_PostGame_Teammate_new_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_PostGame_Teammate_new_C, Image_194) == 0x000370, "Member 'UBPUI_PostGame_Teammate_new_C::Image_194' has a wrong offset!");
static_assert(offsetof(UBPUI_PostGame_Teammate_new_C, PlayerImageMaterialInst) == 0x000378, "Member 'UBPUI_PostGame_Teammate_new_C::PlayerImageMaterialInst' has a wrong offset!");

}

