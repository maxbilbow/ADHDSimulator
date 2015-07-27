#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18286_gshared (InternalEnumerator_1_t2450 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18286(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2450 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18286_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18287_gshared (InternalEnumerator_1_t2450 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18287(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2450 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18287_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18288_gshared (InternalEnumerator_1_t2450 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18288(__this, method) (( void (*) (InternalEnumerator_1_t2450 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18288_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18289_gshared (InternalEnumerator_1_t2450 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18289(__this, method) (( bool (*) (InternalEnumerator_1_t2450 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18289_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2449  InternalEnumerator_1_get_Current_m18290_gshared (InternalEnumerator_1_t2450 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18290(__this, method) (( KeyValuePair_2_t2449  (*) (InternalEnumerator_1_t2450 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18290_gshared)(__this, method)
