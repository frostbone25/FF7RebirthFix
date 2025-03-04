#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TalkMenu_MateriaList_Cell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TalkMenu_MateriaList_Cell.TalkMenu_MateriaList_Cell_C
// 0x0040 (0x0408 - 0x03C8)
class UTalkMenu_MateriaList_Cell_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Normal;                                            // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Shortage_of_Level;                                 // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Shortage;                                          // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              BLACK;                                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Item_C*                           Icon_Item;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_X_G1;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Base_00;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMateria_Level_C*                       Materia_Level;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TalkMenu_MateriaList_Cell_C">();
	}
	static class UTalkMenu_MateriaList_Cell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTalkMenu_MateriaList_Cell_C>();
	}
};
static_assert(alignof(UTalkMenu_MateriaList_Cell_C) == 0x000008, "Wrong alignment on UTalkMenu_MateriaList_Cell_C");
static_assert(sizeof(UTalkMenu_MateriaList_Cell_C) == 0x000408, "Wrong size on UTalkMenu_MateriaList_Cell_C");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, Normal) == 0x0003C8, "Member 'UTalkMenu_MateriaList_Cell_C::Normal' has a wrong offset!");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, Shortage_of_Level) == 0x0003D0, "Member 'UTalkMenu_MateriaList_Cell_C::Shortage_of_Level' has a wrong offset!");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, Shortage) == 0x0003D8, "Member 'UTalkMenu_MateriaList_Cell_C::Shortage' has a wrong offset!");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, BLACK) == 0x0003E0, "Member 'UTalkMenu_MateriaList_Cell_C::BLACK' has a wrong offset!");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, Icon_Item) == 0x0003E8, "Member 'UTalkMenu_MateriaList_Cell_C::Icon_Item' has a wrong offset!");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, Icon_X_G1) == 0x0003F0, "Member 'UTalkMenu_MateriaList_Cell_C::Icon_X_G1' has a wrong offset!");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, Img_Base_00) == 0x0003F8, "Member 'UTalkMenu_MateriaList_Cell_C::Img_Base_00' has a wrong offset!");
static_assert(offsetof(UTalkMenu_MateriaList_Cell_C, Materia_Level) == 0x000400, "Member 'UTalkMenu_MateriaList_Cell_C::Materia_Level' has a wrong offset!");

}

