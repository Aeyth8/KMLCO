#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CALocalisationRuntime

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct CALocalisationRuntime.CAText
// 0x0030 (0x0030 - 0x0000)
struct FCAText final
{
public:
	int64                                         M_loc_table_guid_hash;                             // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                         M_loc_id_hash;                                     // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10[0x20];                                      // 0x0010(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCAText) == 0x000008, "Wrong alignment on FCAText");
static_assert(sizeof(FCAText) == 0x000030, "Wrong size on FCAText");
static_assert(offsetof(FCAText, M_loc_table_guid_hash) == 0x000000, "Member 'FCAText::M_loc_table_guid_hash' has a wrong offset!");
static_assert(offsetof(FCAText, M_loc_id_hash) == 0x000008, "Member 'FCAText::M_loc_id_hash' has a wrong offset!");

// ScriptStruct CALocalisationRuntime.KeyValueStoreNewEntry
// 0x0040 (0x0040 - 0x0000)
struct FKeyValueStoreNewEntry final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Context;                                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 User;                                              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyValueStoreNewEntry) == 0x000008, "Wrong alignment on FKeyValueStoreNewEntry");
static_assert(sizeof(FKeyValueStoreNewEntry) == 0x000040, "Wrong size on FKeyValueStoreNewEntry");
static_assert(offsetof(FKeyValueStoreNewEntry, Key) == 0x000000, "Member 'FKeyValueStoreNewEntry::Key' has a wrong offset!");
static_assert(offsetof(FKeyValueStoreNewEntry, Value) == 0x000010, "Member 'FKeyValueStoreNewEntry::Value' has a wrong offset!");
static_assert(offsetof(FKeyValueStoreNewEntry, Context) == 0x000020, "Member 'FKeyValueStoreNewEntry::Context' has a wrong offset!");
static_assert(offsetof(FKeyValueStoreNewEntry, User) == 0x000030, "Member 'FKeyValueStoreNewEntry::User' has a wrong offset!");

// ScriptStruct CALocalisationRuntime.KeyValueStoreQueryResult
// 0x0030 (0x0030 - 0x0000)
struct FKeyValueStoreQueryResult final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Context;                                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyValueStoreQueryResult) == 0x000008, "Wrong alignment on FKeyValueStoreQueryResult");
static_assert(sizeof(FKeyValueStoreQueryResult) == 0x000030, "Wrong size on FKeyValueStoreQueryResult");
static_assert(offsetof(FKeyValueStoreQueryResult, Key) == 0x000000, "Member 'FKeyValueStoreQueryResult::Key' has a wrong offset!");
static_assert(offsetof(FKeyValueStoreQueryResult, Value) == 0x000010, "Member 'FKeyValueStoreQueryResult::Value' has a wrong offset!");
static_assert(offsetof(FKeyValueStoreQueryResult, Context) == 0x000020, "Member 'FKeyValueStoreQueryResult::Context' has a wrong offset!");

}
