#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t591;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t588;
// UnityEngine.GUIStyle
struct GUIStyle_t149;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t590  : public Object_t
{
};
struct GUILayoutUtility_t590_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::storedLayouts
	Dictionary_2_t591 * ___storedLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::storedWindows
	Dictionary_2_t591 * ___storedWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t588 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t150  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t149 * ___s_SpaceStyle_4;
};
