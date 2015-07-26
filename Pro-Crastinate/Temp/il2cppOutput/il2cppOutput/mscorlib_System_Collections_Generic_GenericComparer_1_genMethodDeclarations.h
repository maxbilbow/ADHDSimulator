#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTime>
struct GenericComparer_1_t1923;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern "C" void GenericComparer_1__ctor_m11102_gshared (GenericComparer_1_t1923 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m11102(__this, method) (( void (*) (GenericComparer_1_t1923 *, const MethodInfo*))GenericComparer_1__ctor_m11102_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20160_gshared (GenericComparer_1_t1923 * __this, DateTime_t578  ___x, DateTime_t578  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m20160(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1923 *, DateTime_t578 , DateTime_t578 , const MethodInfo*))GenericComparer_1_Compare_m20160_gshared)(__this, ___x, ___y, method)
