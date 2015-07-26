#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>
struct ShimEnumerator_t1995;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
struct Dictionary_2_t1981;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11997_gshared (ShimEnumerator_t1995 * __this, Dictionary_2_t1981 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11997(__this, ___host, method) (( void (*) (ShimEnumerator_t1995 *, Dictionary_2_t1981 *, const MethodInfo*))ShimEnumerator__ctor_m11997_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11998_gshared (ShimEnumerator_t1995 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11998(__this, method) (( bool (*) (ShimEnumerator_t1995 *, const MethodInfo*))ShimEnumerator_MoveNext_m11998_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m11999_gshared (ShimEnumerator_t1995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11999(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t1995 *, const MethodInfo*))ShimEnumerator_get_Entry_m11999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12000_gshared (ShimEnumerator_t1995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12000(__this, method) (( Object_t * (*) (ShimEnumerator_t1995 *, const MethodInfo*))ShimEnumerator_get_Key_m12000_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12001_gshared (ShimEnumerator_t1995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12001(__this, method) (( Object_t * (*) (ShimEnumerator_t1995 *, const MethodInfo*))ShimEnumerator_get_Value_m12001_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12002_gshared (ShimEnumerator_t1995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12002(__this, method) (( Object_t * (*) (ShimEnumerator_t1995 *, const MethodInfo*))ShimEnumerator_get_Current_m12002_gshared)(__this, method)
