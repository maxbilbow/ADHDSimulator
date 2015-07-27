#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_84.h"
// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"

// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20178_gshared (InternalEnumerator_1_t2627 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20178(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2627 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20178_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20179_gshared (InternalEnumerator_1_t2627 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20179(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2627 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20179_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20180_gshared (InternalEnumerator_1_t2627 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20180(__this, method) (( void (*) (InternalEnumerator_1_t2627 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20180_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20181_gshared (InternalEnumerator_1_t2627 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20181(__this, method) (( bool (*) (InternalEnumerator_1_t2627 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20181_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
extern "C" TableRange_t1300  InternalEnumerator_1_get_Current_m20182_gshared (InternalEnumerator_1_t2627 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20182(__this, method) (( TableRange_t1300  (*) (InternalEnumerator_1_t2627 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20182_gshared)(__this, method)
