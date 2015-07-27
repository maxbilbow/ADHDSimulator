#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t193;
// UnityEngine.Material[]
struct MaterialU5BU5D_t194;

// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t194* Renderer_get_materials_m610 (Renderer_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C" void Renderer_set_materials_m613 (Renderer_t193 * __this, MaterialU5BU5D_t194* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C" MaterialU5BU5D_t194* Renderer_get_sharedMaterials_m608 (Renderer_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2342 (Renderer_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2343 (Renderer_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
