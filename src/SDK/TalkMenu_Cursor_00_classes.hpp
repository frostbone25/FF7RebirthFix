#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TalkMenu_Cursor_00

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TalkMenu_Cursor_00.TalkMenu_Cursor_00_C
// 0x0030 (0x03F8 - 0x03C8)
class UTalkMenu_Cursor_00_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Loop;                                              // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Cursor_00;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_01;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_Arrow;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_00;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TalkMenu_Cursor_00(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TalkMenu_Cursor_00_C">();
	}
	static class UTalkMenu_Cursor_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTalkMenu_Cursor_00_C>();
	}
};
static_assert(alignof(UTalkMenu_Cursor_00_C) == 0x000008, "Wrong alignment on UTalkMenu_Cursor_00_C");
static_assert(sizeof(UTalkMenu_Cursor_00_C) == 0x0003F8, "Wrong size on UTalkMenu_Cursor_00_C");
static_assert(offsetof(UTalkMenu_Cursor_00_C, UberGraphFrame) == 0x0003C8, "Member 'UTalkMenu_Cursor_00_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTalkMenu_Cursor_00_C, Loop) == 0x0003D0, "Member 'UTalkMenu_Cursor_00_C::Loop' has a wrong offset!");
static_assert(offsetof(UTalkMenu_Cursor_00_C, Cursor_00) == 0x0003D8, "Member 'UTalkMenu_Cursor_00_C::Cursor_00' has a wrong offset!");
static_assert(offsetof(UTalkMenu_Cursor_00_C, Cursor_01) == 0x0003E0, "Member 'UTalkMenu_Cursor_00_C::Cursor_01' has a wrong offset!");
static_assert(offsetof(UTalkMenu_Cursor_00_C, Cursor_Arrow) == 0x0003E8, "Member 'UTalkMenu_Cursor_00_C::Cursor_Arrow' has a wrong offset!");
static_assert(offsetof(UTalkMenu_Cursor_00_C, Effect_00) == 0x0003F0, "Member 'UTalkMenu_Cursor_00_C::Effect_00' has a wrong offset!");

}

