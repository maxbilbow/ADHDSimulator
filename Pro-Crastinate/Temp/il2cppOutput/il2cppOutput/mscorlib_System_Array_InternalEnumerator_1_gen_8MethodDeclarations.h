#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12257_gshared (InternalEnumerator_1_t2036 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12257(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2036 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12257_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12258_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12258(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2036 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12258_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12259_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12259(__this, method) (( void (*) (InternalEnumerator_1_t2036 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12259_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12260_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12260(__this, method) (( bool (*) (InternalEnumerator_1_t2036 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12260_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t1247  InternalEnumerator_1_get_Current_m12261_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12261(__this, method) (( DictionaryEntry_t1247  (*) (InternalEnumerator_1_t2036 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12261_gshared)(__this, method)
