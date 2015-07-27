#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12174_gshared (InternalEnumerator_1_t2026 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12174(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2026 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12174_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12175_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12175(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2026 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12175_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12176_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12176(__this, method) (( void (*) (InternalEnumerator_1_t2026 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12176_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12177_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12177(__this, method) (( bool (*) (InternalEnumerator_1_t2026 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12177_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::get_Current()
extern "C" KeyValuePair_2_t2025  InternalEnumerator_1_get_Current_m12178_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12178(__this, method) (( KeyValuePair_2_t2025  (*) (InternalEnumerator_1_t2026 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12178_gshared)(__this, method)
