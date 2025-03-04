#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VR_Top

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VR_Top.VR_Top_C
// 0x0160 (0x0998 - 0x0838)
class UVR_Top_C final : public UEndColosseumMenu
{
public:
	class UWidgetAnimation*                       SummonToParty;                                     // 0x0838(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SummonWindow_In;                                   // 0x0840(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnderShinraMansion;                                // 0x0848(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnderColiseumForQuest;                             // 0x0850(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnderColiseum;                                     // 0x0858(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GoldSaucerArena;                                   // 0x0860(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       VR;                                                // 0x0868(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Menu_Out;                                          // 0x0870(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DifficultyWindow_In;                               // 0x0878(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ToStart;                                           // 0x0880(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ToCourse;                                          // 0x0888(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Menu_In;                                           // 0x0890(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndBillboard*                          Billboard_Bg;                                      // 0x0898(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndBillboard*                          Billboard_Summon;                                  // 0x08A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniGame_Com_CountDown_C*              CountDown;                                         // 0x08A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UField_CurrencyList_C*                  CurrencyList;                                      // 0x08B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage;                                          // 0x08B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_1;                                        // 0x08C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_2;                                        // 0x08C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_3;                                        // 0x08D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_4;                                        // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_5;                                        // 0x08E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_6;                                        // 0x08E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_7;                                        // 0x08F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_8;                                        // 0x08F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_9;                                        // 0x0900(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_61;                                       // 0x0908(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_79;                                       // 0x0910(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light1;                                            // 0x0918(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Right;                                        // 0x0920(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           LineSet;                                           // 0x0928(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTiledImage*                         ListBg2;                                           // 0x0930(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           ListBgSet;                                         // 0x0938(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           ListBgSet2;                                        // 0x0940(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMap_PlayerLevel_C*                     PlayerLevel;                                       // 0x0948(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RecommendLevel_C*                RecommendLevel;                                    // 0x0950(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVR_SummonLevelWindow_C*                SummonLevelWindow;                                 // 0x0958(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVR_TabMenu_C*                          TabMenu;                                           // 0x0960(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_PartyTitle1;                                   // 0x0968(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_PartyTitle2;                                   // 0x0970(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_SummonLevel;                                   // 0x0978(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              WeakIcon_1;                                        // 0x0980(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              WeakIcon_2;                                        // 0x0988(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              WeakIcon_3;                                        // 0x0990(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VR_Top_C">();
	}
	static class UVR_Top_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVR_Top_C>();
	}
};
static_assert(alignof(UVR_Top_C) == 0x000008, "Wrong alignment on UVR_Top_C");
static_assert(sizeof(UVR_Top_C) == 0x000998, "Wrong size on UVR_Top_C");
static_assert(offsetof(UVR_Top_C, SummonToParty) == 0x000838, "Member 'UVR_Top_C::SummonToParty' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, SummonWindow_In) == 0x000840, "Member 'UVR_Top_C::SummonWindow_In' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, UnderShinraMansion) == 0x000848, "Member 'UVR_Top_C::UnderShinraMansion' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, UnderColiseumForQuest) == 0x000850, "Member 'UVR_Top_C::UnderColiseumForQuest' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, UnderColiseum) == 0x000858, "Member 'UVR_Top_C::UnderColiseum' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, GoldSaucerArena) == 0x000860, "Member 'UVR_Top_C::GoldSaucerArena' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, VR) == 0x000868, "Member 'UVR_Top_C::VR' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Menu_Out) == 0x000870, "Member 'UVR_Top_C::Menu_Out' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, DifficultyWindow_In) == 0x000878, "Member 'UVR_Top_C::DifficultyWindow_In' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, ToStart) == 0x000880, "Member 'UVR_Top_C::ToStart' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, ToCourse) == 0x000888, "Member 'UVR_Top_C::ToCourse' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Menu_In) == 0x000890, "Member 'UVR_Top_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Billboard_Bg) == 0x000898, "Member 'UVR_Top_C::Billboard_Bg' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Billboard_Summon) == 0x0008A0, "Member 'UVR_Top_C::Billboard_Summon' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, CountDown) == 0x0008A8, "Member 'UVR_Top_C::CountDown' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, CurrencyList) == 0x0008B0, "Member 'UVR_Top_C::CurrencyList' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage) == 0x0008B8, "Member 'UVR_Top_C::EndImage' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_1) == 0x0008C0, "Member 'UVR_Top_C::EndImage_1' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_2) == 0x0008C8, "Member 'UVR_Top_C::EndImage_2' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_3) == 0x0008D0, "Member 'UVR_Top_C::EndImage_3' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_4) == 0x0008D8, "Member 'UVR_Top_C::EndImage_4' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_5) == 0x0008E0, "Member 'UVR_Top_C::EndImage_5' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_6) == 0x0008E8, "Member 'UVR_Top_C::EndImage_6' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_7) == 0x0008F0, "Member 'UVR_Top_C::EndImage_7' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_8) == 0x0008F8, "Member 'UVR_Top_C::EndImage_8' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_9) == 0x000900, "Member 'UVR_Top_C::EndImage_9' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_61) == 0x000908, "Member 'UVR_Top_C::EndImage_61' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, EndImage_79) == 0x000910, "Member 'UVR_Top_C::EndImage_79' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Light1) == 0x000918, "Member 'UVR_Top_C::Light1' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Line_Right) == 0x000920, "Member 'UVR_Top_C::Line_Right' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, LineSet) == 0x000928, "Member 'UVR_Top_C::LineSet' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, ListBg2) == 0x000930, "Member 'UVR_Top_C::ListBg2' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, ListBgSet) == 0x000938, "Member 'UVR_Top_C::ListBgSet' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, ListBgSet2) == 0x000940, "Member 'UVR_Top_C::ListBgSet2' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, PlayerLevel) == 0x000948, "Member 'UVR_Top_C::PlayerLevel' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, RecommendLevel) == 0x000950, "Member 'UVR_Top_C::RecommendLevel' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, SummonLevelWindow) == 0x000958, "Member 'UVR_Top_C::SummonLevelWindow' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, TabMenu) == 0x000960, "Member 'UVR_Top_C::TabMenu' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Txt_PartyTitle1) == 0x000968, "Member 'UVR_Top_C::Txt_PartyTitle1' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Txt_PartyTitle2) == 0x000970, "Member 'UVR_Top_C::Txt_PartyTitle2' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, Txt_SummonLevel) == 0x000978, "Member 'UVR_Top_C::Txt_SummonLevel' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, WeakIcon_1) == 0x000980, "Member 'UVR_Top_C::WeakIcon_1' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, WeakIcon_2) == 0x000988, "Member 'UVR_Top_C::WeakIcon_2' has a wrong offset!");
static_assert(offsetof(UVR_Top_C, WeakIcon_3) == 0x000990, "Member 'UVR_Top_C::WeakIcon_3' has a wrong offset!");

}

