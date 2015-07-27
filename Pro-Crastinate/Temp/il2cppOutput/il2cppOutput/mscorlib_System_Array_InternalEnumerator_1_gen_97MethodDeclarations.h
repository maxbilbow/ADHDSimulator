#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_97.h"
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20248_gshared (InternalEnumerator_1_t2644 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20248(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2644 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20248_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20249_gshared (InternalEnumerator_1_t2644 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20249(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2644 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20249_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20250_gshared (InternalEnumerator_1_t2644 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20250(__this, method) (( void (*) (InternalEnumerator_1_t2644 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20250_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20251_gshared (InternalEnumerator_1_t2644 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20251(__this, method) (( bool (*) (InternalEnumerator_1_t2644 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20251_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1463  InternalEnumerator_1_get_Current_m20252_gshared (InternalEnumerator_1_t2644 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20252(__this, method) (( LabelData_t1463  (*) (InternalEnumerator_1_t2644 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20252_gshared)(__this, method)
