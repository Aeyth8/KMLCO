#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UmbraCulling

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct UmbraCulling.UmbraLevelVisibilityData
// 0x0050 (0x0050 - 0x0000)
struct FUmbraLevelVisibilityData final
{
public:
	TMap<class FName, int32>                      VisibilityIDs;                                     // 0x0000(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FUmbraLevelVisibilityData) == 0x000008, "Wrong alignment on FUmbraLevelVisibilityData");
static_assert(sizeof(FUmbraLevelVisibilityData) == 0x000050, "Wrong size on FUmbraLevelVisibilityData");
static_assert(offsetof(FUmbraLevelVisibilityData, VisibilityIDs) == 0x000000, "Member 'FUmbraLevelVisibilityData::VisibilityIDs' has a wrong offset!");

}
