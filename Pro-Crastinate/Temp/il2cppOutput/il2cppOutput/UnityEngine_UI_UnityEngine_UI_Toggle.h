﻿#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t360;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t435;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t432;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Toggle/ToggleTransition
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransition.h"
// UnityEngine.UI.Toggle
struct  Toggle_t434  : public Selectable_t350
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t360 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t435 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t432 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;
};