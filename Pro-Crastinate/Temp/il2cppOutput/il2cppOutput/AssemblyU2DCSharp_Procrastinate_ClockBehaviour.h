#pragma once
#include <stdint.h>
// Procrastinate.ClockBehaviour
struct ClockBehaviour_t204;
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObject.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Procrastinate.ClockBehaviour
struct  ClockBehaviour_t204  : public RMXObject_t32
{
	// UnityEngine.Vector3 Procrastinate.ClockBehaviour::startingPoint
	Vector3_t40  ___startingPoint_5;
	// UnityEngine.Vector2 Procrastinate.ClockBehaviour::exitVelocity
	Vector2_t42  ___exitVelocity_7;
	// System.Single Procrastinate.ClockBehaviour::maxSizeOfInflatable
	float ___maxSizeOfInflatable_8;
	// System.Boolean Procrastinate.ClockBehaviour::isOnScreen
	bool ___isOnScreen_9;
	// System.Single Procrastinate.ClockBehaviour::fellOffAtTime
	float ___fellOffAtTime_10;
	// System.Single Procrastinate.ClockBehaviour::MaxTimeOffScreen
	float ___MaxTimeOffScreen_11;
	// System.Single Procrastinate.ClockBehaviour::OffScreenLimit
	float ___OffScreenLimit_12;
	// System.Single Procrastinate.ClockBehaviour::maxVelocity
	float ___maxVelocity_13;
	// UnityEngine.Vector3 Procrastinate.ClockBehaviour::lastScale
	Vector3_t40  ___lastScale_14;
	// System.Single Procrastinate.ClockBehaviour::inflationSpeed
	float ___inflationSpeed_15;
	// System.Boolean Procrastinate.ClockBehaviour::isOriginal
	bool ___isOriginal_16;
	// System.Single Procrastinate.ClockBehaviour::lifeSpan
	float ___lifeSpan_17;
	// UnityEngine.Vector3 Procrastinate.ClockBehaviour::pointOfExit
	Vector3_t40  ___pointOfExit_18;
};
struct ClockBehaviour_t204_StaticFields{
	// Procrastinate.ClockBehaviour Procrastinate.ClockBehaviour::original
	ClockBehaviour_t204 * ___original_6;
};
