#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
struct GenericEqualityComparer_1_t1926;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11108_gshared (GenericEqualityComparer_1_t1926 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11108(__this, method) (( void (*) (GenericEqualityComparer_1_t1926 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m11108_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m20199_gshared (GenericEqualityComparer_1_t1926 * __this, DateTimeOffset_t851  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m20199(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1926 *, DateTimeOffset_t851 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m20199_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m20200_gshared (GenericEqualityComparer_1_t1926 * __this, DateTimeOffset_t851  ___x, DateTimeOffset_t851  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m20200(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1926 *, DateTimeOffset_t851 , DateTimeOffset_t851 , const MethodInfo*))GenericEqualityComparer_1_Equals_m20200_gshared)(__this, ___x, ___y, method)
