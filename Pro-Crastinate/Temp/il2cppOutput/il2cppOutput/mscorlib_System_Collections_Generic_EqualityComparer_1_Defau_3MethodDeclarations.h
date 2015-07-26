#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2128;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m13993_gshared (DefaultComparer_t2128 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13993(__this, method) (( void (*) (DefaultComparer_t2128 *, const MethodInfo*))DefaultComparer__ctor_m13993_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13994_gshared (DefaultComparer_t2128 * __this, RaycastResult_t320  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13994(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2128 *, RaycastResult_t320 , const MethodInfo*))DefaultComparer_GetHashCode_m13994_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13995_gshared (DefaultComparer_t2128 * __this, RaycastResult_t320  ___x, RaycastResult_t320  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13995(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2128 *, RaycastResult_t320 , RaycastResult_t320 , const MethodInfo*))DefaultComparer_Equals_m13995_gshared)(__this, ___x, ___y, method)
