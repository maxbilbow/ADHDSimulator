#pragma once
#include <stdint.h>
// UnityEngine.RectOffset
struct RectOffset_t150;
// UnityEngine.RectTransform
struct RectTransform_t355;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t447;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t443  : public UIBehaviour_t293
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t150 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t355 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t406  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t42  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t42  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t42  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t447 * ___m_RectChildren_9;
};
