#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Card_Preset_Confirm

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Card_Preset_Confirm.MainMenu_Card_Preset_Confirm_C
// 0x0058 (0x0470 - 0x0418)
class UMainMenu_Card_Preset_Confirm_C final : public UEndCardListWindow
{
public:
	class UEndImage*                              Img_Arrow;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Base;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_CornerDeco_01;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_CornerDeco_02;                                 // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_CornerDeco_03;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_CornerDeco_04;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_ListBase_00;                                   // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_ListBase_01;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Shadow;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Card_CardInformation_C*       Information;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_NoCard;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Card_Preset_Confirm_C">();
	}
	static class UMainMenu_Card_Preset_Confirm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Card_Preset_Confirm_C>();
	}
};
static_assert(alignof(UMainMenu_Card_Preset_Confirm_C) == 0x000008, "Wrong alignment on UMainMenu_Card_Preset_Confirm_C");
static_assert(sizeof(UMainMenu_Card_Preset_Confirm_C) == 0x000470, "Wrong size on UMainMenu_Card_Preset_Confirm_C");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_Arrow) == 0x000418, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_Arrow' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_Base) == 0x000420, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_Base' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_CornerDeco_01) == 0x000428, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_CornerDeco_01' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_CornerDeco_02) == 0x000430, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_CornerDeco_02' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_CornerDeco_03) == 0x000438, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_CornerDeco_03' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_CornerDeco_04) == 0x000440, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_CornerDeco_04' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_ListBase_00) == 0x000448, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_ListBase_00' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_ListBase_01) == 0x000450, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_ListBase_01' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Img_Shadow) == 0x000458, "Member 'UMainMenu_Card_Preset_Confirm_C::Img_Shadow' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Information) == 0x000460, "Member 'UMainMenu_Card_Preset_Confirm_C::Information' has a wrong offset!");
static_assert(offsetof(UMainMenu_Card_Preset_Confirm_C, Txt_NoCard) == 0x000468, "Member 'UMainMenu_Card_Preset_Confirm_C::Txt_NoCard' has a wrong offset!");

}

