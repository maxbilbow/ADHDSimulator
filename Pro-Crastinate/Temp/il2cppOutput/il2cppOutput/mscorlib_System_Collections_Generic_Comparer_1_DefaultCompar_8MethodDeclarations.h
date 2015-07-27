#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2677;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m20483_gshared (DefaultComparer_t2677 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20483(__this, method) (( void (*) (DefaultComparer_t2677 *, const MethodInfo*))DefaultComparer__ctor_m20483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m20484_gshared (DefaultComparer_t2677 * __this, Guid_t863  ___x, Guid_t863  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m20484(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2677 *, Guid_t863 , Guid_t863 , const MethodInfo*))DefaultComparer_Compare_m20484_gshared)(__this, ___x, ___y, method)
