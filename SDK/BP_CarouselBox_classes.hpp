#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarouselBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CarouselBox.BP_CarouselBox_C
// 0x0028 (0x0328 - 0x0300)
class UBP_CarouselBox_C final : public UCACarouselBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTriangleButton_C*                      Button_Next;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTriangleButton_C*                      Button_Previous;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Carousel_diagloue_trigger;                         // 0x0318(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CarouselBox(int32 EntryPoint);
	void PlayDialogueCarousel();
	void OnCarouselFocusedEntryChanged(const class UObject* Focused_data);
	void OnLateralPrevious(const struct FCAUIEventData& Event_data);
	void OnLateralNext(const struct FCAUIEventData& Event_data);
	void OnDisable();
	void OnEnable(bool Skip_unowned_entitlements);
	void InitCarousel();
	void BndEvt__BP_CarouselBox_Button_Previous_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
	void BndEvt__BP_CarouselBox_TriangleButton_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CarouselBox_C">();
	}
	static class UBP_CarouselBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CarouselBox_C>();
	}
};
static_assert(alignof(UBP_CarouselBox_C) == 0x000008, "Wrong alignment on UBP_CarouselBox_C");
static_assert(sizeof(UBP_CarouselBox_C) == 0x000328, "Wrong size on UBP_CarouselBox_C");
static_assert(offsetof(UBP_CarouselBox_C, UberGraphFrame) == 0x000300, "Member 'UBP_CarouselBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CarouselBox_C, Button_Next) == 0x000308, "Member 'UBP_CarouselBox_C::Button_Next' has a wrong offset!");
static_assert(offsetof(UBP_CarouselBox_C, Button_Previous) == 0x000310, "Member 'UBP_CarouselBox_C::Button_Previous' has a wrong offset!");
static_assert(offsetof(UBP_CarouselBox_C, Carousel_diagloue_trigger) == 0x000318, "Member 'UBP_CarouselBox_C::Carousel_diagloue_trigger' has a wrong offset!");

}
