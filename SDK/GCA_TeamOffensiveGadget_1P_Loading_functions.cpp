#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_TeamOffensiveGadget_1P_Loading

#include "Basic.hpp"

#include "GCA_TeamOffensiveGadget_1P_Loading_classes.hpp"
#include "GCA_TeamOffensiveGadget_1P_Loading_parameters.hpp"


namespace SDK
{

// Function GCA_TeamOffensiveGadget_1P_Loading.GCA_TeamOffensiveGadget_1P_Loading_C.ExecuteUbergraph_GCA_TeamOffensiveGadget_1P_Loading
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCA_TeamOffensiveGadget_1P_Loading_C::ExecuteUbergraph_GCA_TeamOffensiveGadget_1P_Loading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeamOffensiveGadget_1P_Loading_C", "ExecuteUbergraph_GCA_TeamOffensiveGadget_1P_Loading");

	Params::GCA_TeamOffensiveGadget_1P_Loading_C_ExecuteUbergraph_GCA_TeamOffensiveGadget_1P_Loading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCA_TeamOffensiveGadget_1P_Loading.GCA_TeamOffensiveGadget_1P_Loading_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGCA_TeamOffensiveGadget_1P_Loading_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeamOffensiveGadget_1P_Loading_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_TeamOffensiveGadget_1P_Loading.GCA_TeamOffensiveGadget_1P_Loading_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_TeamOffensiveGadget_1P_Loading_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeamOffensiveGadget_1P_Loading_C", "OnActive");

	Params::GCA_TeamOffensiveGadget_1P_Loading_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCA_TeamOffensiveGadget_1P_Loading.GCA_TeamOffensiveGadget_1P_Loading_C.OnRemove
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_TeamOffensiveGadget_1P_Loading_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeamOffensiveGadget_1P_Loading_C", "OnRemove");

	Params::GCA_TeamOffensiveGadget_1P_Loading_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

