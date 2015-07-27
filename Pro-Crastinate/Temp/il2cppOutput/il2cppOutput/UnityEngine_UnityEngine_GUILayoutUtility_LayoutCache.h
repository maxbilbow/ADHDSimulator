#pragma once
#include <stdint.h>
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t589;
// UnityEngineInternal.GenericStack
struct GenericStack_t585;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t588  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t589 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t585 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t589 * ___windows_2;
};
