#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14850_gshared (InternalEnumerator_1_t2219 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14850(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2219 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14850_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14851_gshared (InternalEnumerator_1_t2219 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14851(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2219 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14851_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14852_gshared (InternalEnumerator_1_t2219 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14852(__this, method) (( void (*) (InternalEnumerator_1_t2219 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14852_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14853_gshared (InternalEnumerator_1_t2219 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14853(__this, method) (( bool (*) (InternalEnumerator_1_t2219 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14853_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern "C" RaycastHit_t196  InternalEnumerator_1_get_Current_m14854_gshared (InternalEnumerator_1_t2219 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14854(__this, method) (( RaycastHit_t196  (*) (InternalEnumerator_1_t2219 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14854_gshared)(__this, method)
