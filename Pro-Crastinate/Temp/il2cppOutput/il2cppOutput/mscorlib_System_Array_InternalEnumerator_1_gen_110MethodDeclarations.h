#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t2610;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20047_gshared (InternalEnumerator_1_t2610 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20047(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2610 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20047_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20048_gshared (InternalEnumerator_1_t2610 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20048(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2610 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20048_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20049_gshared (InternalEnumerator_1_t2610 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20049(__this, method) (( void (*) (InternalEnumerator_1_t2610 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20049_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20050_gshared (InternalEnumerator_1_t2610 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20050(__this, method) (( bool (*) (InternalEnumerator_1_t2610 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20050_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t1144  InternalEnumerator_1_get_Current_m20051_gshared (InternalEnumerator_1_t2610 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20051(__this, method) (( TimeSpan_t1144  (*) (InternalEnumerator_1_t2610 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20051_gshared)(__this, method)
