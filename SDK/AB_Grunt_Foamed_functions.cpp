#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_Foamed

#include "Basic.hpp"

#include "AB_Grunt_Foamed_classes.hpp"
#include "AB_Grunt_Foamed_parameters.hpp"


namespace SDK
{

// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.ExecuteUbergraph_AB_Grunt_Foamed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_Foamed_C::ExecuteUbergraph_AB_Grunt_Foamed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "ExecuteUbergraph_AB_Grunt_Foamed");

	Params::AB_Grunt_Foamed_C_ExecuteUbergraph_AB_Grunt_Foamed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Grunt_Foamed_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "K2_OnEndAbility");

	Params::AB_Grunt_Foamed_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Grunt_Foamed_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Grunt_Foamed_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnCompleted_BCF9BFD44AC0B664080BC19C0EECC9C0
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnCompleted_BCF9BFD44AC0B664080BC19C0EECC9C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnCompleted_BCF9BFD44AC0B664080BC19C0EECC9C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnBlendOut_BCF9BFD44AC0B664080BC19C0EECC9C0
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnBlendOut_BCF9BFD44AC0B664080BC19C0EECC9C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnBlendOut_BCF9BFD44AC0B664080BC19C0EECC9C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnInterrupted_BCF9BFD44AC0B664080BC19C0EECC9C0
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnInterrupted_BCF9BFD44AC0B664080BC19C0EECC9C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnInterrupted_BCF9BFD44AC0B664080BC19C0EECC9C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnCancelled_BCF9BFD44AC0B664080BC19C0EECC9C0
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnCancelled_BCF9BFD44AC0B664080BC19C0EECC9C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnCancelled_BCF9BFD44AC0B664080BC19C0EECC9C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnSkipped_BCF9BFD44AC0B664080BC19C0EECC9C0
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnSkipped_BCF9BFD44AC0B664080BC19C0EECC9C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnSkipped_BCF9BFD44AC0B664080BC19C0EECC9C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnCompleted_A31A752A4FE6E81EBB975196F4499F44
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnCompleted_A31A752A4FE6E81EBB975196F4499F44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnCompleted_A31A752A4FE6E81EBB975196F4499F44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnBlendOut_A31A752A4FE6E81EBB975196F4499F44
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnBlendOut_A31A752A4FE6E81EBB975196F4499F44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnBlendOut_A31A752A4FE6E81EBB975196F4499F44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnInterrupted_A31A752A4FE6E81EBB975196F4499F44
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnInterrupted_A31A752A4FE6E81EBB975196F4499F44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnInterrupted_A31A752A4FE6E81EBB975196F4499F44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnCancelled_A31A752A4FE6E81EBB975196F4499F44
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnCancelled_A31A752A4FE6E81EBB975196F4499F44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnCancelled_A31A752A4FE6E81EBB975196F4499F44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Foamed.AB_Grunt_Foamed_C.OnSkipped_A31A752A4FE6E81EBB975196F4499F44
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Foamed_C::OnSkipped_A31A752A4FE6E81EBB975196F4499F44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Foamed_C", "OnSkipped_A31A752A4FE6E81EBB975196F4499F44");

	UObject::ProcessEvent(Func, nullptr);
}

}
