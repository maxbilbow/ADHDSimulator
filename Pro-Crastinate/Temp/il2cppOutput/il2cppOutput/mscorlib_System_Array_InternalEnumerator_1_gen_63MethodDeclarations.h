#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19304_gshared (InternalEnumerator_1_t2532 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19304(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2532 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19304_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19305_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19305(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2532 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19305_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19306_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19306(__this, method) (( void (*) (InternalEnumerator_1_t2532 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19306_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19307_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19307(__this, method) (( bool (*) (InternalEnumerator_1_t2532 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19307_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Current()
extern "C" KeyValuePair_2_t2531  InternalEnumerator_1_get_Current_m19308_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19308(__this, method) (( KeyValuePair_2_t2531  (*) (InternalEnumerator_1_t2532 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19308_gshared)(__this, method)
