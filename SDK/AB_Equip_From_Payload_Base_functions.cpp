#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Equip_From_Payload_Base

#include "Basic.hpp"

#include "AB_Equip_From_Payload_Base_classes.hpp"
#include "AB_Equip_From_Payload_Base_parameters.hpp"


namespace SDK
{

// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.ExecuteUbergraph_AB_Equip_From_Payload_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Equip_From_Payload_Base_C::ExecuteUbergraph_AB_Equip_From_Payload_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "ExecuteUbergraph_AB_Equip_From_Payload_Base");

	Params::AB_Equip_From_Payload_Base_C_ExecuteUbergraph_AB_Equip_From_Payload_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.EmergencyBackupTimer
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::EmergencyBackupTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "EmergencyBackupTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Equip_From_Payload_Base_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Equip_From_Payload_Base_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Equip_From_Payload_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "K2_OnEndAbility");

	Params::AB_Equip_From_Payload_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.EventReceived_9484C2A645F67ABDD7A3858B6A6871CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Equip_From_Payload_Base_C::EventReceived_9484C2A645F67ABDD7A3858B6A6871CE(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "EventReceived_9484C2A645F67ABDD7A3858B6A6871CE");

	Params::AB_Equip_From_Payload_Base_C_EventReceived_9484C2A645F67ABDD7A3858B6A6871CE Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnSync_02008D834E53FA544F6470A7546A7289
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnSync_02008D834E53FA544F6470A7546A7289()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnSync_02008D834E53FA544F6470A7546A7289");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.EventReceived_1FB14F9D4F2977CA255D2AB28856C15F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Equip_From_Payload_Base_C::EventReceived_1FB14F9D4F2977CA255D2AB28856C15F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "EventReceived_1FB14F9D4F2977CA255D2AB28856C15F");

	Params::AB_Equip_From_Payload_Base_C_EventReceived_1FB14F9D4F2977CA255D2AB28856C15F Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnCompleted_4FA010A84B1BD4D76EFEA5B9807C3872
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnCompleted_4FA010A84B1BD4D76EFEA5B9807C3872()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnCompleted_4FA010A84B1BD4D76EFEA5B9807C3872");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnBlendOut_4FA010A84B1BD4D76EFEA5B9807C3872
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnBlendOut_4FA010A84B1BD4D76EFEA5B9807C3872()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnBlendOut_4FA010A84B1BD4D76EFEA5B9807C3872");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnInterrupted_4FA010A84B1BD4D76EFEA5B9807C3872
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnInterrupted_4FA010A84B1BD4D76EFEA5B9807C3872()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnInterrupted_4FA010A84B1BD4D76EFEA5B9807C3872");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnCancelled_4FA010A84B1BD4D76EFEA5B9807C3872
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnCancelled_4FA010A84B1BD4D76EFEA5B9807C3872()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnCancelled_4FA010A84B1BD4D76EFEA5B9807C3872");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnSkipped_4FA010A84B1BD4D76EFEA5B9807C3872
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnSkipped_4FA010A84B1BD4D76EFEA5B9807C3872()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnSkipped_4FA010A84B1BD4D76EFEA5B9807C3872");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnCompleted_C547D0964A6081C7615A14A081F27C8F
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnCompleted_C547D0964A6081C7615A14A081F27C8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnCompleted_C547D0964A6081C7615A14A081F27C8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnBlendOut_C547D0964A6081C7615A14A081F27C8F
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnBlendOut_C547D0964A6081C7615A14A081F27C8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnBlendOut_C547D0964A6081C7615A14A081F27C8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnInterrupted_C547D0964A6081C7615A14A081F27C8F
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnInterrupted_C547D0964A6081C7615A14A081F27C8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnInterrupted_C547D0964A6081C7615A14A081F27C8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnCancelled_C547D0964A6081C7615A14A081F27C8F
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnCancelled_C547D0964A6081C7615A14A081F27C8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnCancelled_C547D0964A6081C7615A14A081F27C8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.OnSkipped_C547D0964A6081C7615A14A081F27C8F
// (BlueprintCallable, BlueprintEvent)

void UAB_Equip_From_Payload_Base_C::OnSkipped_C547D0964A6081C7615A14A081F27C8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "OnSkipped_C547D0964A6081C7615A14A081F27C8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Equip_From_Payload_Base.AB_Equip_From_Payload_Base_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAB_Equip_From_Payload_Base_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Equip_From_Payload_Base_C", "K2_ShouldAbilityRespondToEvent");

	Params::AB_Equip_From_Payload_Base_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

