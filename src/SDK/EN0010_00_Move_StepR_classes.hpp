#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN0010_00_Move_StepR

#include "Basic.hpp"

#include "Enemy_MoveDefBase_Step_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN0010_00_Move_StepR.EN0010_00_Move_StepR_C
// 0x0000 (0x00B0 - 0x00B0)
class UEN0010_00_Move_StepR_C final : public UEnemy_MoveDefBase_Step_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN0010_00_Move_StepR_C">();
	}
	static class UEN0010_00_Move_StepR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEN0010_00_Move_StepR_C>();
	}
};
static_assert(alignof(UEN0010_00_Move_StepR_C) == 0x000008, "Wrong alignment on UEN0010_00_Move_StepR_C");
static_assert(sizeof(UEN0010_00_Move_StepR_C) == 0x0000B0, "Wrong size on UEN0010_00_Move_StepR_C");

}

