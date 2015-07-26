#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>
struct ShimEnumerator_t2076;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
struct Dictionary_2_t2062;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13104_gshared (ShimEnumerator_t2076 * __this, Dictionary_2_t2062 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13104(__this, ___host, method) (( void (*) (ShimEnumerator_t2076 *, Dictionary_2_t2062 *, const MethodInfo*))ShimEnumerator__ctor_m13104_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13105_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13105(__this, method) (( bool (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_MoveNext_m13105_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m13106_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13106(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Entry_m13106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13107_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13107(__this, method) (( Object_t * (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Key_m13107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13108_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13108(__this, method) (( Object_t * (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Value_m13108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13109_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13109(__this, method) (( Object_t * (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Current_m13109_gshared)(__this, method)
