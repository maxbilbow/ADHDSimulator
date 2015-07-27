#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20133_gshared (InternalEnumerator_1_t2620 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20133(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2620 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20133_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20134_gshared (InternalEnumerator_1_t2620 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20134(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2620 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20134_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20135_gshared (InternalEnumerator_1_t2620 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20135(__this, method) (( void (*) (InternalEnumerator_1_t2620 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20135_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20136_gshared (InternalEnumerator_1_t2620 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20136(__this, method) (( bool (*) (InternalEnumerator_1_t2620 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20136_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
extern "C" uint64_t InternalEnumerator_1_get_Current_m20137_gshared (InternalEnumerator_1_t2620 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20137(__this, method) (( uint64_t (*) (InternalEnumerator_1_t2620 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20137_gshared)(__this, method)
