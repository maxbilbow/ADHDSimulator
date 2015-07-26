#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
struct List_1_t206;
// Procrastinate.ClockBehaviour
struct ClockBehaviour_t204;
// RMX.Singletons/ASingleton`1<Procrastinate.ClockSpawner>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_1.h"
// Procrastinate.ClockSpawner
struct  ClockSpawner_t207  : public ASingleton_1_t208
{
	// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour> Procrastinate.ClockSpawner::clocks
	List_1_t206 * ___clocks_9;
	// System.Boolean Procrastinate.ClockSpawner::firstLoad
	bool ___firstLoad_10;
	// Procrastinate.ClockBehaviour Procrastinate.ClockSpawner::inflatableClock
	ClockBehaviour_t204 * ___inflatableClock_11;
	// System.Int32 Procrastinate.ClockSpawner::forTouch
	int32_t ___forTouch_12;
};
