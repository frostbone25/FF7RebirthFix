#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpeningStaffCredit

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OpeningStaffCredit.OpeningStaffCredit_C
// 0x0010 (0x03D8 - 0x03C8)
class UOpeningStaffCredit_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OpeningStaffCredit_C">();
	}
	static class UOpeningStaffCredit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpeningStaffCredit_C>();
	}
};
static_assert(alignof(UOpeningStaffCredit_C) == 0x000008, "Wrong alignment on UOpeningStaffCredit_C");
static_assert(sizeof(UOpeningStaffCredit_C) == 0x0003D8, "Wrong size on UOpeningStaffCredit_C");
static_assert(offsetof(UOpeningStaffCredit_C, Out) == 0x0003C8, "Member 'UOpeningStaffCredit_C::Out' has a wrong offset!");
static_assert(offsetof(UOpeningStaffCredit_C, In) == 0x0003D0, "Member 'UOpeningStaffCredit_C::In' has a wrong offset!");

}

