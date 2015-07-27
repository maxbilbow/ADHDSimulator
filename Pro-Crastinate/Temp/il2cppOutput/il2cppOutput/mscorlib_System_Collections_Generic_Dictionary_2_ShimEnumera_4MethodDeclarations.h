#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2423;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2410;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17922_gshared (ShimEnumerator_t2423 * __this, Dictionary_2_t2410 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17922(__this, ___host, method) (( void (*) (ShimEnumerator_t2423 *, Dictionary_2_t2410 *, const MethodInfo*))ShimEnumerator__ctor_m17922_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17923_gshared (ShimEnumerator_t2423 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17923(__this, method) (( bool (*) (ShimEnumerator_t2423 *, const MethodInfo*))ShimEnumerator_MoveNext_m17923_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m17924_gshared (ShimEnumerator_t2423 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17924(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2423 *, const MethodInfo*))ShimEnumerator_get_Entry_m17924_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17925_gshared (ShimEnumerator_t2423 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17925(__this, method) (( Object_t * (*) (ShimEnumerator_t2423 *, const MethodInfo*))ShimEnumerator_get_Key_m17925_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17926_gshared (ShimEnumerator_t2423 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17926(__this, method) (( Object_t * (*) (ShimEnumerator_t2423 *, const MethodInfo*))ShimEnumerator_get_Value_m17926_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17927_gshared (ShimEnumerator_t2423 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17927(__this, method) (( Object_t * (*) (ShimEnumerator_t2423 *, const MethodInfo*))ShimEnumerator_get_Current_m17927_gshared)(__this, method)
