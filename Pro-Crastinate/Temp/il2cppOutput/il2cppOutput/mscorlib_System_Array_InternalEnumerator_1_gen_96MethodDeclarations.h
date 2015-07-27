#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_96.h"
// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20243_gshared (InternalEnumerator_1_t2643 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20243(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2643 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20243_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20244_gshared (InternalEnumerator_1_t2643 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20244(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2643 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20244_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20245_gshared (InternalEnumerator_1_t2643 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20245(__this, method) (( void (*) (InternalEnumerator_1_t2643 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20245_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20246_gshared (InternalEnumerator_1_t2643 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20246(__this, method) (( bool (*) (InternalEnumerator_1_t2643 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20246_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1461  InternalEnumerator_1_get_Current_m20247_gshared (InternalEnumerator_1_t2643 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20247(__this, method) (( ILTokenInfo_t1461  (*) (InternalEnumerator_1_t2643 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20247_gshared)(__this, method)
