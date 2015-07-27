#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t11;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C" GameObject_t11 * RaycastResult_get_gameObject_m1166 (RaycastResult_t326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
extern "C" void RaycastResult_set_gameObject_m1167 (RaycastResult_t326 * __this, GameObject_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
extern "C" bool RaycastResult_get_isValid_m1168 (RaycastResult_t326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
extern "C" void RaycastResult_Clear_m1169 (RaycastResult_t326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
extern "C" String_t* RaycastResult_ToString_m1170 (RaycastResult_t326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
