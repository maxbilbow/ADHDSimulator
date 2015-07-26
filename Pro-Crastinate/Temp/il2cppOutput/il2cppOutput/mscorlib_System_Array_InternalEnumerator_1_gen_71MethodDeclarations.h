#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct InternalEnumerator_1_t2533;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19558_gshared (InternalEnumerator_1_t2533 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19558(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2533 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19558_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19559_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19559(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2533 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19559_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19560_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19560(__this, method) (( void (*) (InternalEnumerator_1_t2533 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19560_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19561_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19561(__this, method) (( bool (*) (InternalEnumerator_1_t2533 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19561_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t2532  InternalEnumerator_1_get_Current_m19562_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19562(__this, method) (( KeyValuePair_2_t2532  (*) (InternalEnumerator_1_t2533 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19562_gshared)(__this, method)
