﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_72.h"

// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19828_gshared (InternalEnumerator_1_t2583 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19828(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2583 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19828_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19829_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19829(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19829_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19830_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19830(__this, method) (( void (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19830_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19831_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19831(__this, method) (( bool (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19831_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
extern "C" bool InternalEnumerator_1_get_Current_m19832_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19832(__this, method) (( bool (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19832_gshared)(__this, method)