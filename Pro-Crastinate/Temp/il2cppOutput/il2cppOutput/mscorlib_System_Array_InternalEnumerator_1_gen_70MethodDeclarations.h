#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19713_gshared (InternalEnumerator_1_t2577 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19713(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2577 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19713_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19714_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19714(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2577 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19714_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19715_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19715(__this, method) (( void (*) (InternalEnumerator_1_t2577 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19715_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19716_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19716(__this, method) (( bool (*) (InternalEnumerator_1_t2577 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19716_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt16>::get_Current()
extern "C" uint16_t InternalEnumerator_1_get_Current_m19717_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19717(__this, method) (( uint16_t (*) (InternalEnumerator_1_t2577 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19717_gshared)(__this, method)
