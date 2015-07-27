#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_109.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20316_gshared (InternalEnumerator_1_t2658 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20316(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2658 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20316_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20317_gshared (InternalEnumerator_1_t2658 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20317(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2658 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20317_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20318_gshared (InternalEnumerator_1_t2658 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20318(__this, method) (( void (*) (InternalEnumerator_1_t2658 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20318_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20319_gshared (InternalEnumerator_1_t2658 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20319(__this, method) (( bool (*) (InternalEnumerator_1_t2658 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20319_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t586  InternalEnumerator_1_get_Current_m20320_gshared (InternalEnumerator_1_t2658 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20320(__this, method) (( DateTime_t586  (*) (InternalEnumerator_1_t2658 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20320_gshared)(__this, method)
