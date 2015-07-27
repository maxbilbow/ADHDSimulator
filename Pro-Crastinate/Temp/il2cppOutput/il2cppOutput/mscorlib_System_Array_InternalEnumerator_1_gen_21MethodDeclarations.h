#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Plane>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Plane>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13207_gshared (InternalEnumerator_1_t2103 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13207(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2103 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13207_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Plane>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13208_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13208(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13208_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Plane>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13209_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13209(__this, method) (( void (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13209_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Plane>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13210_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13210(__this, method) (( bool (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13210_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Plane>::get_Current()
extern "C" Plane_t528  InternalEnumerator_1_get_Current_m13211_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13211(__this, method) (( Plane_t528  (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13211_gshared)(__this, method)
