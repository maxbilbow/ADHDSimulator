#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2613;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1179;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20104_gshared (ShimEnumerator_t2613 * __this, Dictionary_2_t1179 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m20104(__this, ___host, method) (( void (*) (ShimEnumerator_t2613 *, Dictionary_2_t1179 *, const MethodInfo*))ShimEnumerator__ctor_m20104_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20105_gshared (ShimEnumerator_t2613 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m20105(__this, method) (( bool (*) (ShimEnumerator_t2613 *, const MethodInfo*))ShimEnumerator_MoveNext_m20105_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m20106_gshared (ShimEnumerator_t2613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m20106(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2613 *, const MethodInfo*))ShimEnumerator_get_Entry_m20106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20107_gshared (ShimEnumerator_t2613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m20107(__this, method) (( Object_t * (*) (ShimEnumerator_t2613 *, const MethodInfo*))ShimEnumerator_get_Key_m20107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20108_gshared (ShimEnumerator_t2613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m20108(__this, method) (( Object_t * (*) (ShimEnumerator_t2613 *, const MethodInfo*))ShimEnumerator_get_Value_m20108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20109_gshared (ShimEnumerator_t2613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m20109(__this, method) (( Object_t * (*) (ShimEnumerator_t2613 *, const MethodInfo*))ShimEnumerator_get_Current_m20109_gshared)(__this, method)
