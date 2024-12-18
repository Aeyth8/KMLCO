#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CAMediaSourceRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct CAMediaSourceRuntime.CAMediaSourceDeclarationTableRow
// 0x0030 (0x0038 - 0x0008)
struct FCAMediaSourceDeclarationTableRow final : public FTableRowBase
{
public:
	TSoftObjectPtr<class UBinkMediaSource>        M_media_source;                                    // 0x0008(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCAMediaSourceDeclarationTableRow) == 0x000008, "Wrong alignment on FCAMediaSourceDeclarationTableRow");
static_assert(sizeof(FCAMediaSourceDeclarationTableRow) == 0x000038, "Wrong size on FCAMediaSourceDeclarationTableRow");
static_assert(offsetof(FCAMediaSourceDeclarationTableRow, M_media_source) == 0x000008, "Member 'FCAMediaSourceDeclarationTableRow::M_media_source' has a wrong offset!");

}

