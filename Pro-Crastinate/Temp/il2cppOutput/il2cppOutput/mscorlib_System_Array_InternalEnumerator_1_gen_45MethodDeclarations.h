#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45.h"

// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17228_gshared (InternalEnumerator_1_t2376 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17228(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2376 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17228_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17229_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17229(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17229_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17230_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17230(__this, method) (( void (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17230_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17231_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17231(__this, method) (( bool (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17231_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m17232_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17232(__this, method) (( uint8_t (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17232_gshared)(__this, method)
