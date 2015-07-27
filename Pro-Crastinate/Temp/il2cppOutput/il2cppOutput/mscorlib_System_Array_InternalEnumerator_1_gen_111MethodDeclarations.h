#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_111.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20326_gshared (InternalEnumerator_1_t2660 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20326(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2660 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20326_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20327_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20327(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20327_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20328_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20328(__this, method) (( void (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20328_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20329_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20329(__this, method) (( bool (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20329_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t1156  InternalEnumerator_1_get_Current_m20330_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20330(__this, method) (( TimeSpan_t1156  (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20330_gshared)(__this, method)
