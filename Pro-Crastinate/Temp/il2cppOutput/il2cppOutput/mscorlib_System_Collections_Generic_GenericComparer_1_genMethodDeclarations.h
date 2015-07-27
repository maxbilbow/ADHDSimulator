#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTime>
struct GenericComparer_1_t1952;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern "C" void GenericComparer_1__ctor_m11185_gshared (GenericComparer_1_t1952 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m11185(__this, method) (( void (*) (GenericComparer_1_t1952 *, const MethodInfo*))GenericComparer_1__ctor_m11185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20439_gshared (GenericComparer_1_t1952 * __this, DateTime_t586  ___x, DateTime_t586  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m20439(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1952 *, DateTime_t586 , DateTime_t586 , const MethodInfo*))GenericComparer_1_Compare_m20439_gshared)(__this, ___x, ___y, method)
