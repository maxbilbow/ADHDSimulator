#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>
struct DefaultComparer_t2413;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::.ctor()
extern "C" void DefaultComparer__ctor_m18119_gshared (DefaultComparer_t2413 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18119(__this, method) (( void (*) (DefaultComparer_t2413 *, const MethodInfo*))DefaultComparer__ctor_m18119_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18120_gshared (DefaultComparer_t2413 * __this, uint64_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18120(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2413 *, uint64_t, const MethodInfo*))DefaultComparer_GetHashCode_m18120_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18121_gshared (DefaultComparer_t2413 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18121(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2413 *, uint64_t, uint64_t, const MethodInfo*))DefaultComparer_Equals_m18121_gshared)(__this, ___x, ___y, method)
