#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CARendering

#include "Basic.hpp"

#include "CARendering_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CARendering.CAMeshBlock.GetIndexCount
// 0x0004 (0x0004 - 0x0000)
struct CAMeshBlock_GetIndexCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CAMeshBlock_GetIndexCount) == 0x000004, "Wrong alignment on CAMeshBlock_GetIndexCount");
static_assert(sizeof(CAMeshBlock_GetIndexCount) == 0x000004, "Wrong size on CAMeshBlock_GetIndexCount");
static_assert(offsetof(CAMeshBlock_GetIndexCount, ReturnValue) == 0x000000, "Member 'CAMeshBlock_GetIndexCount::ReturnValue' has a wrong offset!");

// Function CARendering.CAMeshBlock.GetVertexCount
// 0x0004 (0x0004 - 0x0000)
struct CAMeshBlock_GetVertexCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CAMeshBlock_GetVertexCount) == 0x000004, "Wrong alignment on CAMeshBlock_GetVertexCount");
static_assert(sizeof(CAMeshBlock_GetVertexCount) == 0x000004, "Wrong size on CAMeshBlock_GetVertexCount");
static_assert(offsetof(CAMeshBlock_GetVertexCount, ReturnValue) == 0x000000, "Member 'CAMeshBlock_GetVertexCount::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.AppendMeshBlock
// 0x0020 (0x0020 - 0x0000)
struct CARenderingLibrary_AppendMeshBlock final
{
public:
	const class UCAMeshBlock*                     Src_mesh_block;                                    // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCAMeshBlock*                           Dst_mesh_block;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Translation;                                       // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CARenderingLibrary_AppendMeshBlock) == 0x000008, "Wrong alignment on CARenderingLibrary_AppendMeshBlock");
static_assert(sizeof(CARenderingLibrary_AppendMeshBlock) == 0x000020, "Wrong size on CARenderingLibrary_AppendMeshBlock");
static_assert(offsetof(CARenderingLibrary_AppendMeshBlock, Src_mesh_block) == 0x000000, "Member 'CARenderingLibrary_AppendMeshBlock::Src_mesh_block' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_AppendMeshBlock, Dst_mesh_block) == 0x000008, "Member 'CARenderingLibrary_AppendMeshBlock::Dst_mesh_block' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_AppendMeshBlock, Translation) == 0x000010, "Member 'CARenderingLibrary_AppendMeshBlock::Translation' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ApplyLightmapType
// 0x0010 (0x0010 - 0x0000)
struct CARenderingLibrary_ApplyLightmapType final
{
public:
	class UStaticMeshComponent*                   Mesh_component;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELightmapType                                 Lightmap_type;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CARenderingLibrary_ApplyLightmapType) == 0x000008, "Wrong alignment on CARenderingLibrary_ApplyLightmapType");
static_assert(sizeof(CARenderingLibrary_ApplyLightmapType) == 0x000010, "Wrong size on CARenderingLibrary_ApplyLightmapType");
static_assert(offsetof(CARenderingLibrary_ApplyLightmapType, Mesh_component) == 0x000000, "Member 'CARenderingLibrary_ApplyLightmapType::Mesh_component' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ApplyLightmapType, Lightmap_type) == 0x000008, "Member 'CARenderingLibrary_ApplyLightmapType::Lightmap_type' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ApplyOverridenLightmapDensity
// 0x0010 (0x0010 - 0x0000)
struct CARenderingLibrary_ApplyOverridenLightmapDensity final
{
public:
	class UStaticMeshComponent*                   Mesh_component;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Lightmap_resolution;                               // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CARenderingLibrary_ApplyOverridenLightmapDensity) == 0x000008, "Wrong alignment on CARenderingLibrary_ApplyOverridenLightmapDensity");
static_assert(sizeof(CARenderingLibrary_ApplyOverridenLightmapDensity) == 0x000010, "Wrong size on CARenderingLibrary_ApplyOverridenLightmapDensity");
static_assert(offsetof(CARenderingLibrary_ApplyOverridenLightmapDensity, Mesh_component) == 0x000000, "Member 'CARenderingLibrary_ApplyOverridenLightmapDensity::Mesh_component' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ApplyOverridenLightmapDensity, Lightmap_resolution) == 0x000008, "Member 'CARenderingLibrary_ApplyOverridenLightmapDensity::Lightmap_resolution' has a wrong offset!");

// Function CARendering.CARenderingLibrary.CACreateRuntimeTexture
// 0x0018 (0x0018 - 0x0000)
struct CARenderingLibrary_CACreateRuntimeTexture final
{
public:
	int32                                         Width;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Height;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  Format;                                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Use_mips;                                          // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CARenderingLibrary_CACreateRuntimeTexture) == 0x000008, "Wrong alignment on CARenderingLibrary_CACreateRuntimeTexture");
static_assert(sizeof(CARenderingLibrary_CACreateRuntimeTexture) == 0x000018, "Wrong size on CARenderingLibrary_CACreateRuntimeTexture");
static_assert(offsetof(CARenderingLibrary_CACreateRuntimeTexture, Width) == 0x000000, "Member 'CARenderingLibrary_CACreateRuntimeTexture::Width' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_CACreateRuntimeTexture, Height) == 0x000004, "Member 'CARenderingLibrary_CACreateRuntimeTexture::Height' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_CACreateRuntimeTexture, Format) == 0x000008, "Member 'CARenderingLibrary_CACreateRuntimeTexture::Format' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_CACreateRuntimeTexture, Use_mips) == 0x000009, "Member 'CARenderingLibrary_CACreateRuntimeTexture::Use_mips' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_CACreateRuntimeTexture, ReturnValue) == 0x000010, "Member 'CARenderingLibrary_CACreateRuntimeTexture::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.CalculateAreaFromStaticMesh
// 0x0010 (0x0010 - 0x0000)
struct CARenderingLibrary_CalculateAreaFromStaticMesh final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CARenderingLibrary_CalculateAreaFromStaticMesh) == 0x000008, "Wrong alignment on CARenderingLibrary_CalculateAreaFromStaticMesh");
static_assert(sizeof(CARenderingLibrary_CalculateAreaFromStaticMesh) == 0x000010, "Wrong size on CARenderingLibrary_CalculateAreaFromStaticMesh");
static_assert(offsetof(CARenderingLibrary_CalculateAreaFromStaticMesh, Mesh) == 0x000000, "Member 'CARenderingLibrary_CalculateAreaFromStaticMesh::Mesh' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_CalculateAreaFromStaticMesh, ReturnValue) == 0x000008, "Member 'CARenderingLibrary_CalculateAreaFromStaticMesh::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ClearHighlightingOutline
// 0x0008 (0x0008 - 0x0000)
struct CARenderingLibrary_ClearHighlightingOutline final
{
public:
	class UPrimitiveComponent*                    Primitive;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CARenderingLibrary_ClearHighlightingOutline) == 0x000008, "Wrong alignment on CARenderingLibrary_ClearHighlightingOutline");
static_assert(sizeof(CARenderingLibrary_ClearHighlightingOutline) == 0x000008, "Wrong size on CARenderingLibrary_ClearHighlightingOutline");
static_assert(offsetof(CARenderingLibrary_ClearHighlightingOutline, Primitive) == 0x000000, "Member 'CARenderingLibrary_ClearHighlightingOutline::Primitive' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ExportMeshBlockToStaticMesh
// 0x0048 (0x0048 - 0x0000)
struct CARenderingLibrary_ExportMeshBlockToStaticMesh final
{
public:
	class FString                                 User_package_name;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Mesh_name;                                         // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCAMeshBlock*>                   Mesh_blocks;                                       // 0x0020(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0030(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UStaticMesh*                            ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CARenderingLibrary_ExportMeshBlockToStaticMesh) == 0x000008, "Wrong alignment on CARenderingLibrary_ExportMeshBlockToStaticMesh");
static_assert(sizeof(CARenderingLibrary_ExportMeshBlockToStaticMesh) == 0x000048, "Wrong size on CARenderingLibrary_ExportMeshBlockToStaticMesh");
static_assert(offsetof(CARenderingLibrary_ExportMeshBlockToStaticMesh, User_package_name) == 0x000000, "Member 'CARenderingLibrary_ExportMeshBlockToStaticMesh::User_package_name' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportMeshBlockToStaticMesh, Mesh_name) == 0x000010, "Member 'CARenderingLibrary_ExportMeshBlockToStaticMesh::Mesh_name' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportMeshBlockToStaticMesh, Mesh_blocks) == 0x000020, "Member 'CARenderingLibrary_ExportMeshBlockToStaticMesh::Mesh_blocks' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportMeshBlockToStaticMesh, Materials) == 0x000030, "Member 'CARenderingLibrary_ExportMeshBlockToStaticMesh::Materials' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportMeshBlockToStaticMesh, ReturnValue) == 0x000040, "Member 'CARenderingLibrary_ExportMeshBlockToStaticMesh::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ExportProceduralMeshComponentToStaticMesh
// 0x0040 (0x0040 - 0x0000)
struct CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh final
{
public:
	class FString                                 User_package_name;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Mesh_name;                                         // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProceduralMeshComponent*               Procedural_mesh_component;                         // 0x0020(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UStaticMesh*                            ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh) == 0x000008, "Wrong alignment on CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh");
static_assert(sizeof(CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh) == 0x000040, "Wrong size on CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh");
static_assert(offsetof(CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh, User_package_name) == 0x000000, "Member 'CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh::User_package_name' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh, Mesh_name) == 0x000010, "Member 'CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh::Mesh_name' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh, Procedural_mesh_component) == 0x000020, "Member 'CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh::Procedural_mesh_component' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh, Materials) == 0x000028, "Member 'CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh::Materials' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh, ReturnValue) == 0x000038, "Member 'CARenderingLibrary_ExportProceduralMeshComponentToStaticMesh::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ExtractMeshBlockFromStaticMesh
// 0x0018 (0x0018 - 0x0000)
struct CARenderingLibrary_ExtractMeshBlockFromStaticMesh final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Lod_index;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Section_index;                                     // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCAMeshBlock*                           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CARenderingLibrary_ExtractMeshBlockFromStaticMesh) == 0x000008, "Wrong alignment on CARenderingLibrary_ExtractMeshBlockFromStaticMesh");
static_assert(sizeof(CARenderingLibrary_ExtractMeshBlockFromStaticMesh) == 0x000018, "Wrong size on CARenderingLibrary_ExtractMeshBlockFromStaticMesh");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMesh, Mesh) == 0x000000, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMesh::Mesh' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMesh, Lod_index) == 0x000008, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMesh::Lod_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMesh, Section_index) == 0x00000C, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMesh::Section_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMesh, ReturnValue) == 0x000010, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMesh::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ExtractMeshBlockFromStaticMeshByMaterial
// 0x0018 (0x0018 - 0x0000)
struct CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Lod_index;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Material_index;                                    // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCAMeshBlock*                           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial) == 0x000008, "Wrong alignment on CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial");
static_assert(sizeof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial) == 0x000018, "Wrong size on CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial, Mesh) == 0x000000, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial::Mesh' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial, Lod_index) == 0x000008, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial::Lod_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial, Material_index) == 0x00000C, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial::Material_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial, ReturnValue) == 0x000010, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterial::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ExtractMeshBlockFromStaticMeshByMaterialTransformed
// 0x0050 (0x0050 - 0x0000)
struct CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Lod_index;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Material_index;                                    // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UCAMeshBlock*                           ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed) == 0x000010, "Wrong alignment on CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed");
static_assert(sizeof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed) == 0x000050, "Wrong size on CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed, Mesh) == 0x000000, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed::Mesh' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed, Lod_index) == 0x000008, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed::Lod_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed, Material_index) == 0x00000C, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed::Material_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed, Transform) == 0x000010, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed::Transform' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed, ReturnValue) == 0x000040, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshByMaterialTransformed::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.ExtractMeshBlockFromStaticMeshTransformed
// 0x0050 (0x0050 - 0x0000)
struct CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Lod_index;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Section_index;                                     // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UCAMeshBlock*                           ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed) == 0x000010, "Wrong alignment on CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed");
static_assert(sizeof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed) == 0x000050, "Wrong size on CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed, Mesh) == 0x000000, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed::Mesh' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed, Lod_index) == 0x000008, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed::Lod_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed, Section_index) == 0x00000C, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed::Section_index' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed, Transform) == 0x000010, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed::Transform' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed, ReturnValue) == 0x000040, "Member 'CARenderingLibrary_ExtractMeshBlockFromStaticMeshTransformed::ReturnValue' has a wrong offset!");

// Function CARendering.CARenderingLibrary.SetHighlightingOutlineRenderingEnabled
// 0x0001 (0x0001 - 0x0000)
struct CARenderingLibrary_SetHighlightingOutlineRenderingEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CARenderingLibrary_SetHighlightingOutlineRenderingEnabled) == 0x000001, "Wrong alignment on CARenderingLibrary_SetHighlightingOutlineRenderingEnabled");
static_assert(sizeof(CARenderingLibrary_SetHighlightingOutlineRenderingEnabled) == 0x000001, "Wrong size on CARenderingLibrary_SetHighlightingOutlineRenderingEnabled");
static_assert(offsetof(CARenderingLibrary_SetHighlightingOutlineRenderingEnabled, Enabled) == 0x000000, "Member 'CARenderingLibrary_SetHighlightingOutlineRenderingEnabled::Enabled' has a wrong offset!");

// Function CARendering.CARenderingLibrary.SetRenderHighlightingOutline
// 0x0018 (0x0018 - 0x0000)
struct CARenderingLibrary_SetRenderHighlightingOutline final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    Primitive;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECAOutlineMode                                Mode;                                              // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECAOutlineColor                               Color;                                             // 0x0011(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CARenderingLibrary_SetRenderHighlightingOutline) == 0x000008, "Wrong alignment on CARenderingLibrary_SetRenderHighlightingOutline");
static_assert(sizeof(CARenderingLibrary_SetRenderHighlightingOutline) == 0x000018, "Wrong size on CARenderingLibrary_SetRenderHighlightingOutline");
static_assert(offsetof(CARenderingLibrary_SetRenderHighlightingOutline, Enabled) == 0x000000, "Member 'CARenderingLibrary_SetRenderHighlightingOutline::Enabled' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_SetRenderHighlightingOutline, Primitive) == 0x000008, "Member 'CARenderingLibrary_SetRenderHighlightingOutline::Primitive' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_SetRenderHighlightingOutline, Mode) == 0x000010, "Member 'CARenderingLibrary_SetRenderHighlightingOutline::Mode' has a wrong offset!");
static_assert(offsetof(CARenderingLibrary_SetRenderHighlightingOutline, Color) == 0x000011, "Member 'CARenderingLibrary_SetRenderHighlightingOutline::Color' has a wrong offset!");

}
