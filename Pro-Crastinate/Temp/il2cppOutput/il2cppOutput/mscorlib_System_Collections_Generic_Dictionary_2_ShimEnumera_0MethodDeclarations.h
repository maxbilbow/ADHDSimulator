#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2015;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2005;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12228_gshared (ShimEnumerator_t2015 * __this, Dictionary_2_t2005 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12228(__this, ___host, method) (( void (*) (ShimEnumerator_t2015 *, Dictionary_2_t2005 *, const MethodInfo*))ShimEnumerator__ctor_m12228_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12229_gshared (ShimEnumerator_t2015 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12229(__this, method) (( bool (*) (ShimEnumerator_t2015 *, const MethodInfo*))ShimEnumerator_MoveNext_m12229_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m12230_gshared (ShimEnumerator_t2015 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12230(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2015 *, const MethodInfo*))ShimEnumerator_get_Entry_m12230_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12231_gshared (ShimEnumerator_t2015 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12231(__this, method) (( Object_t * (*) (ShimEnumerator_t2015 *, const MethodInfo*))ShimEnumerator_get_Key_m12231_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12232_gshared (ShimEnumerator_t2015 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12232(__this, method) (( Object_t * (*) (ShimEnumerator_t2015 *, const MethodInfo*))ShimEnumerator_get_Value_m12232_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12233_gshared (ShimEnumerator_t2015 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12233(__this, method) (( Object_t * (*) (ShimEnumerator_t2015 *, const MethodInfo*))ShimEnumerator_get_Current_m12233_gshared)(__this, method)
