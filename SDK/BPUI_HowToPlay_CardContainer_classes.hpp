#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HowToPlay_CardContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_HowToPlay_CardContainer.BPUI_HowToPlay_CardContainer_C
// 0x00B8 (0x0348 - 0x0290)
class UBPUI_HowToPlay_CardContainer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Startup;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBPUI_HowToPlay_Card_C*                 Card_0;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HowToPlay_Card_C*                 Card_1;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HowToPlay_Card_C*                 Card_2;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HowToPlay_Spacer_C*               Spacer_0;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_HowToPlay_Spacer_C*               Spacer_1;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBPUI_HowToPlay_Card_C*>         Cards;                                             // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TSoftObjectPtr<class UCAGamemodeInstructions> Instructions;                                      // 0x02D8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Loaded_cards_count;                                // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPUI_HowToPlay_Screen_C*               Parent;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UCAGameModeConfiguration> Configuration;                                     // 0x0318(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_HowToPlay_CardContainer(int32 EntryPoint);
	void SetData(TSoftObjectPtr<class UCAGameModeConfiguration> Configuration_0);
	void OnCardsLoaded();
	void OnCardLoaded(int32 CardIndex);
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_90D9550548D47EB7D67A22AAC8D08472(class UObject* Loaded);
	void OnLoaded_60EC9D6844DCE7EAACDA049DC1F610FC(class UObject* Loaded);
	void SetInstructionsInternal(TSoftObjectPtr<class UCAGamemodeInstructions> Instructions_0);
	void SetConfigurationInternal(TSoftObjectPtr<class UCAGameModeConfiguration> Configuration_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_HowToPlay_CardContainer_C">();
	}
	static class UBPUI_HowToPlay_CardContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_HowToPlay_CardContainer_C>();
	}
};
static_assert(alignof(UBPUI_HowToPlay_CardContainer_C) == 0x000008, "Wrong alignment on UBPUI_HowToPlay_CardContainer_C");
static_assert(sizeof(UBPUI_HowToPlay_CardContainer_C) == 0x000348, "Wrong size on UBPUI_HowToPlay_CardContainer_C");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, UberGraphFrame) == 0x000290, "Member 'UBPUI_HowToPlay_CardContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Startup) == 0x000298, "Member 'UBPUI_HowToPlay_CardContainer_C::Startup' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Card_0) == 0x0002A0, "Member 'UBPUI_HowToPlay_CardContainer_C::Card_0' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Card_1) == 0x0002A8, "Member 'UBPUI_HowToPlay_CardContainer_C::Card_1' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Card_2) == 0x0002B0, "Member 'UBPUI_HowToPlay_CardContainer_C::Card_2' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Spacer_0) == 0x0002B8, "Member 'UBPUI_HowToPlay_CardContainer_C::Spacer_0' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Spacer_1) == 0x0002C0, "Member 'UBPUI_HowToPlay_CardContainer_C::Spacer_1' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Cards) == 0x0002C8, "Member 'UBPUI_HowToPlay_CardContainer_C::Cards' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Instructions) == 0x0002D8, "Member 'UBPUI_HowToPlay_CardContainer_C::Instructions' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Loaded_cards_count) == 0x000308, "Member 'UBPUI_HowToPlay_CardContainer_C::Loaded_cards_count' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Parent) == 0x000310, "Member 'UBPUI_HowToPlay_CardContainer_C::Parent' has a wrong offset!");
static_assert(offsetof(UBPUI_HowToPlay_CardContainer_C, Configuration) == 0x000318, "Member 'UBPUI_HowToPlay_CardContainer_C::Configuration' has a wrong offset!");

}

