#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t188;
// UnityEngine.Material[]
struct MaterialU5BU5D_t192;

// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t192* Renderer_get_materials_m603 (Renderer_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C" void Renderer_set_materials_m605 (Renderer_t188 * __this, MaterialU5BU5D_t192* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C" MaterialU5BU5D_t192* Renderer_get_sharedMaterials_m601 (Renderer_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2324 (Renderer_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2325 (Renderer_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
