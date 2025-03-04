#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityName2

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AbilityName2.AbilityName2_C
// 0x0018 (0x0400 - 0x03E8)
class UAbilityName2_C final : public UEndAbilityName2
{
public:
	class UEndImage*                              Gradation2_1;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Exp_Gauge_BG;                                  // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Exp_Gauge_Waku;                                // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AbilityName2_C">();
	}
	static class UAbilityName2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilityName2_C>();
	}
};
static_assert(alignof(UAbilityName2_C) == 0x000008, "Wrong alignment on UAbilityName2_C");
static_assert(sizeof(UAbilityName2_C) == 0x000400, "Wrong size on UAbilityName2_C");
static_assert(offsetof(UAbilityName2_C, Gradation2_1) == 0x0003E8, "Member 'UAbilityName2_C::Gradation2_1' has a wrong offset!");
static_assert(offsetof(UAbilityName2_C, Img_Exp_Gauge_BG) == 0x0003F0, "Member 'UAbilityName2_C::Img_Exp_Gauge_BG' has a wrong offset!");
static_assert(offsetof(UAbilityName2_C, Img_Exp_Gauge_Waku) == 0x0003F8, "Member 'UAbilityName2_C::Img_Exp_Gauge_Waku' has a wrong offset!");

}

