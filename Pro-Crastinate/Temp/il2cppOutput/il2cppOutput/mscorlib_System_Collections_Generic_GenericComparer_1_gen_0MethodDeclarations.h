#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
struct GenericComparer_1_t1954;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void GenericComparer_1__ctor_m11187_gshared (GenericComparer_1_t1954 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m11187(__this, method) (( void (*) (GenericComparer_1_t1954 *, const MethodInfo*))GenericComparer_1__ctor_m11187_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20456_gshared (GenericComparer_1_t1954 * __this, DateTimeOffset_t862  ___x, DateTimeOffset_t862  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m20456(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1954 *, DateTimeOffset_t862 , DateTimeOffset_t862 , const MethodInfo*))GenericComparer_1_Compare_m20456_gshared)(__this, ___x, ___y, method)
