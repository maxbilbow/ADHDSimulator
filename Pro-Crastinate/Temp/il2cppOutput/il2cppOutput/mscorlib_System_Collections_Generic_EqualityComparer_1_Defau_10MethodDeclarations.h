#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t2505;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m18996_gshared (DefaultComparer_t2505 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18996(__this, method) (( void (*) (DefaultComparer_t2505 *, const MethodInfo*))DefaultComparer__ctor_m18996_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18997_gshared (DefaultComparer_t2505 * __this, KeyValuePair_2_t2049  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18997(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2505 *, KeyValuePair_2_t2049 , const MethodInfo*))DefaultComparer_GetHashCode_m18997_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18998_gshared (DefaultComparer_t2505 * __this, KeyValuePair_2_t2049  ___x, KeyValuePair_2_t2049  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18998(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2505 *, KeyValuePair_2_t2049 , KeyValuePair_2_t2049 , const MethodInfo*))DefaultComparer_Equals_m18998_gshared)(__this, ___x, ___y, method)
