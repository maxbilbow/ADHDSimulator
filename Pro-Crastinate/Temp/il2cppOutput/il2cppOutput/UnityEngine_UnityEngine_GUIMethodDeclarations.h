#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t584;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t149;
// UnityEngine.GUIContent
struct GUIContent_t527;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t583;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m2840 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2841 (Object_t * __this /* static, unused */, DateTime_t586  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2842 (Object_t * __this /* static, unused */, GUISkin_t584 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t584 * GUI_get_skin_m2843 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2844 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m441 (Object_t * __this /* static, unused */, Rect_t150  ___position, String_t* ___text, GUIStyle_t149 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m2845 (Object_t * __this /* static, unused */, Rect_t150  ___position, GUIContent_t527 * ___content, GUIStyle_t149 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m2846 (Object_t * __this /* static, unused */, Rect_t150  ___position, GUIContent_t527 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m2847 (Object_t * __this /* static, unused */, Rect_t150 * ___position, GUIContent_t527 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m2848 (Object_t * __this /* static, unused */, WindowFunction_t583 * ___func, int32_t ___id, GUISkin_t584 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t149 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
