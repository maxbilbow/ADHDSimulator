#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2355;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17464_gshared (DefaultComparer_t2355 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17464(__this, method) (( void (*) (DefaultComparer_t2355 *, const MethodInfo*))DefaultComparer__ctor_m17464_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17465_gshared (DefaultComparer_t2355 * __this, UILineInfo_t522  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17465(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2355 *, UILineInfo_t522 , const MethodInfo*))DefaultComparer_GetHashCode_m17465_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17466_gshared (DefaultComparer_t2355 * __this, UILineInfo_t522  ___x, UILineInfo_t522  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17466(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2355 *, UILineInfo_t522 , UILineInfo_t522 , const MethodInfo*))DefaultComparer_Equals_m17466_gshared)(__this, ___x, ___y, method)
