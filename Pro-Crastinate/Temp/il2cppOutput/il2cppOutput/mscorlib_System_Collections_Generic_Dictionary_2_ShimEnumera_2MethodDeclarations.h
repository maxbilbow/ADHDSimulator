#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2158;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2147;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14406_gshared (ShimEnumerator_t2158 * __this, Dictionary_2_t2147 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14406(__this, ___host, method) (( void (*) (ShimEnumerator_t2158 *, Dictionary_2_t2147 *, const MethodInfo*))ShimEnumerator__ctor_m14406_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14407_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14407(__this, method) (( bool (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_MoveNext_m14407_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m14408_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14408(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Entry_m14408_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14409_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14409(__this, method) (( Object_t * (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Key_m14409_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14410_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14410(__this, method) (( Object_t * (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Value_m14410_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14411_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14411(__this, method) (( Object_t * (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Current_m14411_gshared)(__this, method)
