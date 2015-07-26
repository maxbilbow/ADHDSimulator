﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2212;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m15219_gshared (DefaultComparer_t2212 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15219(__this, method) (( void (*) (DefaultComparer_t2212 *, const MethodInfo*))DefaultComparer__ctor_m15219_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15220_gshared (DefaultComparer_t2212 * __this, UIVertex_t390  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15220(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2212 *, UIVertex_t390 , const MethodInfo*))DefaultComparer_GetHashCode_m15220_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15221_gshared (DefaultComparer_t2212 * __this, UIVertex_t390  ___x, UIVertex_t390  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15221(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2212 *, UIVertex_t390 , UIVertex_t390 , const MethodInfo*))DefaultComparer_Equals_m15221_gshared)(__this, ___x, ___y, method)
