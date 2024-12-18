#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VFXExtensions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class VFXExtensions.CACascadeModuleCustomAcceleration
// 0x0000 (0x0040 - 0x0040)
class UCACascadeModuleCustomAcceleration final : public UParticleModuleAccelerationBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CACascadeModuleCustomAcceleration">();
	}
	static class UCACascadeModuleCustomAcceleration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCACascadeModuleCustomAcceleration>();
	}
};
static_assert(alignof(UCACascadeModuleCustomAcceleration) == 0x000008, "Wrong alignment on UCACascadeModuleCustomAcceleration");
static_assert(sizeof(UCACascadeModuleCustomAcceleration) == 0x000040, "Wrong size on UCACascadeModuleCustomAcceleration");

// Class VFXExtensions.CACascadeModuleIcoSphere
// 0x0070 (0x00B0 - 0x0040)
class UCACascadeModuleIcoSphere final : public UParticleModuleSpawnBase
{
public:
	uint32                                        M_subdivisions;                                    // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M_per_face_emission;                               // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_spawn_offset;                                    // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  M_velocity;                                        // 0x0050(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x30];                                      // 0x0080(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CACascadeModuleIcoSphere">();
	}
	static class UCACascadeModuleIcoSphere* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCACascadeModuleIcoSphere>();
	}
};
static_assert(alignof(UCACascadeModuleIcoSphere) == 0x000008, "Wrong alignment on UCACascadeModuleIcoSphere");
static_assert(sizeof(UCACascadeModuleIcoSphere) == 0x0000B0, "Wrong size on UCACascadeModuleIcoSphere");
static_assert(offsetof(UCACascadeModuleIcoSphere, M_subdivisions) == 0x000040, "Member 'UCACascadeModuleIcoSphere::M_subdivisions' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleIcoSphere, M_per_face_emission) == 0x000044, "Member 'UCACascadeModuleIcoSphere::M_per_face_emission' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleIcoSphere, M_spawn_offset) == 0x000048, "Member 'UCACascadeModuleIcoSphere::M_spawn_offset' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleIcoSphere, M_velocity) == 0x000050, "Member 'UCACascadeModuleIcoSphere::M_velocity' has a wrong offset!");

// Class VFXExtensions.CACascadeModuleLifetimeBySpeed
// 0x0068 (0x00A0 - 0x0038)
class UCACascadeModuleLifetimeBySpeed final : public UParticleModuleLifetimeBase
{
public:
	float                                         M_min_speed;                                       // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         M_max_speed;                                       // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  M_min_lifetime;                                    // 0x0040(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  M_max_lifetime;                                    // 0x0070(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CACascadeModuleLifetimeBySpeed">();
	}
	static class UCACascadeModuleLifetimeBySpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCACascadeModuleLifetimeBySpeed>();
	}
};
static_assert(alignof(UCACascadeModuleLifetimeBySpeed) == 0x000008, "Wrong alignment on UCACascadeModuleLifetimeBySpeed");
static_assert(sizeof(UCACascadeModuleLifetimeBySpeed) == 0x0000A0, "Wrong size on UCACascadeModuleLifetimeBySpeed");
static_assert(offsetof(UCACascadeModuleLifetimeBySpeed, M_min_speed) == 0x000038, "Member 'UCACascadeModuleLifetimeBySpeed::M_min_speed' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleLifetimeBySpeed, M_max_speed) == 0x00003C, "Member 'UCACascadeModuleLifetimeBySpeed::M_max_speed' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleLifetimeBySpeed, M_min_lifetime) == 0x000040, "Member 'UCACascadeModuleLifetimeBySpeed::M_min_lifetime' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleLifetimeBySpeed, M_max_lifetime) == 0x000070, "Member 'UCACascadeModuleLifetimeBySpeed::M_max_lifetime' has a wrong offset!");

// Class VFXExtensions.CACascadeModuleSpawnMuzzleFlash
// 0x00C0 (0x0100 - 0x0040)
class UCACascadeModuleSpawnMuzzleFlash final : public UParticleModuleSpawnBase
{
public:
	struct FRawDistributionFloat                  M_segment_count;                                   // 0x0040(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  M_radius;                                          // 0x0070(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  M_segment_offset;                                  // 0x00A0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  M_velocity;                                        // 0x00D0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CACascadeModuleSpawnMuzzleFlash">();
	}
	static class UCACascadeModuleSpawnMuzzleFlash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCACascadeModuleSpawnMuzzleFlash>();
	}
};
static_assert(alignof(UCACascadeModuleSpawnMuzzleFlash) == 0x000008, "Wrong alignment on UCACascadeModuleSpawnMuzzleFlash");
static_assert(sizeof(UCACascadeModuleSpawnMuzzleFlash) == 0x000100, "Wrong size on UCACascadeModuleSpawnMuzzleFlash");
static_assert(offsetof(UCACascadeModuleSpawnMuzzleFlash, M_segment_count) == 0x000040, "Member 'UCACascadeModuleSpawnMuzzleFlash::M_segment_count' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleSpawnMuzzleFlash, M_radius) == 0x000070, "Member 'UCACascadeModuleSpawnMuzzleFlash::M_radius' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleSpawnMuzzleFlash, M_segment_offset) == 0x0000A0, "Member 'UCACascadeModuleSpawnMuzzleFlash::M_segment_offset' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleSpawnMuzzleFlash, M_velocity) == 0x0000D0, "Member 'UCACascadeModuleSpawnMuzzleFlash::M_velocity' has a wrong offset!");

// Class VFXExtensions.CACascadeModuleSpawnRateDirectional
// 0x0040 (0x0080 - 0x0040)
class UCACascadeModuleSpawnRateDirectional final : public UParticleModuleSpawnBase
{
public:
	struct FVector                                M_foward;                                          // 0x0040(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  Rate;                                              // 0x0050(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CACascadeModuleSpawnRateDirectional">();
	}
	static class UCACascadeModuleSpawnRateDirectional* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCACascadeModuleSpawnRateDirectional>();
	}
};
static_assert(alignof(UCACascadeModuleSpawnRateDirectional) == 0x000008, "Wrong alignment on UCACascadeModuleSpawnRateDirectional");
static_assert(sizeof(UCACascadeModuleSpawnRateDirectional) == 0x000080, "Wrong size on UCACascadeModuleSpawnRateDirectional");
static_assert(offsetof(UCACascadeModuleSpawnRateDirectional, M_foward) == 0x000040, "Member 'UCACascadeModuleSpawnRateDirectional::M_foward' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleSpawnRateDirectional, Rate) == 0x000050, "Member 'UCACascadeModuleSpawnRateDirectional::Rate' has a wrong offset!");

// Class VFXExtensions.CACascadeModuleSpawnRateSpeed
// 0x0068 (0x00A8 - 0x0040)
class UCACascadeModuleSpawnRateSpeed final : public UParticleModuleSpawnBase
{
public:
	float                                         M_min_speed;                                       // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         M_max_speed;                                       // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  M_min_rate;                                        // 0x0048(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  M_max_rate;                                        // 0x0078(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CACascadeModuleSpawnRateSpeed">();
	}
	static class UCACascadeModuleSpawnRateSpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCACascadeModuleSpawnRateSpeed>();
	}
};
static_assert(alignof(UCACascadeModuleSpawnRateSpeed) == 0x000008, "Wrong alignment on UCACascadeModuleSpawnRateSpeed");
static_assert(sizeof(UCACascadeModuleSpawnRateSpeed) == 0x0000A8, "Wrong size on UCACascadeModuleSpawnRateSpeed");
static_assert(offsetof(UCACascadeModuleSpawnRateSpeed, M_min_speed) == 0x000040, "Member 'UCACascadeModuleSpawnRateSpeed::M_min_speed' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleSpawnRateSpeed, M_max_speed) == 0x000044, "Member 'UCACascadeModuleSpawnRateSpeed::M_max_speed' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleSpawnRateSpeed, M_min_rate) == 0x000048, "Member 'UCACascadeModuleSpawnRateSpeed::M_min_rate' has a wrong offset!");
static_assert(offsetof(UCACascadeModuleSpawnRateSpeed, M_max_rate) == 0x000078, "Member 'UCACascadeModuleSpawnRateSpeed::M_max_rate' has a wrong offset!");

}

