#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2235;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2223;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15024_gshared (ShimEnumerator_t2235 * __this, Dictionary_2_t2223 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15024(__this, ___host, method) (( void (*) (ShimEnumerator_t2235 *, Dictionary_2_t2223 *, const MethodInfo*))ShimEnumerator__ctor_m15024_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15025_gshared (ShimEnumerator_t2235 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15025(__this, method) (( bool (*) (ShimEnumerator_t2235 *, const MethodInfo*))ShimEnumerator_MoveNext_m15025_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m15026_gshared (ShimEnumerator_t2235 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15026(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2235 *, const MethodInfo*))ShimEnumerator_get_Entry_m15026_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15027_gshared (ShimEnumerator_t2235 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15027(__this, method) (( Object_t * (*) (ShimEnumerator_t2235 *, const MethodInfo*))ShimEnumerator_get_Key_m15027_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15028_gshared (ShimEnumerator_t2235 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15028(__this, method) (( Object_t * (*) (ShimEnumerator_t2235 *, const MethodInfo*))ShimEnumerator_get_Value_m15028_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15029_gshared (ShimEnumerator_t2235 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15029(__this, method) (( Object_t * (*) (ShimEnumerator_t2235 *, const MethodInfo*))ShimEnumerator_get_Current_m15029_gshared)(__this, method)
