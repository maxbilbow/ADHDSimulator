#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<RMX.EventStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Array/InternalEnumerator`1<RMX.EventStatus>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12185_gshared (InternalEnumerator_1_t2027 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12185(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2027 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12185_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<RMX.EventStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12186_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12186(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2027 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12186_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<RMX.EventStatus>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12187_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12187(__this, method) (( void (*) (InternalEnumerator_1_t2027 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12187_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<RMX.EventStatus>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12188_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12188(__this, method) (( bool (*) (InternalEnumerator_1_t2027 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12188_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<RMX.EventStatus>::get_Current()
extern "C" int32_t InternalEnumerator_1_get_Current_m12189_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12189(__this, method) (( int32_t (*) (InternalEnumerator_1_t2027 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12189_gshared)(__this, method)
