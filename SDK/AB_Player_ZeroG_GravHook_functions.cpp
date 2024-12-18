#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_ZeroG_GravHook

#include "Basic.hpp"

#include "AB_Player_ZeroG_GravHook_classes.hpp"
#include "AB_Player_ZeroG_GravHook_parameters.hpp"


namespace SDK
{

// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.ExecuteUbergraph_AB_Player_ZeroG_GravHook
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Player_ZeroG_GravHook_C::ExecuteUbergraph_AB_Player_ZeroG_GravHook(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "ExecuteUbergraph_AB_Player_ZeroG_GravHook");

	Params::AB_Player_ZeroG_GravHook_C_ExecuteUbergraph_AB_Player_ZeroG_GravHook Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Player_ZeroG_GravHook_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Player_ZeroG_GravHook_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Player_ZeroG_GravHook_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "K2_OnEndAbility");

	Params::AB_Player_ZeroG_GravHook_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.OnFinish_1532085041E1A0A6BC738191027EE98E
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ZeroG_GravHook_C::OnFinish_1532085041E1A0A6BC738191027EE98E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "OnFinish_1532085041E1A0A6BC738191027EE98E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.OnFinish_7EEE7155484EB859190785869F6D5B88
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ZeroG_GravHook_C::OnFinish_7EEE7155484EB859190785869F6D5B88()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "OnFinish_7EEE7155484EB859190785869F6D5B88");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.OnCompleted_32514C2C4D94D0228AEB1B9F250001CD
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ZeroG_GravHook_C::OnCompleted_32514C2C4D94D0228AEB1B9F250001CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "OnCompleted_32514C2C4D94D0228AEB1B9F250001CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.OnBlendOut_32514C2C4D94D0228AEB1B9F250001CD
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ZeroG_GravHook_C::OnBlendOut_32514C2C4D94D0228AEB1B9F250001CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "OnBlendOut_32514C2C4D94D0228AEB1B9F250001CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.OnInterrupted_32514C2C4D94D0228AEB1B9F250001CD
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ZeroG_GravHook_C::OnInterrupted_32514C2C4D94D0228AEB1B9F250001CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "OnInterrupted_32514C2C4D94D0228AEB1B9F250001CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.OnCancelled_32514C2C4D94D0228AEB1B9F250001CD
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ZeroG_GravHook_C::OnCancelled_32514C2C4D94D0228AEB1B9F250001CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "OnCancelled_32514C2C4D94D0228AEB1B9F250001CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.OnSkipped_32514C2C4D94D0228AEB1B9F250001CD
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ZeroG_GravHook_C::OnSkipped_32514C2C4D94D0228AEB1B9F250001CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "OnSkipped_32514C2C4D94D0228AEB1B9F250001CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.EventReceived_3911D6CC48DF466C12FED4BDE50C8C58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_ZeroG_GravHook_C::EventReceived_3911D6CC48DF466C12FED4BDE50C8C58(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "EventReceived_3911D6CC48DF466C12FED4BDE50C8C58");

	Params::AB_Player_ZeroG_GravHook_C_EventReceived_3911D6CC48DF466C12FED4BDE50C8C58 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.EventReceived_5F335ED14F1127FC329AEC8829CE1E37
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_ZeroG_GravHook_C::EventReceived_5F335ED14F1127FC329AEC8829CE1E37(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "EventReceived_5F335ED14F1127FC329AEC8829CE1E37");

	Params::AB_Player_ZeroG_GravHook_C_EventReceived_5F335ED14F1127FC329AEC8829CE1E37 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.EventReceived_6291DE2542B60926F663D2B30029133B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_ZeroG_GravHook_C::EventReceived_6291DE2542B60926F663D2B30029133B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "EventReceived_6291DE2542B60926F663D2B30029133B");

	Params::AB_Player_ZeroG_GravHook_C_EventReceived_6291DE2542B60926F663D2B30029133B Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle       Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAB_Player_ZeroG_GravHook_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ZeroG_GravHook_C", "K2_CanActivateAbility");

	Params::AB_Player_ZeroG_GravHook_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

