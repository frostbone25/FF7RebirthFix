#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03

#include "Basic.hpp"

#include "obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_classes.hpp"
#include "obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_parameters.hpp"


namespace SDK
{

// Function obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03.obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_C.ExecuteUbergraph_obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aobm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_C::ExecuteUbergraph_obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_C", "ExecuteUbergraph_obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03");

	Params::obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_C_ExecuteUbergraph_obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03.obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_C.CreateMobCommand
// (Event, Public, BlueprintEvent)

void Aobm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_C::CreateMobCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm2610_LowlandAreaAfter_340_NIBLT_Single_blackmantleStand03_C", "CreateMobCommand");

	UObject::ProcessEvent(Func, nullptr);
}

}

