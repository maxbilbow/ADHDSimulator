#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t288;
// UnityEngine.Material
struct Material_t195;
// UnityEngine.Texture
struct Texture_t406;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t397;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t395;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m2403 (CanvasRenderer_t288 * __this, Color_t203  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3560 (Object_t * __this /* static, unused */, CanvasRenderer_t288 * ___self, Color_t203 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t203  CanvasRenderer_GetColor_m2401 (CanvasRenderer_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C" void CanvasRenderer_set_isMask_m2681 (CanvasRenderer_t288 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m2391 (CanvasRenderer_t288 * __this, Material_t195 * ___material, Texture_t406 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void CanvasRenderer_SetVertices_m2389 (CanvasRenderer_t288 * __this, List_1_t397 * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m3561 (CanvasRenderer_t288 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVertices_m2492 (CanvasRenderer_t288 * __this, UIVertexU5BU5D_t395* ___vertices, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m3562 (CanvasRenderer_t288 * __this, UIVertexU5BU5D_t395* ___vertices, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m2384 (CanvasRenderer_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2378 (CanvasRenderer_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
