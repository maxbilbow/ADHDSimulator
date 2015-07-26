#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2629;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m20228_gshared (DefaultComparer_t2629 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20228(__this, method) (( void (*) (DefaultComparer_t2629 *, const MethodInfo*))DefaultComparer__ctor_m20228_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20229_gshared (DefaultComparer_t2629 * __this, Guid_t852  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20229(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2629 *, Guid_t852 , const MethodInfo*))DefaultComparer_GetHashCode_m20229_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20230_gshared (DefaultComparer_t2629 * __this, Guid_t852  ___x, Guid_t852  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20230(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2629 *, Guid_t852 , Guid_t852 , const MethodInfo*))DefaultComparer_Equals_m20230_gshared)(__this, ___x, ___y, method)
