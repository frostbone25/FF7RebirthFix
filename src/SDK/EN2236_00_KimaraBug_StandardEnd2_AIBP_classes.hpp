#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN2236_00_KimaraBug_StandardEnd2_AIBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EN_Base_AIBP_classes.hpp"
#include "EndGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C
// 0x0000 (0x0FA0 - 0x0FA0)
class AEN2236_00_KimaraBug_StandardEnd2_AIBP_C final : public AEN_Base_AIBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EN2236_00_KimaraBug_StandardEnd2_AIBP_C; // 0x0F98(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_EN2236_00_KimaraBug_StandardEnd2_AIBP(int32 EntryPoint);
	void OnMoveTimeOutInvoke(EEndAIActionMoveTimeOut TimeOutType, class FName MoveDefTag, class FName ActionDefTag, class FName ComboDefTag);
	void OnProwlInvoke(EEndAIProwlCallType CallType);
	void OnMotionMessageInvoke(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void OnActionInvoke(EEndAIIntervalType IntervalType, class FName ExtraIntervalId);
	void OnActionTopPriorityInvoke(class FName TopPriorityActionId);
	void OnEndAbilityInvoke(class FName AbilityId, bool createdDamageSource, bool suspended, bool suspendedSummonCutScene);
	void InpActEvt_L_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_J_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_I_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_D_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_A_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_15(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN2236_00_KimaraBug_StandardEnd2_AIBP_C">();
	}
	static class AEN2236_00_KimaraBug_StandardEnd2_AIBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEN2236_00_KimaraBug_StandardEnd2_AIBP_C>();
	}
};
static_assert(alignof(AEN2236_00_KimaraBug_StandardEnd2_AIBP_C) == 0x000010, "Wrong alignment on AEN2236_00_KimaraBug_StandardEnd2_AIBP_C");
static_assert(sizeof(AEN2236_00_KimaraBug_StandardEnd2_AIBP_C) == 0x000FA0, "Wrong size on AEN2236_00_KimaraBug_StandardEnd2_AIBP_C");
static_assert(offsetof(AEN2236_00_KimaraBug_StandardEnd2_AIBP_C, UberGraphFrame_EN2236_00_KimaraBug_StandardEnd2_AIBP_C) == 0x000F98, "Member 'AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::UberGraphFrame_EN2236_00_KimaraBug_StandardEnd2_AIBP_C' has a wrong offset!");

}

