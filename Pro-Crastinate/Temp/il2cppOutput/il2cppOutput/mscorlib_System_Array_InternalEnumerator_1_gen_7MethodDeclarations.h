#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12190_gshared (InternalEnumerator_1_t2028 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12190(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2028 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12190_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12191_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12191(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2028 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12191_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12192_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12192(__this, method) (( void (*) (InternalEnumerator_1_t2028 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12192_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12193_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12193(__this, method) (( bool (*) (InternalEnumerator_1_t2028 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12193_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::get_Current()
extern "C" Link_t1367  InternalEnumerator_1_get_Current_m12194_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12194(__this, method) (( Link_t1367  (*) (InternalEnumerator_1_t2028 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12194_gshared)(__this, method)
