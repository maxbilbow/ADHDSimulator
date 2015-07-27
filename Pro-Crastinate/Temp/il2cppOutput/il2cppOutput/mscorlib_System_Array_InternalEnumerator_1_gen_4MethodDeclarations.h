﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<RMX.Bugger/Log>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"

// System.Void System.Array/InternalEnumerator`1<RMX.Bugger/Log>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11538_gshared (InternalEnumerator_1_t1982 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11538(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1982 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11538_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<RMX.Bugger/Log>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11539_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11539(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1982 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11539_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<RMX.Bugger/Log>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11540_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11540(__this, method) (( void (*) (InternalEnumerator_1_t1982 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11540_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<RMX.Bugger/Log>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11541_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11541(__this, method) (( bool (*) (InternalEnumerator_1_t1982 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11541_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<RMX.Bugger/Log>::get_Current()
extern "C" Log_t5  InternalEnumerator_1_get_Current_m11542_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11542(__this, method) (( Log_t5  (*) (InternalEnumerator_1_t1982 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11542_gshared)(__this, method)