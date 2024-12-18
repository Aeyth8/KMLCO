#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CALocalisationRuntime

#include "Basic.hpp"

#include "CALocalisationRuntime_structs.hpp"


namespace SDK::Params
{

// Function CALocalisationRuntime.CALocalisationBlueprintFunctionLibrary.MakeTextFromCAText
// 0x0050 (0x0050 - 0x0000)
struct CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCAText                                Ca_text;                                           // 0x0008(0x0030)(Parm, NativeAccessSpecifierPublic)
	class FText                                   Text;                                              // 0x0038(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText) == 0x000008, "Wrong alignment on CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText");
static_assert(sizeof(CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText) == 0x000050, "Wrong size on CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText");
static_assert(offsetof(CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText, WorldContextObject) == 0x000000, "Member 'CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText::WorldContextObject' has a wrong offset!");
static_assert(offsetof(CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText, Ca_text) == 0x000008, "Member 'CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText::Ca_text' has a wrong offset!");
static_assert(offsetof(CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText, Text) == 0x000038, "Member 'CALocalisationBlueprintFunctionLibrary_MakeTextFromCAText::Text' has a wrong offset!");

}

