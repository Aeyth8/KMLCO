#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_Cosplayer_InDisguise

#include "Basic.hpp"

#include "GCA_Cosplayer_InDisguise_classes.hpp"
#include "GCA_Cosplayer_InDisguise_parameters.hpp"


namespace SDK
{

// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.ExecuteUbergraph_GCA_Cosplayer_InDisguise
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCA_Cosplayer_InDisguise_C::ExecuteUbergraph_GCA_Cosplayer_InDisguise(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "ExecuteUbergraph_GCA_Cosplayer_InDisguise");

	Params::GCA_Cosplayer_InDisguise_C_ExecuteUbergraph_GCA_Cosplayer_InDisguise Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.OnRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCA_Cosplayer_InDisguise_C::OnRemoved(class AActor* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "OnRemoved");

	Params::GCA_Cosplayer_InDisguise_C_OnRemoved Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.OnActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCA_Cosplayer_InDisguise_C::OnActivated(class AActor* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "OnActivated");

	Params::GCA_Cosplayer_InDisguise_C_OnActivated Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCA_Cosplayer_InDisguise_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AGCA_Cosplayer_InDisguise_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AGCA_Cosplayer_InDisguise_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AGCA_Cosplayer_InDisguise_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AGCA_Cosplayer_InDisguise_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_Cosplayer_InDisguise_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "OnActive");

	Params::GCA_Cosplayer_InDisguise_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.WhileActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_Cosplayer_InDisguise_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "WhileActive");

	Params::GCA_Cosplayer_InDisguise_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCA_Cosplayer_InDisguise.GCA_Cosplayer_InDisguise_C.OnRemove
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_Cosplayer_InDisguise_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_C", "OnRemove");

	Params::GCA_Cosplayer_InDisguise_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
