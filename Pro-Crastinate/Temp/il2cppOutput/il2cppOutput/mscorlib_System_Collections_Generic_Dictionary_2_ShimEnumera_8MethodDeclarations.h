#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2592;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2579;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19899_gshared (ShimEnumerator_t2592 * __this, Dictionary_2_t2579 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19899(__this, ___host, method) (( void (*) (ShimEnumerator_t2592 *, Dictionary_2_t2579 *, const MethodInfo*))ShimEnumerator__ctor_m19899_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19900_gshared (ShimEnumerator_t2592 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19900(__this, method) (( bool (*) (ShimEnumerator_t2592 *, const MethodInfo*))ShimEnumerator_MoveNext_m19900_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m19901_gshared (ShimEnumerator_t2592 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19901(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2592 *, const MethodInfo*))ShimEnumerator_get_Entry_m19901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19902_gshared (ShimEnumerator_t2592 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19902(__this, method) (( Object_t * (*) (ShimEnumerator_t2592 *, const MethodInfo*))ShimEnumerator_get_Key_m19902_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19903_gshared (ShimEnumerator_t2592 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19903(__this, method) (( Object_t * (*) (ShimEnumerator_t2592 *, const MethodInfo*))ShimEnumerator_get_Value_m19903_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19904_gshared (ShimEnumerator_t2592 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19904(__this, method) (( Object_t * (*) (ShimEnumerator_t2592 *, const MethodInfo*))ShimEnumerator_get_Current_m19904_gshared)(__this, method)
