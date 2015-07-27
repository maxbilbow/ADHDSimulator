#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11325_gshared (InternalEnumerator_1_t1963 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11325(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1963 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11325_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11326_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11326(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1963 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11326_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11327_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11327(__this, method) (( void (*) (InternalEnumerator_1_t1963 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11327_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11328_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11328(__this, method) (( bool (*) (InternalEnumerator_1_t1963 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11328_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
extern "C" Object_t * InternalEnumerator_1_get_Current_m11329_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11329(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1963 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11329_gshared)(__this, method)
