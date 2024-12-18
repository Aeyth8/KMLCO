#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CAUIEvents

#include "Basic.hpp"

#include "CAUIEvents_classes.hpp"
#include "CAUIEvents_parameters.hpp"


namespace SDK
{

// Function CAUIEvents.CABaseUIEvent.UnbindFromUIEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          Context                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCAUIEventMapping                Mapping                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCABaseUIEvent::UnbindFromUIEvent(const class UObject* Context, const struct FCAUIEventMapping& Mapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CABaseUIEvent", "UnbindFromUIEvent");

	Params::CABaseUIEvent_UnbindFromUIEvent Parms{};

	Parms.Context = Context;
	Parms.Mapping = std::move(Mapping);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CAUIEvents.CAUIEventMappingRegistry.RegisterUIEventMapping
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FCAUIEventMapping                Mapping                                                (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICAUIEventMappingRegistry::RegisterUIEventMapping(const struct FCAUIEventMapping& Mapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CAUIEventMappingRegistry", "RegisterUIEventMapping");

	Params::CAUIEventMappingRegistry_RegisterUIEventMapping Parms{};

	Parms.Mapping = std::move(Mapping);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

