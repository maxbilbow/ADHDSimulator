#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2261;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m15493_gshared (DefaultComparer_t2261 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15493(__this, method) (( void (*) (DefaultComparer_t2261 *, const MethodInfo*))DefaultComparer__ctor_m15493_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15494_gshared (DefaultComparer_t2261 * __this, UIVertex_t401  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15494(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2261 *, UIVertex_t401 , const MethodInfo*))DefaultComparer_GetHashCode_m15494_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15495_gshared (DefaultComparer_t2261 * __this, UIVertex_t401  ___x, UIVertex_t401  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15495(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2261 *, UIVertex_t401 , UIVertex_t401 , const MethodInfo*))DefaultComparer_Equals_m15495_gshared)(__this, ___x, ___y, method)
