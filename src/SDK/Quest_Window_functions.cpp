#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Quest_Window

#include "Basic.hpp"

#include "Quest_Window_classes.hpp"
#include "Quest_Window_parameters.hpp"


namespace SDK
{

// Function Quest_Window.Quest_Window_C.ExecuteUbergraph_Quest_Window
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_Window_C::ExecuteUbergraph_Quest_Window(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_Window_C", "ExecuteUbergraph_Quest_Window");

	Params::Quest_Window_C_ExecuteUbergraph_Quest_Window Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_Window.Quest_Window_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuest_Window_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_Window_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_Window.Quest_Window_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_Window_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_Window_C", "PreConstruct");

	Params::Quest_Window_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

