#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20031_gshared (InternalEnumerator_1_t2605 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20031(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2605 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20031_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20032_gshared (InternalEnumerator_1_t2605 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20032(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2605 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20032_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20033_gshared (InternalEnumerator_1_t2605 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20033(__this, method) (( void (*) (InternalEnumerator_1_t2605 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20033_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20034_gshared (InternalEnumerator_1_t2605 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20034(__this, method) (( bool (*) (InternalEnumerator_1_t2605 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20034_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2604  InternalEnumerator_1_get_Current_m20035_gshared (InternalEnumerator_1_t2605 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20035(__this, method) (( KeyValuePair_2_t2604  (*) (InternalEnumerator_1_t2605 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20035_gshared)(__this, method)
