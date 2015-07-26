#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2374;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2362;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17662_gshared (ShimEnumerator_t2374 * __this, Dictionary_2_t2362 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17662(__this, ___host, method) (( void (*) (ShimEnumerator_t2374 *, Dictionary_2_t2362 *, const MethodInfo*))ShimEnumerator__ctor_m17662_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17663_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17663(__this, method) (( bool (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_MoveNext_m17663_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m17664_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17664(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Entry_m17664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17665_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17665(__this, method) (( Object_t * (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Key_m17665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17666_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17666(__this, method) (( Object_t * (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Value_m17666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17667_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17667(__this, method) (( Object_t * (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Current_m17667_gshared)(__this, method)
