#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2503;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2492;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18985_gshared (ShimEnumerator_t2503 * __this, Dictionary_2_t2492 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18985(__this, ___host, method) (( void (*) (ShimEnumerator_t2503 *, Dictionary_2_t2492 *, const MethodInfo*))ShimEnumerator__ctor_m18985_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18986_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18986(__this, method) (( bool (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_MoveNext_m18986_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m18987_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18987(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Entry_m18987_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18988_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18988(__this, method) (( Object_t * (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Key_m18988_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18989_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18989(__this, method) (( Object_t * (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Value_m18989_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18990_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18990(__this, method) (( Object_t * (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Current_m18990_gshared)(__this, method)
