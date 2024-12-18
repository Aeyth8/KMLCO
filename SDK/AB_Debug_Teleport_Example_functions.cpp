#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Debug_Teleport_Example

#include "Basic.hpp"

#include "AB_Debug_Teleport_Example_classes.hpp"
#include "AB_Debug_Teleport_Example_parameters.hpp"


namespace SDK
{

// Function AB_Debug_Teleport_Example.AB_Debug_Teleport_Example_C.ExecuteUbergraph_AB_Debug_Teleport_Example
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Debug_Teleport_Example_C::ExecuteUbergraph_AB_Debug_Teleport_Example(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Debug_Teleport_Example_C", "ExecuteUbergraph_AB_Debug_Teleport_Example");

	Params::AB_Debug_Teleport_Example_C_ExecuteUbergraph_AB_Debug_Teleport_Example Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Debug_Teleport_Example.AB_Debug_Teleport_Example_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_Debug_Teleport_Example_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Debug_Teleport_Example_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Debug_Teleport_Example.AB_Debug_Teleport_Example_C.LocationPicked_3AF8E154432F8665FDA1D5BAC2A09795
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Chosen_location_transform                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void UAB_Debug_Teleport_Example_C::LocationPicked_3AF8E154432F8665FDA1D5BAC2A09795(const struct FTransform& Chosen_location_transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Debug_Teleport_Example_C", "LocationPicked_3AF8E154432F8665FDA1D5BAC2A09795");

	Params::AB_Debug_Teleport_Example_C_LocationPicked_3AF8E154432F8665FDA1D5BAC2A09795 Parms{};

	Parms.Chosen_location_transform = std::move(Chosen_location_transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Debug_Teleport_Example.AB_Debug_Teleport_Example_C.ValidData_3AF8E154432F8665FDA1D5BAC2A09795
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Chosen_location_transform                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void UAB_Debug_Teleport_Example_C::ValidData_3AF8E154432F8665FDA1D5BAC2A09795(const struct FTransform& Chosen_location_transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Debug_Teleport_Example_C", "ValidData_3AF8E154432F8665FDA1D5BAC2A09795");

	Params::AB_Debug_Teleport_Example_C_ValidData_3AF8E154432F8665FDA1D5BAC2A09795 Parms{};

	Parms.Chosen_location_transform = std::move(Chosen_location_transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Debug_Teleport_Example.AB_Debug_Teleport_Example_C.Cancelled_3AF8E154432F8665FDA1D5BAC2A09795
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Chosen_location_transform                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void UAB_Debug_Teleport_Example_C::Cancelled_3AF8E154432F8665FDA1D5BAC2A09795(const struct FTransform& Chosen_location_transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Debug_Teleport_Example_C", "Cancelled_3AF8E154432F8665FDA1D5BAC2A09795");

	Params::AB_Debug_Teleport_Example_C_Cancelled_3AF8E154432F8665FDA1D5BAC2A09795 Parms{};

	Parms.Chosen_location_transform = std::move(Chosen_location_transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Debug_Teleport_Example.AB_Debug_Teleport_Example_C.LocationEnter_3AF8E154432F8665FDA1D5BAC2A09795
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Chosen_location_transform                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void UAB_Debug_Teleport_Example_C::LocationEnter_3AF8E154432F8665FDA1D5BAC2A09795(const struct FTransform& Chosen_location_transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Debug_Teleport_Example_C", "LocationEnter_3AF8E154432F8665FDA1D5BAC2A09795");

	Params::AB_Debug_Teleport_Example_C_LocationEnter_3AF8E154432F8665FDA1D5BAC2A09795 Parms{};

	Parms.Chosen_location_transform = std::move(Chosen_location_transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Debug_Teleport_Example.AB_Debug_Teleport_Example_C.LocationLeave_3AF8E154432F8665FDA1D5BAC2A09795
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Chosen_location_transform                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void UAB_Debug_Teleport_Example_C::LocationLeave_3AF8E154432F8665FDA1D5BAC2A09795(const struct FTransform& Chosen_location_transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Debug_Teleport_Example_C", "LocationLeave_3AF8E154432F8665FDA1D5BAC2A09795");

	Params::AB_Debug_Teleport_Example_C_LocationLeave_3AF8E154432F8665FDA1D5BAC2A09795 Parms{};

	Parms.Chosen_location_transform = std::move(Chosen_location_transform);

	UObject::ProcessEvent(Func, &Parms);
}

}

