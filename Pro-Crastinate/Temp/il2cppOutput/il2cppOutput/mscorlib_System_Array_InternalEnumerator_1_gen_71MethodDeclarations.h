#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19817_gshared (InternalEnumerator_1_t2582 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19817(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2582 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19817_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19818_gshared (InternalEnumerator_1_t2582 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19818(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2582 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19818_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19819_gshared (InternalEnumerator_1_t2582 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19819(__this, method) (( void (*) (InternalEnumerator_1_t2582 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19819_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19820_gshared (InternalEnumerator_1_t2582 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19820(__this, method) (( bool (*) (InternalEnumerator_1_t2582 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19820_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t2581  InternalEnumerator_1_get_Current_m19821_gshared (InternalEnumerator_1_t2582 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19821(__this, method) (( KeyValuePair_2_t2581  (*) (InternalEnumerator_1_t2582 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19821_gshared)(__this, method)
