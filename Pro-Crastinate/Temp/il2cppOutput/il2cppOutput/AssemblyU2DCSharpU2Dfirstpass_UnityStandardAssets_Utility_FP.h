﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GUIText
struct GUIText_t98;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Utility.FPSCounter
struct  FPSCounter_t97  : public MonoBehaviour_t32
{
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_4;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_5;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_6;
	// UnityEngine.GUIText UnityStandardAssets.Utility.FPSCounter::m_GuiText
	GUIText_t98 * ___m_GuiText_7;
};
