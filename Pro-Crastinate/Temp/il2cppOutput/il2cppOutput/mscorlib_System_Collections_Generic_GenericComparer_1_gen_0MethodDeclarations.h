#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
struct GenericComparer_1_t1925;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void GenericComparer_1__ctor_m11106_gshared (GenericComparer_1_t1925 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m11106(__this, method) (( void (*) (GenericComparer_1_t1925 *, const MethodInfo*))GenericComparer_1__ctor_m11106_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20191_gshared (GenericComparer_1_t1925 * __this, DateTimeOffset_t851  ___x, DateTimeOffset_t851  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m20191(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1925 *, DateTimeOffset_t851 , DateTimeOffset_t851 , const MethodInfo*))GenericComparer_1_Compare_m20191_gshared)(__this, ___x, ___y, method)
