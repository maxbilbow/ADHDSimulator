#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1927;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m11112_gshared (GenericComparer_1_t1927 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m11112(__this, method) (( void (*) (GenericComparer_1_t1927 *, const MethodInfo*))GenericComparer_1__ctor_m11112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m20214_gshared (GenericComparer_1_t1927 * __this, Guid_t852  ___x, Guid_t852  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m20214(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1927 *, Guid_t852 , Guid_t852 , const MethodInfo*))GenericComparer_1_Compare_m20214_gshared)(__this, ___x, ___y, method)
