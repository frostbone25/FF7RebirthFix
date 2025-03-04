#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Core_InfoCell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Core_InfoCell.MainMenu_Core_InfoCell_C
// 0x0038 (0x0590 - 0x0558)
class UMainMenu_Core_InfoCell_C final : public UEndEquipInfoDetailCoreCell
{
public:
	class UWidgetAnimation*                       NextLevel;                                         // 0x0558(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnEquipped;                                        // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Equipped;                                          // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base1;                                             // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_Equipped1;                                    // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_Equipped2;                                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line1;                                             // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Core_InfoCell_C">();
	}
	static class UMainMenu_Core_InfoCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Core_InfoCell_C>();
	}
};
static_assert(alignof(UMainMenu_Core_InfoCell_C) == 0x000008, "Wrong alignment on UMainMenu_Core_InfoCell_C");
static_assert(sizeof(UMainMenu_Core_InfoCell_C) == 0x000590, "Wrong size on UMainMenu_Core_InfoCell_C");
static_assert(offsetof(UMainMenu_Core_InfoCell_C, NextLevel) == 0x000558, "Member 'UMainMenu_Core_InfoCell_C::NextLevel' has a wrong offset!");
static_assert(offsetof(UMainMenu_Core_InfoCell_C, UnEquipped) == 0x000560, "Member 'UMainMenu_Core_InfoCell_C::UnEquipped' has a wrong offset!");
static_assert(offsetof(UMainMenu_Core_InfoCell_C, Equipped) == 0x000568, "Member 'UMainMenu_Core_InfoCell_C::Equipped' has a wrong offset!");
static_assert(offsetof(UMainMenu_Core_InfoCell_C, Base1) == 0x000570, "Member 'UMainMenu_Core_InfoCell_C::Base1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Core_InfoCell_C, Base_Equipped1) == 0x000578, "Member 'UMainMenu_Core_InfoCell_C::Base_Equipped1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Core_InfoCell_C, Base_Equipped2) == 0x000580, "Member 'UMainMenu_Core_InfoCell_C::Base_Equipped2' has a wrong offset!");
static_assert(offsetof(UMainMenu_Core_InfoCell_C, Line1) == 0x000588, "Member 'UMainMenu_Core_InfoCell_C::Line1' has a wrong offset!");

}

