﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12426_gshared (InternalEnumerator_1_t2050 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12426(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2050 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12426_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12427_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12427(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2050 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12427_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12428_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12428(__this, method) (( void (*) (InternalEnumerator_1_t2050 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12428_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12429_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12429(__this, method) (( bool (*) (InternalEnumerator_1_t2050 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12429_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2049  InternalEnumerator_1_get_Current_m12430_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12430(__this, method) (( KeyValuePair_2_t2049  (*) (InternalEnumerator_1_t2050 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12430_gshared)(__this, method)