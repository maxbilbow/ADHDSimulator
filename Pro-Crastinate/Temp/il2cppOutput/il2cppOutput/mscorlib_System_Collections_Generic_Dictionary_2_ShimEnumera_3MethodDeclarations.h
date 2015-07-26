#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2186;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2173;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14750_gshared (ShimEnumerator_t2186 * __this, Dictionary_2_t2173 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14750(__this, ___host, method) (( void (*) (ShimEnumerator_t2186 *, Dictionary_2_t2173 *, const MethodInfo*))ShimEnumerator__ctor_m14750_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14751_gshared (ShimEnumerator_t2186 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14751(__this, method) (( bool (*) (ShimEnumerator_t2186 *, const MethodInfo*))ShimEnumerator_MoveNext_m14751_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m14752_gshared (ShimEnumerator_t2186 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14752(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2186 *, const MethodInfo*))ShimEnumerator_get_Entry_m14752_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14753_gshared (ShimEnumerator_t2186 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14753(__this, method) (( Object_t * (*) (ShimEnumerator_t2186 *, const MethodInfo*))ShimEnumerator_get_Key_m14753_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14754_gshared (ShimEnumerator_t2186 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14754(__this, method) (( Object_t * (*) (ShimEnumerator_t2186 *, const MethodInfo*))ShimEnumerator_get_Value_m14754_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14755_gshared (ShimEnumerator_t2186 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14755(__this, method) (( Object_t * (*) (ShimEnumerator_t2186 *, const MethodInfo*))ShimEnumerator_get_Current_m14755_gshared)(__this, method)
