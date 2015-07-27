#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
struct DefaultComparer_t2595;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m19913_gshared (DefaultComparer_t2595 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19913(__this, method) (( void (*) (DefaultComparer_t2595 *, const MethodInfo*))DefaultComparer__ctor_m19913_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19914_gshared (DefaultComparer_t2595 * __this, bool ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19914(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2595 *, bool, const MethodInfo*))DefaultComparer_GetHashCode_m19914_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19915_gshared (DefaultComparer_t2595 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19915(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2595 *, bool, bool, const MethodInfo*))DefaultComparer_Equals_m19915_gshared)(__this, ___x, ___y, method)
