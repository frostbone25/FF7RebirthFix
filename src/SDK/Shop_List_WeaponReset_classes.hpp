#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shop_List_WeaponReset

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Shop_List_WeaponReset.Shop_List_WeaponReset_C
// 0x0008 (0x03D0 - 0x03C8)
class UShop_List_WeaponReset_C final : public UEndUserWidget
{
public:
	class UEndTiledImage*                         TiledListBG;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Shop_List_WeaponReset_C">();
	}
	static class UShop_List_WeaponReset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShop_List_WeaponReset_C>();
	}
};
static_assert(alignof(UShop_List_WeaponReset_C) == 0x000008, "Wrong alignment on UShop_List_WeaponReset_C");
static_assert(sizeof(UShop_List_WeaponReset_C) == 0x0003D0, "Wrong size on UShop_List_WeaponReset_C");
static_assert(offsetof(UShop_List_WeaponReset_C, TiledListBG) == 0x0003C8, "Member 'UShop_List_WeaponReset_C::TiledListBG' has a wrong offset!");

}

