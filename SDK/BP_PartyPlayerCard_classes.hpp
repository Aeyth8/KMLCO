#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PartyPlayerCard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PartyPlayerCard.BP_PartyPlayerCard_C
// 0x0220 (0x04B0 - 0x0290)
class UBP_PartyPlayerCard_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Avatar_icon;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommon_SecondaryButton_C*              back_btn;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DecorateTexture;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommon_SecondaryButton_C*              Detail_button;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Disconnected_display;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Empty_display;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Empty_state;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDSecondaryActionButton_C*            Hud_back_btn;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDSecondaryActionButton_C*            Hud_mute_btn;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDSecondaryActionButton_C*            Hud_unmute_btn;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hyenalogo;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HyenasSlot;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG_1;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommon_SecondaryButton_C*              Invite_to_party_button;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommon_SecondaryButton_C*              Kick_from_party_btn;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_party_leader_icon;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommon_SecondaryButton_C*              Mute_btn;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Mute_hb;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Mute_sb;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MuteIcon;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MuteIcon_1;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Not_ready_display;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlatformIcon;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlatformIcon_1;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Player_card_state;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PlayerInfo;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCACommonTextBlock*                     PlayerName2;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCACommonTextBlock*                     PlayerNameText;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Prestige_tf;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Primary_state;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommon_SecondaryButton_C*              Promote_to_leader_btn;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Ready_display;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_1;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_2;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectBorder;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_5;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Specialist_image;                                  // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCATextBlock*                           Specialist_name_tf;                                // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        State_switcher;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommon_SecondaryButton_C*              Unmute_btn;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Unmute_sb;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCAPartyMemberUIData                   Member_Data;                                       // 0x03F0(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UCABaseSymbolElement*>           button_widgets;                                    // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FCAUITransitionDefinition              Goto_friends;                                      // 0x0468(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFrontend;                                        // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCardActivated;                                   // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsActive;                                          // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPartyPlayerCardStateChanged;                     // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCardActivated__DelegateSignature(class UBP_PartyPlayerCard_C* Card);
	void OnPartyPlayerCardStateChanged__DelegateSignature(class UBP_PartyPlayerCard_C* PartyPlayerCard, ECAPartyPlayerCardState PartyCardState);
	void ExecuteUbergraph_BP_PartyPlayerCard(int32 EntryPoint);
	void OnMuteListUpdated();
	void OnManualHUDBackButtonSelect();
	void SetActionsCardState();
	void BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_19_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_18_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_17_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_16_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_15_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_14_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_13_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_12_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_11_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_10_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void OnCardInactive();
	void SetDisconnectedState();
	void SetActiveState();
	void Destruct();
	void OnReturnFromPlayerOptions(const struct FCAUIEventData& Event_data);
	void SetupSpecialistDisplay();
	void BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_9_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_8_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_7_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_5_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void SetFocusOnFirstValidButton();
	void Construct();
	void UpdateButtonStates();
	void BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_3_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_1_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button);
	void BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature(class UCABaseUIElement* button);
	void SetEmptyState();
	void SetData(const struct FCAPartyMemberUIData& Member_data);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void UpdateMuteButtonState(bool IsMuted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PartyPlayerCard_C">();
	}
	static class UBP_PartyPlayerCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PartyPlayerCard_C>();
	}
};
static_assert(alignof(UBP_PartyPlayerCard_C) == 0x000008, "Wrong alignment on UBP_PartyPlayerCard_C");
static_assert(sizeof(UBP_PartyPlayerCard_C) == 0x0004B0, "Wrong size on UBP_PartyPlayerCard_C");
static_assert(offsetof(UBP_PartyPlayerCard_C, UberGraphFrame) == 0x000290, "Member 'UBP_PartyPlayerCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Avatar_icon) == 0x000298, "Member 'UBP_PartyPlayerCard_C::Avatar_icon' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, back_btn) == 0x0002A0, "Member 'UBP_PartyPlayerCard_C::back_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, DecorateTexture) == 0x0002A8, "Member 'UBP_PartyPlayerCard_C::DecorateTexture' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Detail_button) == 0x0002B0, "Member 'UBP_PartyPlayerCard_C::Detail_button' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Disconnected_display) == 0x0002B8, "Member 'UBP_PartyPlayerCard_C::Disconnected_display' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Empty_display) == 0x0002C0, "Member 'UBP_PartyPlayerCard_C::Empty_display' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Empty_state) == 0x0002C8, "Member 'UBP_PartyPlayerCard_C::Empty_state' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Hud_back_btn) == 0x0002D0, "Member 'UBP_PartyPlayerCard_C::Hud_back_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Hud_mute_btn) == 0x0002D8, "Member 'UBP_PartyPlayerCard_C::Hud_mute_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Hud_unmute_btn) == 0x0002E0, "Member 'UBP_PartyPlayerCard_C::Hud_unmute_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Hyenalogo) == 0x0002E8, "Member 'UBP_PartyPlayerCard_C::Hyenalogo' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, HyenasSlot) == 0x0002F0, "Member 'UBP_PartyPlayerCard_C::HyenasSlot' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Image_3) == 0x0002F8, "Member 'UBP_PartyPlayerCard_C::Image_3' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Image_BG) == 0x000300, "Member 'UBP_PartyPlayerCard_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Image_BG_1) == 0x000308, "Member 'UBP_PartyPlayerCard_C::Image_BG_1' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Invite_to_party_button) == 0x000310, "Member 'UBP_PartyPlayerCard_C::Invite_to_party_button' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Kick_from_party_btn) == 0x000318, "Member 'UBP_PartyPlayerCard_C::Kick_from_party_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, M_party_leader_icon) == 0x000320, "Member 'UBP_PartyPlayerCard_C::M_party_leader_icon' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Mute_btn) == 0x000328, "Member 'UBP_PartyPlayerCard_C::Mute_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Mute_hb) == 0x000330, "Member 'UBP_PartyPlayerCard_C::Mute_hb' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Mute_sb) == 0x000338, "Member 'UBP_PartyPlayerCard_C::Mute_sb' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, MuteIcon) == 0x000340, "Member 'UBP_PartyPlayerCard_C::MuteIcon' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, MuteIcon_1) == 0x000348, "Member 'UBP_PartyPlayerCard_C::MuteIcon_1' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Not_ready_display) == 0x000350, "Member 'UBP_PartyPlayerCard_C::Not_ready_display' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, PlatformIcon) == 0x000358, "Member 'UBP_PartyPlayerCard_C::PlatformIcon' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, PlatformIcon_1) == 0x000360, "Member 'UBP_PartyPlayerCard_C::PlatformIcon_1' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Player_card_state) == 0x000368, "Member 'UBP_PartyPlayerCard_C::Player_card_state' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, PlayerInfo) == 0x000370, "Member 'UBP_PartyPlayerCard_C::PlayerInfo' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, PlayerName2) == 0x000378, "Member 'UBP_PartyPlayerCard_C::PlayerName2' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, PlayerNameText) == 0x000380, "Member 'UBP_PartyPlayerCard_C::PlayerNameText' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Prestige_tf) == 0x000388, "Member 'UBP_PartyPlayerCard_C::Prestige_tf' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Primary_state) == 0x000390, "Member 'UBP_PartyPlayerCard_C::Primary_state' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Promote_to_leader_btn) == 0x000398, "Member 'UBP_PartyPlayerCard_C::Promote_to_leader_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Ready_display) == 0x0003A0, "Member 'UBP_PartyPlayerCard_C::Ready_display' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, RetainerBox_1) == 0x0003A8, "Member 'UBP_PartyPlayerCard_C::RetainerBox_1' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, RetainerBox_2) == 0x0003B0, "Member 'UBP_PartyPlayerCard_C::RetainerBox_2' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, SelectBorder) == 0x0003B8, "Member 'UBP_PartyPlayerCard_C::SelectBorder' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, SizeBox_5) == 0x0003C0, "Member 'UBP_PartyPlayerCard_C::SizeBox_5' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Specialist_image) == 0x0003C8, "Member 'UBP_PartyPlayerCard_C::Specialist_image' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Specialist_name_tf) == 0x0003D0, "Member 'UBP_PartyPlayerCard_C::Specialist_name_tf' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, State_switcher) == 0x0003D8, "Member 'UBP_PartyPlayerCard_C::State_switcher' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Unmute_btn) == 0x0003E0, "Member 'UBP_PartyPlayerCard_C::Unmute_btn' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Unmute_sb) == 0x0003E8, "Member 'UBP_PartyPlayerCard_C::Unmute_sb' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Member_Data) == 0x0003F0, "Member 'UBP_PartyPlayerCard_C::Member_Data' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, button_widgets) == 0x000458, "Member 'UBP_PartyPlayerCard_C::button_widgets' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, Goto_friends) == 0x000468, "Member 'UBP_PartyPlayerCard_C::Goto_friends' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, IsFrontend) == 0x000480, "Member 'UBP_PartyPlayerCard_C::IsFrontend' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, OnCardActivated) == 0x000488, "Member 'UBP_PartyPlayerCard_C::OnCardActivated' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, IsActive) == 0x000498, "Member 'UBP_PartyPlayerCard_C::IsActive' has a wrong offset!");
static_assert(offsetof(UBP_PartyPlayerCard_C, OnPartyPlayerCardStateChanged) == 0x0004A0, "Member 'UBP_PartyPlayerCard_C::OnPartyPlayerCardStateChanged' has a wrong offset!");

}
