#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleHeader

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_SimpleHeader.BP_SimpleHeader_C
// 0x0028 (0x02B8 - 0x0290)
class UBP_SimpleHeader_C final : public UUserWidget
{
public:
	class UImage*                                 Image_67;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Primary_text;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Rounded_background;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Secondary_text;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Suffix_text;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleHeader_C">();
	}
	static class UBP_SimpleHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SimpleHeader_C>();
	}
};
static_assert(alignof(UBP_SimpleHeader_C) == 0x000008, "Wrong alignment on UBP_SimpleHeader_C");
static_assert(sizeof(UBP_SimpleHeader_C) == 0x0002B8, "Wrong size on UBP_SimpleHeader_C");
static_assert(offsetof(UBP_SimpleHeader_C, Image_67) == 0x000290, "Member 'UBP_SimpleHeader_C::Image_67' has a wrong offset!");
static_assert(offsetof(UBP_SimpleHeader_C, Primary_text) == 0x000298, "Member 'UBP_SimpleHeader_C::Primary_text' has a wrong offset!");
static_assert(offsetof(UBP_SimpleHeader_C, Rounded_background) == 0x0002A0, "Member 'UBP_SimpleHeader_C::Rounded_background' has a wrong offset!");
static_assert(offsetof(UBP_SimpleHeader_C, Secondary_text) == 0x0002A8, "Member 'UBP_SimpleHeader_C::Secondary_text' has a wrong offset!");
static_assert(offsetof(UBP_SimpleHeader_C, Suffix_text) == 0x0002B0, "Member 'UBP_SimpleHeader_C::Suffix_text' has a wrong offset!");

}
