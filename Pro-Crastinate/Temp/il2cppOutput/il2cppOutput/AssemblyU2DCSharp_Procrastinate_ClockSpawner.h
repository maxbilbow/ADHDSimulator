#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
struct List_1_t211;
// Procrastinate.ClockBehaviour
struct ClockBehaviour_t207;
// RMX.Singletons/ASingleton`1<Procrastinate.ClockSpawner>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_2.h"
// Procrastinate.ClockSpawner
struct  ClockSpawner_t209  : public ASingleton_1_t210
{
	// System.Boolean Procrastinate.ClockSpawner::firstLoad
	bool ___firstLoad_11;
	// Procrastinate.ClockBehaviour Procrastinate.ClockSpawner::inflatableClock
	ClockBehaviour_t207 * ___inflatableClock_12;
};
struct ClockSpawner_t209_StaticFields{
	// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour> Procrastinate.ClockSpawner::clocks
	List_1_t211 * ___clocks_10;
	// System.Int32 Procrastinate.ClockSpawner::forTouch
	int32_t ___forTouch_13;
};
