#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EB0017_00_Move_AroundRun

#include "Basic.hpp"

#include "Enemy_MoveDefBase_Around_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EB0017_00_Move_AroundRun.EB0017_00_Move_AroundRun_C
// 0x0000 (0x00C8 - 0x00C8)
class UEB0017_00_Move_AroundRun_C final : public UEnemy_MoveDefBase_Around_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EB0017_00_Move_AroundRun_C">();
	}
	static class UEB0017_00_Move_AroundRun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEB0017_00_Move_AroundRun_C>();
	}
};
static_assert(alignof(UEB0017_00_Move_AroundRun_C) == 0x000008, "Wrong alignment on UEB0017_00_Move_AroundRun_C");
static_assert(sizeof(UEB0017_00_Move_AroundRun_C) == 0x0000C8, "Wrong size on UEB0017_00_Move_AroundRun_C");

}

