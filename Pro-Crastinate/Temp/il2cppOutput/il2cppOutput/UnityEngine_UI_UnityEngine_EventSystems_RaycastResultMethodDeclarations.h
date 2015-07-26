#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t320;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;

// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C" GameObject_t9 * RaycastResult_get_gameObject_m1152 (RaycastResult_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
extern "C" void RaycastResult_set_gameObject_m1153 (RaycastResult_t320 * __this, GameObject_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
extern "C" bool RaycastResult_get_isValid_m1154 (RaycastResult_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
extern "C" void RaycastResult_Clear_m1155 (RaycastResult_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
extern "C" String_t* RaycastResult_ToString_m1156 (RaycastResult_t320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
