#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_Grunt

#include "Basic.hpp"

#include "BP_NPC_Grunt_classes.hpp"


namespace SDK
{

// Function BP_NPC_Grunt.BP_NPC_Grunt_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Grunt_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_Grunt_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

