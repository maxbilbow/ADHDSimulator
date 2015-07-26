﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t49;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t50;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t49  : public MonoBehaviour_t33
{
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t49 * ___m_PairedWith_6;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t50 * ___m_Axis_7;
};
