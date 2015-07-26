#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1924;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11103_gshared (GenericEqualityComparer_1_t1924 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11103(__this, method) (( void (*) (GenericEqualityComparer_1_t1924 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m11103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m20167_gshared (GenericEqualityComparer_1_t1924 * __this, DateTime_t578  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m20167(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1924 *, DateTime_t578 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m20167_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m20168_gshared (GenericEqualityComparer_1_t1924 * __this, DateTime_t578  ___x, DateTime_t578  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m20168(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1924 *, DateTime_t578 , DateTime_t578 , const MethodInfo*))GenericEqualityComparer_1_Equals_m20168_gshared)(__this, ___x, ___y, method)
