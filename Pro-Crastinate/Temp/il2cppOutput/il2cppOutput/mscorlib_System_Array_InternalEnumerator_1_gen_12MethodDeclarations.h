#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Touch>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12856_gshared (InternalEnumerator_1_t2079 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12856(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2079 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12856_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Touch>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12857_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12857(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2079 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12857_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12858_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12858(__this, method) (( void (*) (InternalEnumerator_1_t2079 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12858_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Touch>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12859_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12859(__this, method) (( bool (*) (InternalEnumerator_1_t2079 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12859_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Touch>::get_Current()
extern "C" Touch_t188  InternalEnumerator_1_get_Current_m12860_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12860(__this, method) (( Touch_t188  (*) (InternalEnumerator_1_t2079 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12860_gshared)(__this, method)
