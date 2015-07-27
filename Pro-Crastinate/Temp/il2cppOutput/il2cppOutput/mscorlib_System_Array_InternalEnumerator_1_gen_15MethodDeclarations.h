#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12969_gshared (InternalEnumerator_1_t2087 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12969(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2087 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12969_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12970_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12970(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2087 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12970_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12971_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12971(__this, method) (( void (*) (InternalEnumerator_1_t2087 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12971_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12972_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12972(__this, method) (( bool (*) (InternalEnumerator_1_t2087 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12972_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern "C" Keyframe_t198  InternalEnumerator_1_get_Current_m12973_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12973(__this, method) (( Keyframe_t198  (*) (InternalEnumerator_1_t2087 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12973_gshared)(__this, method)
