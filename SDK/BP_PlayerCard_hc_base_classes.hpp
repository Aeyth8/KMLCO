#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerCard_hc_base

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PlayerCard_hc_base.BP_PlayerCard_hc_base_C
// 0x0008 (0x0298 - 0x0290)
class UBP_PlayerCard_hc_base_C final : public UUserWidget
{
public:
	class UImage*                                 Image_62;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerCard_hc_base_C">();
	}
	static class UBP_PlayerCard_hc_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerCard_hc_base_C>();
	}
};
static_assert(alignof(UBP_PlayerCard_hc_base_C) == 0x000008, "Wrong alignment on UBP_PlayerCard_hc_base_C");
static_assert(sizeof(UBP_PlayerCard_hc_base_C) == 0x000298, "Wrong size on UBP_PlayerCard_hc_base_C");
static_assert(offsetof(UBP_PlayerCard_hc_base_C, Image_62) == 0x000290, "Member 'UBP_PlayerCard_hc_base_C::Image_62' has a wrong offset!");

}
