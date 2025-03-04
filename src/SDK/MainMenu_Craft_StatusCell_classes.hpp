#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Craft_StatusCell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Craft_StatusCell.MainMenu_Craft_StatusCell_C
// 0x0070 (0x0438 - 0x03C8)
class UMainMenu_Craft_StatusCell_C final : public UEndUserWidget
{
public:
	class UEndImage*                              Base;                                              // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Arrow_Compare_C*                  Icon_Arrow_1;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Arrow_Compare_C*                  Icon_Arrow_2;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Arrow_Compare_C*                  Icon_Arrow_3;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Arrow_Compare_C*                  Icon_Arrow_4;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Member_C*                         Icon_Member;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Icon_Status_C*                Icon_Status_1;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Icon_Status_C*                Icon_Status_2;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Icon_Status_C*                Icon_Status_3;                                     // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Icon_Status_C*                Icon_Status_4;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              StatusBG_1;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              StatusBG_2;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              StatusBG_3;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              StatusBG_4;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Craft_StatusCell_C">();
	}
	static class UMainMenu_Craft_StatusCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Craft_StatusCell_C>();
	}
};
static_assert(alignof(UMainMenu_Craft_StatusCell_C) == 0x000008, "Wrong alignment on UMainMenu_Craft_StatusCell_C");
static_assert(sizeof(UMainMenu_Craft_StatusCell_C) == 0x000438, "Wrong size on UMainMenu_Craft_StatusCell_C");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Base) == 0x0003C8, "Member 'UMainMenu_Craft_StatusCell_C::Base' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Arrow_1) == 0x0003D0, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Arrow_1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Arrow_2) == 0x0003D8, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Arrow_2' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Arrow_3) == 0x0003E0, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Arrow_3' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Arrow_4) == 0x0003E8, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Arrow_4' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Member) == 0x0003F0, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Member' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Status_1) == 0x0003F8, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Status_1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Status_2) == 0x000400, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Status_2' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Status_3) == 0x000408, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Status_3' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, Icon_Status_4) == 0x000410, "Member 'UMainMenu_Craft_StatusCell_C::Icon_Status_4' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, StatusBG_1) == 0x000418, "Member 'UMainMenu_Craft_StatusCell_C::StatusBG_1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, StatusBG_2) == 0x000420, "Member 'UMainMenu_Craft_StatusCell_C::StatusBG_2' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, StatusBG_3) == 0x000428, "Member 'UMainMenu_Craft_StatusCell_C::StatusBG_3' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_StatusCell_C, StatusBG_4) == 0x000430, "Member 'UMainMenu_Craft_StatusCell_C::StatusBG_4' has a wrong offset!");

}

