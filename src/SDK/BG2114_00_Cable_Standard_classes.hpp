#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG2114_00_Cable_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BG2114_00_Cable_Standard.BG2114_00_Cable_Standard_C
// 0x0000 (0x0810 - 0x0810)
class ABG2114_00_Cable_Standard_C final : public AEndEnvironmentSkeletalMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BG2114_00_Cable_Standard_C">();
	}
	static class ABG2114_00_Cable_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABG2114_00_Cable_Standard_C>();
	}
};
static_assert(alignof(ABG2114_00_Cable_Standard_C) == 0x000008, "Wrong alignment on ABG2114_00_Cable_Standard_C");
static_assert(sizeof(ABG2114_00_Cable_Standard_C) == 0x000810, "Wrong size on ABG2114_00_Cable_Standard_C");

}

