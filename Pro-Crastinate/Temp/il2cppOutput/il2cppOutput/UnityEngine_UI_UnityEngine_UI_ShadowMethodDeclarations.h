﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Shadow
struct Shadow_t463;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t392;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
extern "C" void Shadow__ctor_m2220 (Shadow_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
extern "C" Color_t200  Shadow_get_effectColor_m2221 (Shadow_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C" void Shadow_set_effectColor_m2222 (Shadow_t463 * __this, Color_t200  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
extern "C" Vector2_t42  Shadow_get_effectDistance_m2223 (Shadow_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
extern "C" void Shadow_set_effectDistance_m2224 (Shadow_t463 * __this, Vector2_t42  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
extern "C" bool Shadow_get_useGraphicAlpha_m2225 (Shadow_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
extern "C" void Shadow_set_useGraphicAlpha_m2226 (Shadow_t463 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C" void Shadow_ApplyShadow_m2227 (Shadow_t463 * __this, List_1_t392 * ___verts, Color32_t494  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Shadow_ModifyVertices_m2228 (Shadow_t463 * __this, List_1_t392 * ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;