#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarouselBoxItemDisplayElement

#include "Basic.hpp"

#include "BP_CarouselBoxItemDisplayElement_classes.hpp"
#include "BP_CarouselBoxItemDisplayElement_parameters.hpp"


namespace SDK
{

// Function BP_CarouselBoxItemDisplayElement.BP_CarouselBoxItemDisplayElement_C.ExecuteUbergraph_BP_CarouselBoxItemDisplayElement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CarouselBoxItemDisplayElement_C::ExecuteUbergraph_BP_CarouselBoxItemDisplayElement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarouselBoxItemDisplayElement_C", "ExecuteUbergraph_BP_CarouselBoxItemDisplayElement");

	Params::BP_CarouselBoxItemDisplayElement_C_ExecuteUbergraph_BP_CarouselBoxItemDisplayElement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarouselBoxItemDisplayElement.BP_CarouselBoxItemDisplayElement_C.SetDisplay
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCAServicesDataItem*              Services_data                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CarouselBoxItemDisplayElement_C::SetDisplay(const class UCAServicesDataItem* Services_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarouselBoxItemDisplayElement_C", "SetDisplay");

	Params::BP_CarouselBoxItemDisplayElement_C_SetDisplay Parms{};

	Parms.Services_data = Services_data;

	UObject::ProcessEvent(Func, &Parms);
}

}

