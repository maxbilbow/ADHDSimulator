#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1958;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m11194_gshared (GenericComparer_1_t1958 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m11194(__this, method) (( void (*) (GenericComparer_1_t1958 *, const MethodInfo*))GenericComparer_1__ctor_m11194_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20495_gshared (GenericComparer_1_t1958 * __this, TimeSpan_t1156  ___x, TimeSpan_t1156  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m20495(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1958 *, TimeSpan_t1156 , TimeSpan_t1156 , const MethodInfo*))GenericComparer_1_Compare_m20495_gshared)(__this, ___x, ___y, method)
