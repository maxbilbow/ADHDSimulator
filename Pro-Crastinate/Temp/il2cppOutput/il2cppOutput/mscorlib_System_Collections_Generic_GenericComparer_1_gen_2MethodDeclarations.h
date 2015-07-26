#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1929;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m11111_gshared (GenericComparer_1_t1929 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m11111(__this, method) (( void (*) (GenericComparer_1_t1929 *, const MethodInfo*))GenericComparer_1__ctor_m11111_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20228_gshared (GenericComparer_1_t1929 * __this, TimeSpan_t1144  ___x, TimeSpan_t1144  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m20228(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1929 *, TimeSpan_t1144 , TimeSpan_t1144 , const MethodInfo*))GenericComparer_1_Compare_m20228_gshared)(__this, ___x, ___y, method)
