#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndTextResource

#include "Basic.hpp"

#include "EndTextResource_structs.hpp"


namespace SDK::Params
{

// Function EndTextResource.EndTextResource.GetText
// 0x0020 (0x0020 - 0x0000)
struct EndTextResource_GetText final
{
public:
	class FString                                 InTextId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EndTextResource_GetText) == 0x000008, "Wrong alignment on EndTextResource_GetText");
static_assert(sizeof(EndTextResource_GetText) == 0x000020, "Wrong size on EndTextResource_GetText");
static_assert(offsetof(EndTextResource_GetText, InTextId) == 0x000000, "Member 'EndTextResource_GetText::InTextId' has a wrong offset!");
static_assert(offsetof(EndTextResource_GetText, ReturnValue) == 0x000010, "Member 'EndTextResource_GetText::ReturnValue' has a wrong offset!");

// Function EndTextResource.EndTextResource.GetTextInfo
// 0x0070 (0x0070 - 0x0000)
struct EndTextResource_GetTextInfo final
{
public:
	class FString                                 InTextId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEndTextResourceInfo                   ReturnValue;                                       // 0x0010(0x0060)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(EndTextResource_GetTextInfo) == 0x000008, "Wrong alignment on EndTextResource_GetTextInfo");
static_assert(sizeof(EndTextResource_GetTextInfo) == 0x000070, "Wrong size on EndTextResource_GetTextInfo");
static_assert(offsetof(EndTextResource_GetTextInfo, InTextId) == 0x000000, "Member 'EndTextResource_GetTextInfo::InTextId' has a wrong offset!");
static_assert(offsetof(EndTextResource_GetTextInfo, ReturnValue) == 0x000010, "Member 'EndTextResource_GetTextInfo::ReturnValue' has a wrong offset!");

// Function EndTextResource.EndTextResourceAPI.GetTextResourceInfo
// 0x0080 (0x0080 - 0x0000)
struct EndTextResourceAPI_GetTextResourceInfo final
{
public:
	class FString                                 InTextId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InLanguage;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEndTextResourceInfo                   ReturnValue;                                       // 0x0020(0x0060)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(EndTextResourceAPI_GetTextResourceInfo) == 0x000008, "Wrong alignment on EndTextResourceAPI_GetTextResourceInfo");
static_assert(sizeof(EndTextResourceAPI_GetTextResourceInfo) == 0x000080, "Wrong size on EndTextResourceAPI_GetTextResourceInfo");
static_assert(offsetof(EndTextResourceAPI_GetTextResourceInfo, InTextId) == 0x000000, "Member 'EndTextResourceAPI_GetTextResourceInfo::InTextId' has a wrong offset!");
static_assert(offsetof(EndTextResourceAPI_GetTextResourceInfo, InLanguage) == 0x000010, "Member 'EndTextResourceAPI_GetTextResourceInfo::InLanguage' has a wrong offset!");
static_assert(offsetof(EndTextResourceAPI_GetTextResourceInfo, ReturnValue) == 0x000020, "Member 'EndTextResourceAPI_GetTextResourceInfo::ReturnValue' has a wrong offset!");

// Function EndTextResource.EndTextResourceAPI.GetTextResourceText
// 0x0030 (0x0030 - 0x0000)
struct EndTextResourceAPI_GetTextResourceText final
{
public:
	class FString                                 InTextId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InLanguage;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EndTextResourceAPI_GetTextResourceText) == 0x000008, "Wrong alignment on EndTextResourceAPI_GetTextResourceText");
static_assert(sizeof(EndTextResourceAPI_GetTextResourceText) == 0x000030, "Wrong size on EndTextResourceAPI_GetTextResourceText");
static_assert(offsetof(EndTextResourceAPI_GetTextResourceText, InTextId) == 0x000000, "Member 'EndTextResourceAPI_GetTextResourceText::InTextId' has a wrong offset!");
static_assert(offsetof(EndTextResourceAPI_GetTextResourceText, InLanguage) == 0x000010, "Member 'EndTextResourceAPI_GetTextResourceText::InLanguage' has a wrong offset!");
static_assert(offsetof(EndTextResourceAPI_GetTextResourceText, ReturnValue) == 0x000020, "Member 'EndTextResourceAPI_GetTextResourceText::ReturnValue' has a wrong offset!");

}

