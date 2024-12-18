#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CAUIEvents

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CAUIEvents_structs.hpp"


namespace SDK
{

// Class CAUIEvents.CABaseUIEvent
// 0x0010 (0x0040 - 0x0030)
class UCABaseUIEvent : public UObject
{
public:
	struct FGameplayTag                           M_event_type;                                      // 0x0030(0x000C)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void UnbindFromUIEvent(const class UObject* Context, const struct FCAUIEventMapping& Mapping);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CABaseUIEvent">();
	}
	static class UCABaseUIEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCABaseUIEvent>();
	}
};
static_assert(alignof(UCABaseUIEvent) == 0x000008, "Wrong alignment on UCABaseUIEvent");
static_assert(sizeof(UCABaseUIEvent) == 0x000040, "Wrong size on UCABaseUIEvent");
static_assert(offsetof(UCABaseUIEvent, M_event_type) == 0x000030, "Member 'UCABaseUIEvent::M_event_type' has a wrong offset!");

// Class CAUIEvents.CAUIEventMappingContainer
// 0x0010 (0x0040 - 0x0030)
class UCAUIEventMappingContainer final : public UObject
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CAUIEventMappingContainer">();
	}
	static class UCAUIEventMappingContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCAUIEventMappingContainer>();
	}
};
static_assert(alignof(UCAUIEventMappingContainer) == 0x000008, "Wrong alignment on UCAUIEventMappingContainer");
static_assert(sizeof(UCAUIEventMappingContainer) == 0x000040, "Wrong size on UCAUIEventMappingContainer");

// Class CAUIEvents.CAUIEventMappingRegistry
// 0x0000 (0x0030 - 0x0030)
class ICAUIEventMappingRegistry final : public IInterface
{
public:
	void RegisterUIEventMapping(const struct FCAUIEventMapping& Mapping);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CAUIEventMappingRegistry">();
	}
	static class ICAUIEventMappingRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICAUIEventMappingRegistry>();
	}
};
static_assert(alignof(ICAUIEventMappingRegistry) == 0x000008, "Wrong alignment on ICAUIEventMappingRegistry");
static_assert(sizeof(ICAUIEventMappingRegistry) == 0x000030, "Wrong size on ICAUIEventMappingRegistry");

// Class CAUIEvents.CAUIEventPool
// 0x0010 (0x0040 - 0x0030)
class UCAUIEventPool final : public UObject
{
public:
	TArray<struct FCAUIEventPoolItem>             M_pool;                                            // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CAUIEventPool">();
	}
	static class UCAUIEventPool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCAUIEventPool>();
	}
};
static_assert(alignof(UCAUIEventPool) == 0x000008, "Wrong alignment on UCAUIEventPool");
static_assert(sizeof(UCAUIEventPool) == 0x000040, "Wrong size on UCAUIEventPool");
static_assert(offsetof(UCAUIEventPool, M_pool) == 0x000030, "Member 'UCAUIEventPool::M_pool' has a wrong offset!");

}

