#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Com_Loading_Simple

#include "Basic.hpp"

#include "Com_Loading_Simple_classes.hpp"
#include "Com_Loading_Simple_parameters.hpp"


namespace SDK
{

// Function Com_Loading_Simple.Com_Loading_Simple_C.ExecuteUbergraph_Com_Loading_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCom_Loading_Simple_C::ExecuteUbergraph_Com_Loading_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Com_Loading_Simple_C", "ExecuteUbergraph_Com_Loading_Simple");

	Params::Com_Loading_Simple_C_ExecuteUbergraph_Com_Loading_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Com_Loading_Simple.Com_Loading_Simple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCom_Loading_Simple_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Com_Loading_Simple_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

