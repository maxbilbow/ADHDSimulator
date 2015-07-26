#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2633;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20245_gshared (DefaultComparer_t2633 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20245(__this, method) (( void (*) (DefaultComparer_t2633 *, const MethodInfo*))DefaultComparer__ctor_m20245_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20246_gshared (DefaultComparer_t2633 * __this, TimeSpan_t1144  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20246(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2633 *, TimeSpan_t1144 , const MethodInfo*))DefaultComparer_GetHashCode_m20246_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20247_gshared (DefaultComparer_t2633 * __this, TimeSpan_t1144  ___x, TimeSpan_t1144  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20247(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2633 *, TimeSpan_t1144 , TimeSpan_t1144 , const MethodInfo*))DefaultComparer_Equals_m20247_gshared)(__this, ___x, ___y, method)
