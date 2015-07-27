#pragma once
#include <stdint.h>
// Procrastinate.ClockBehaviour
struct ClockBehaviour_t207;
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObject.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Procrastinate.ClockBehaviour
struct  ClockBehaviour_t207  : public RMXObject_t31
{
	// UnityEngine.Vector3 Procrastinate.ClockBehaviour::startingPoint
	Vector3_t42  ___startingPoint_6;
	// UnityEngine.Vector2 Procrastinate.ClockBehaviour::exitVelocity
	Vector2_t44  ___exitVelocity_8;
	// System.Single Procrastinate.ClockBehaviour::maxSizeOfInflatable
	float ___maxSizeOfInflatable_9;
	// System.Boolean Procrastinate.ClockBehaviour::isOnScreen
	bool ___isOnScreen_10;
	// System.Single Procrastinate.ClockBehaviour::fellOffAtTime
	float ___fellOffAtTime_11;
	// System.Single Procrastinate.ClockBehaviour::MaxTimeOffScreen
	float ___MaxTimeOffScreen_12;
	// System.Single Procrastinate.ClockBehaviour::OffScreenLimit
	float ___OffScreenLimit_13;
	// System.Single Procrastinate.ClockBehaviour::maxVelocity
	float ___maxVelocity_14;
	// UnityEngine.Vector3 Procrastinate.ClockBehaviour::lastScale
	Vector3_t42  ___lastScale_15;
	// System.Single Procrastinate.ClockBehaviour::inflationSpeed
	float ___inflationSpeed_16;
	// System.Boolean Procrastinate.ClockBehaviour::isOriginal
	bool ___isOriginal_17;
	// System.Single Procrastinate.ClockBehaviour::lifeSpan
	float ___lifeSpan_18;
	// UnityEngine.Vector3 Procrastinate.ClockBehaviour::pointOfExit
	Vector3_t42  ___pointOfExit_19;
};
struct ClockBehaviour_t207_StaticFields{
	// Procrastinate.ClockBehaviour Procrastinate.ClockBehaviour::original
	ClockBehaviour_t207 * ___original_7;
};
