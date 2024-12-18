#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_highlight_menuItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_highlight_menuItem.BP_highlight_menuItem_C
// 0x0018 (0x02A8 - 0x0290)
class UBP_highlight_menuItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Scale;                                             // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_142;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_highlight_menuItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_highlight_menuItem_C">();
	}
	static class UBP_highlight_menuItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_highlight_menuItem_C>();
	}
};
static_assert(alignof(UBP_highlight_menuItem_C) == 0x000008, "Wrong alignment on UBP_highlight_menuItem_C");
static_assert(sizeof(UBP_highlight_menuItem_C) == 0x0002A8, "Wrong size on UBP_highlight_menuItem_C");
static_assert(offsetof(UBP_highlight_menuItem_C, UberGraphFrame) == 0x000290, "Member 'UBP_highlight_menuItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_highlight_menuItem_C, Scale) == 0x000298, "Member 'UBP_highlight_menuItem_C::Scale' has a wrong offset!");
static_assert(offsetof(UBP_highlight_menuItem_C, Image_142) == 0x0002A0, "Member 'UBP_highlight_menuItem_C::Image_142' has a wrong offset!");

}

