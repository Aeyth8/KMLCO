#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CAKitBuilderRuntime

#include "Basic.hpp"

#include "CAKitBuilderRuntime_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class CAKitBuilderRuntime.CADecalMaterialMergeActor
// 0x0000 (0x0268 - 0x0268)
class ACADecalMaterialMergeActor final : public AStaticMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CADecalMaterialMergeActor">();
	}
	static class ACADecalMaterialMergeActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACADecalMaterialMergeActor>();
	}
};
static_assert(alignof(ACADecalMaterialMergeActor) == 0x000008, "Wrong alignment on ACADecalMaterialMergeActor");
static_assert(sizeof(ACADecalMaterialMergeActor) == 0x000268, "Wrong size on ACADecalMaterialMergeActor");

// Class CAKitBuilderRuntime.KitPieceDataAsset
// 0x0018 (0x0050 - 0x0038)
class UKitPieceDataAsset final : public UDataAsset
{
public:
	class FName                                   M_row_name;                                        // 0x0038(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   M_kitset_name;                                     // 0x0044(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KitPieceDataAsset">();
	}
	static class UKitPieceDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKitPieceDataAsset>();
	}
};
static_assert(alignof(UKitPieceDataAsset) == 0x000008, "Wrong alignment on UKitPieceDataAsset");
static_assert(sizeof(UKitPieceDataAsset) == 0x000050, "Wrong size on UKitPieceDataAsset");
static_assert(offsetof(UKitPieceDataAsset, M_row_name) == 0x000038, "Member 'UKitPieceDataAsset::M_row_name' has a wrong offset!");
static_assert(offsetof(UKitPieceDataAsset, M_kitset_name) == 0x000044, "Member 'UKitPieceDataAsset::M_kitset_name' has a wrong offset!");

// Class CAKitBuilderRuntime.CAKitPiece
// 0x0000 (0x0258 - 0x0258)
class ACAKitPiece final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CAKitPiece">();
	}
	static class ACAKitPiece* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACAKitPiece>();
	}
};
static_assert(alignof(ACAKitPiece) == 0x000008, "Wrong alignment on ACAKitPiece");
static_assert(sizeof(ACAKitPiece) == 0x000258, "Wrong size on ACAKitPiece");

// Class CAKitBuilderRuntime.CAKitPieceWhiteboxAssetUserData
// 0x0020 (0x0050 - 0x0030)
class UCAKitPieceWhiteboxAssetUserData final : public UAssetUserData
{
public:
	bool                                          M_cut_hole_in_capper_collision;                    // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EArchetype>                            M_archetype_groups;                                // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EKitPieceRole                                 M_role;                                            // 0x0048(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CAKitPieceWhiteboxAssetUserData">();
	}
	static class UCAKitPieceWhiteboxAssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCAKitPieceWhiteboxAssetUserData>();
	}
};
static_assert(alignof(UCAKitPieceWhiteboxAssetUserData) == 0x000008, "Wrong alignment on UCAKitPieceWhiteboxAssetUserData");
static_assert(sizeof(UCAKitPieceWhiteboxAssetUserData) == 0x000050, "Wrong size on UCAKitPieceWhiteboxAssetUserData");
static_assert(offsetof(UCAKitPieceWhiteboxAssetUserData, M_cut_hole_in_capper_collision) == 0x000030, "Member 'UCAKitPieceWhiteboxAssetUserData::M_cut_hole_in_capper_collision' has a wrong offset!");
static_assert(offsetof(UCAKitPieceWhiteboxAssetUserData, M_archetype_groups) == 0x000038, "Member 'UCAKitPieceWhiteboxAssetUserData::M_archetype_groups' has a wrong offset!");
static_assert(offsetof(UCAKitPieceWhiteboxAssetUserData, M_role) == 0x000048, "Member 'UCAKitPieceWhiteboxAssetUserData::M_role' has a wrong offset!");

// Class CAKitBuilderRuntime.CAKitPieceDisplayAssetUserData
// 0x0008 (0x0038 - 0x0030)
class UCAKitPieceDisplayAssetUserData final : public UAssetUserData
{
public:
	bool                                          M_exclude_from_floor_tool;                         // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M_exclude_from_ceiling_tool;                       // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M_is_kitpiece_additive_default;                    // 0x0032(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M_ground_floor_only;                               // 0x0033(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFloorUsage                                   M_floor_usage;                                     // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CAKitPieceDisplayAssetUserData">();
	}
	static class UCAKitPieceDisplayAssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCAKitPieceDisplayAssetUserData>();
	}
};
static_assert(alignof(UCAKitPieceDisplayAssetUserData) == 0x000008, "Wrong alignment on UCAKitPieceDisplayAssetUserData");
static_assert(sizeof(UCAKitPieceDisplayAssetUserData) == 0x000038, "Wrong size on UCAKitPieceDisplayAssetUserData");
static_assert(offsetof(UCAKitPieceDisplayAssetUserData, M_exclude_from_floor_tool) == 0x000030, "Member 'UCAKitPieceDisplayAssetUserData::M_exclude_from_floor_tool' has a wrong offset!");
static_assert(offsetof(UCAKitPieceDisplayAssetUserData, M_exclude_from_ceiling_tool) == 0x000031, "Member 'UCAKitPieceDisplayAssetUserData::M_exclude_from_ceiling_tool' has a wrong offset!");
static_assert(offsetof(UCAKitPieceDisplayAssetUserData, M_is_kitpiece_additive_default) == 0x000032, "Member 'UCAKitPieceDisplayAssetUserData::M_is_kitpiece_additive_default' has a wrong offset!");
static_assert(offsetof(UCAKitPieceDisplayAssetUserData, M_ground_floor_only) == 0x000033, "Member 'UCAKitPieceDisplayAssetUserData::M_ground_floor_only' has a wrong offset!");
static_assert(offsetof(UCAKitPieceDisplayAssetUserData, M_floor_usage) == 0x000034, "Member 'UCAKitPieceDisplayAssetUserData::M_floor_usage' has a wrong offset!");

// Class CAKitBuilderRuntime.CAMergedKitPieceBuildData
// 0x0070 (0x00A0 - 0x0030)
class UCAMergedKitPieceBuildData final : public UAssetUserData
{
public:
	int32                                         M_kitpiece_data_version;                           // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   M_kitpiece_row_name;                               // 0x0034(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   M_kitpiece_table_name;                             // 0x0040(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TSoftObjectPtr<class UStaticMesh>, struct FGuid> M_built_asset_guids;                               // 0x0050(0x0050)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CAMergedKitPieceBuildData">();
	}
	static class UCAMergedKitPieceBuildData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCAMergedKitPieceBuildData>();
	}
};
static_assert(alignof(UCAMergedKitPieceBuildData) == 0x000008, "Wrong alignment on UCAMergedKitPieceBuildData");
static_assert(sizeof(UCAMergedKitPieceBuildData) == 0x0000A0, "Wrong size on UCAMergedKitPieceBuildData");
static_assert(offsetof(UCAMergedKitPieceBuildData, M_kitpiece_data_version) == 0x000030, "Member 'UCAMergedKitPieceBuildData::M_kitpiece_data_version' has a wrong offset!");
static_assert(offsetof(UCAMergedKitPieceBuildData, M_kitpiece_row_name) == 0x000034, "Member 'UCAMergedKitPieceBuildData::M_kitpiece_row_name' has a wrong offset!");
static_assert(offsetof(UCAMergedKitPieceBuildData, M_kitpiece_table_name) == 0x000040, "Member 'UCAMergedKitPieceBuildData::M_kitpiece_table_name' has a wrong offset!");
static_assert(offsetof(UCAMergedKitPieceBuildData, M_built_asset_guids) == 0x000050, "Member 'UCAMergedKitPieceBuildData::M_built_asset_guids' has a wrong offset!");

}
