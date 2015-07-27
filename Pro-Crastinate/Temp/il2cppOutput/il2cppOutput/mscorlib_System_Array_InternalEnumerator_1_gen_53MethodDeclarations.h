#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18462_gshared (InternalEnumerator_1_t2469 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18462(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2469 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18462_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18463_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18463(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18463_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18464_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18464(__this, method) (( void (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18464_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18465_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18465(__this, method) (( bool (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18465_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current()
extern "C" KeyValuePair_2_t2468  InternalEnumerator_1_get_Current_m18466_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18466(__this, method) (( KeyValuePair_2_t2468  (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18466_gshared)(__this, method)
