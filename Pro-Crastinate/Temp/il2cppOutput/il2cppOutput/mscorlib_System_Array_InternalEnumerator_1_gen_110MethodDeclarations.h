#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_110.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20321_gshared (InternalEnumerator_1_t2659 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20321(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2659 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20321_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20322_gshared (InternalEnumerator_1_t2659 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20322(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2659 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20322_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20323_gshared (InternalEnumerator_1_t2659 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20323(__this, method) (( void (*) (InternalEnumerator_1_t2659 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20323_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20324_gshared (InternalEnumerator_1_t2659 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20324(__this, method) (( bool (*) (InternalEnumerator_1_t2659 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20324_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t847  InternalEnumerator_1_get_Current_m20325_gshared (InternalEnumerator_1_t2659 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20325(__this, method) (( Decimal_t847  (*) (InternalEnumerator_1_t2659 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20325_gshared)(__this, method)
