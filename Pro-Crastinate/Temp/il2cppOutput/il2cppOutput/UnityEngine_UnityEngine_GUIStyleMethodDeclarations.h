#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyle
struct GUIStyle_t149;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t603;
// UnityEngine.RectOffset
struct RectOffset_t152;
// UnityEngine.Font
struct Font_t283;
// UnityEngine.GUIContent
struct GUIContent_t527;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m427 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m2985 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m2986 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m2987 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m2988 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m2989 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m2990 (GUIStyle_t149 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t603 * GUIStyle_get_normal_m2991 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m2992 (GUIStyle_t149 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t152 * GUIStyle_get_margin_m2993 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t152 * GUIStyle_get_padding_m431 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m2994 (GUIStyle_t149 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" void GUIStyle_set_alignment_m430 (GUIStyle_t149 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" void GUIStyle_set_wordWrap_m429 (GUIStyle_t149 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m2995 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m2996 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m2997 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m2998 (GUIStyle_t149 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m2999 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m3000 (GUIStyle_t149 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m3001 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" void GUIStyle_set_fontSize_m1059 (GUIStyle_t149 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
extern "C" void GUIStyle_set_richText_m428 (GUIStyle_t149 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" float GUIStyle_get_lineHeight_m3002 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m3003 (Object_t * __this /* static, unused */, Font_t283 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t149 * GUIStyle_get_none_m3004 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" Vector2_t44  GUIStyle_GetCursorPixelPosition_m3005 (GUIStyle_t149 * __this, Rect_t150  ___position, GUIContent_t527 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m3006 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t150  ___position, GUIContent_t527 * ___content, int32_t ___cursorStringIndex, Vector2_t44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3007 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t150 * ___position, GUIContent_t527 * ___content, int32_t ___cursorStringIndex, Vector2_t44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t44  GUIStyle_CalcSize_m3008 (GUIStyle_t149 * __this, GUIContent_t527 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m3009 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t527 * ___content, Vector2_t44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m3010 (GUIStyle_t149 * __this, GUIContent_t527 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m3011 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t527 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m3012 (GUIStyle_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
