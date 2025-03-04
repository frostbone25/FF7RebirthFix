#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG1008_00_Piano_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BG1008_00_Piano_Standard.BG1008_00_Piano_Standard_C
// 0x0010 (0x0820 - 0x0810)
class ABG1008_00_Piano_Standard_C final : public AEndEnvironmentSkeletalMeshActor
{
public:
	class USpotLightComponent*                    LT_piano_Foot;                                     // 0x0810(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpotLightComponent*                    LT_piano_Key;                                      // 0x0818(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BG1008_00_Piano_Standard_C">();
	}
	static class ABG1008_00_Piano_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABG1008_00_Piano_Standard_C>();
	}
};
static_assert(alignof(ABG1008_00_Piano_Standard_C) == 0x000008, "Wrong alignment on ABG1008_00_Piano_Standard_C");
static_assert(sizeof(ABG1008_00_Piano_Standard_C) == 0x000820, "Wrong size on ABG1008_00_Piano_Standard_C");
static_assert(offsetof(ABG1008_00_Piano_Standard_C, LT_piano_Foot) == 0x000810, "Member 'ABG1008_00_Piano_Standard_C::LT_piano_Foot' has a wrong offset!");
static_assert(offsetof(ABG1008_00_Piano_Standard_C, LT_piano_Key) == 0x000818, "Member 'ABG1008_00_Piano_Standard_C::LT_piano_Key' has a wrong offset!");

}

