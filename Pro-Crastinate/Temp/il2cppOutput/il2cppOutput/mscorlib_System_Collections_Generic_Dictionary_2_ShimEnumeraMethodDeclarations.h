#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>
struct ShimEnumerator_t2038;
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
struct Dictionary_2_t2022;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12266_gshared (ShimEnumerator_t2038 * __this, Dictionary_2_t2022 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12266(__this, ___host, method) (( void (*) (ShimEnumerator_t2038 *, Dictionary_2_t2022 *, const MethodInfo*))ShimEnumerator__ctor_m12266_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12267_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12267(__this, method) (( bool (*) (ShimEnumerator_t2038 *, const MethodInfo*))ShimEnumerator_MoveNext_m12267_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m12268_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12268(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2038 *, const MethodInfo*))ShimEnumerator_get_Entry_m12268_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12269_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12269(__this, method) (( Object_t * (*) (ShimEnumerator_t2038 *, const MethodInfo*))ShimEnumerator_get_Key_m12269_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12270_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12270(__this, method) (( Object_t * (*) (ShimEnumerator_t2038 *, const MethodInfo*))ShimEnumerator_get_Value_m12270_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12271_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12271(__this, method) (( Object_t * (*) (ShimEnumerator_t2038 *, const MethodInfo*))ShimEnumerator_get_Current_m12271_gshared)(__this, method)
