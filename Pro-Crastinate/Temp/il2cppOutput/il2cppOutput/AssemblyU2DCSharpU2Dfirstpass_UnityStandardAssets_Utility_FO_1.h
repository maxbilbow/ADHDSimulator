﻿#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t82;
// UnityEngine.AnimationCurve
struct AnimationCurve_t84;
struct AnimationCurve_t84_marshaled;
// System.Object
#include "mscorlib_System_Object.h"
// UnityStandardAssets.Utility.FOVKick
struct  FOVKick_t92  : public Object_t
{
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_t82 * ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_t84 * ___IncreaseCurve_5;
};
