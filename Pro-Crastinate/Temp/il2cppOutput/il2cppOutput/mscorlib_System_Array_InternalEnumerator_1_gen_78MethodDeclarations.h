#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_78.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"

// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20123_gshared (InternalEnumerator_1_t2618 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20123(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2618 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20123_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20124_gshared (InternalEnumerator_1_t2618 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20124(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2618 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20124_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20125_gshared (InternalEnumerator_1_t2618 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20125(__this, method) (( void (*) (InternalEnumerator_1_t2618 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20125_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20126_gshared (InternalEnumerator_1_t2618 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20126(__this, method) (( bool (*) (InternalEnumerator_1_t2618 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20126_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
extern "C" UriScheme_t1235  InternalEnumerator_1_get_Current_m20127_gshared (InternalEnumerator_1_t2618 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20127(__this, method) (( UriScheme_t1235  (*) (InternalEnumerator_1_t2618 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20127_gshared)(__this, method)
