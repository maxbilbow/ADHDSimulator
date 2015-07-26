#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2623;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m20197_gshared (DefaultComparer_t2623 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20197(__this, method) (( void (*) (DefaultComparer_t2623 *, const MethodInfo*))DefaultComparer__ctor_m20197_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m20198_gshared (DefaultComparer_t2623 * __this, DateTimeOffset_t851  ___x, DateTimeOffset_t851  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m20198(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2623 *, DateTimeOffset_t851 , DateTimeOffset_t851 , const MethodInfo*))DefaultComparer_Compare_m20198_gshared)(__this, ___x, ___y, method)
