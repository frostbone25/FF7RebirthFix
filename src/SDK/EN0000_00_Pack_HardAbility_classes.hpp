#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN0000_00_Pack_HardAbility

#include "Basic.hpp"

#include "Enemy_ActionPackBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN0000_00_Pack_HardAbility.EN0000_00_Pack_HardAbility_C
// 0x0000 (0x00C8 - 0x00C8)
class UEN0000_00_Pack_HardAbility_C final : public UEnemy_ActionPackBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN0000_00_Pack_HardAbility_C">();
	}
	static class UEN0000_00_Pack_HardAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEN0000_00_Pack_HardAbility_C>();
	}
};
static_assert(alignof(UEN0000_00_Pack_HardAbility_C) == 0x000008, "Wrong alignment on UEN0000_00_Pack_HardAbility_C");
static_assert(sizeof(UEN0000_00_Pack_HardAbility_C) == 0x0000C8, "Wrong size on UEN0000_00_Pack_HardAbility_C");

}

