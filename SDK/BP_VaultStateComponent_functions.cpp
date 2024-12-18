#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VaultStateComponent

#include "Basic.hpp"

#include "BP_VaultStateComponent_classes.hpp"
#include "BP_VaultStateComponent_parameters.hpp"


namespace SDK
{

// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventDamageProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultStateComponent_C::EventDamageProgress__DelegateSignature(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventDamageProgress__DelegateSignature");

	Params::BP_VaultStateComponent_C_EventDamageProgress__DelegateSignature Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventIntact__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventIntact__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventIntact__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventDamaged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventDamaged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventDamaged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventBroken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventBroken__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventBroken__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventCollapse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventCollapse__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventCollapse__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventOnAlerted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Alerted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_VaultStateComponent_C::EventOnAlerted__DelegateSignature(bool Alerted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventOnAlerted__DelegateSignature");

	Params::BP_VaultStateComponent_C_EventOnAlerted__DelegateSignature Parms{};

	Parms.Alerted = Alerted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventOnLockdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLockdown                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_VaultStateComponent_C::EventOnLockdown__DelegateSignature(bool IsLockdown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventOnLockdown__DelegateSignature");

	Params::BP_VaultStateComponent_C_EventOnLockdown__DelegateSignature Parms{};

	Parms.IsLockdown = IsLockdown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventDamagedDeactivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventDamagedDeactivated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventDamagedDeactivated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventHalted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventHalted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventHalted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.EventCooldown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::EventCooldown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "EventCooldown__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.ExecuteUbergraph_BP_VaultStateComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultStateComponent_C::ExecuteUbergraph_BP_VaultStateComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "ExecuteUbergraph_BP_VaultStateComponent");

	Params::BP_VaultStateComponent_C_ExecuteUbergraph_BP_VaultStateComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.Cooldown
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::Cooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "Cooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.Halted
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::Halted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "Halted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.TagChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    Added                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_VaultStateComponent_C::TagChanged(const struct FGameplayTag& Tag, bool Added)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "TagChanged");

	Params::BP_VaultStateComponent_C_TagChanged Parms{};

	Parms.Tag = std::move(Tag);
	Parms.Added = Added;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.Collapse
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::Collapse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "Collapse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.BindDelegates
// (Event, Public, BlueprintEvent)

void UBP_VaultStateComponent_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.Complete
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::Complete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "Complete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.Broken
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::Broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "Broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.Damaged
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::Damaged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "Damaged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultStateComponent.BP_VaultStateComponent_C.Intact
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultStateComponent_C::Intact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultStateComponent_C", "Intact");

	UObject::ProcessEvent(Func, nullptr);
}

}

