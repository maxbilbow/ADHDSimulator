#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2621;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m20186_gshared (DefaultComparer_t2621 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20186(__this, method) (( void (*) (DefaultComparer_t2621 *, const MethodInfo*))DefaultComparer__ctor_m20186_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20187_gshared (DefaultComparer_t2621 * __this, DateTime_t578  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20187(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2621 *, DateTime_t578 , const MethodInfo*))DefaultComparer_GetHashCode_m20187_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20188_gshared (DefaultComparer_t2621 * __this, DateTime_t578  ___x, DateTime_t578  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20188(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2621 *, DateTime_t578 , DateTime_t578 , const MethodInfo*))DefaultComparer_Equals_m20188_gshared)(__this, ___x, ___y, method)
