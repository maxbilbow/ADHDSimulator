#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2679;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m20492_gshared (DefaultComparer_t2679 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20492(__this, method) (( void (*) (DefaultComparer_t2679 *, const MethodInfo*))DefaultComparer__ctor_m20492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20493_gshared (DefaultComparer_t2679 * __this, Guid_t863  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20493(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2679 *, Guid_t863 , const MethodInfo*))DefaultComparer_GetHashCode_m20493_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20494_gshared (DefaultComparer_t2679 * __this, Guid_t863  ___x, Guid_t863  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20494(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2679 *, Guid_t863 , Guid_t863 , const MethodInfo*))DefaultComparer_Equals_m20494_gshared)(__this, ___x, ___y, method)
