#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2564;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1170;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19842_gshared (ShimEnumerator_t2564 * __this, Dictionary_2_t1170 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19842(__this, ___host, method) (( void (*) (ShimEnumerator_t2564 *, Dictionary_2_t1170 *, const MethodInfo*))ShimEnumerator__ctor_m19842_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19843_gshared (ShimEnumerator_t2564 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19843(__this, method) (( bool (*) (ShimEnumerator_t2564 *, const MethodInfo*))ShimEnumerator_MoveNext_m19843_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m19844_gshared (ShimEnumerator_t2564 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19844(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2564 *, const MethodInfo*))ShimEnumerator_get_Entry_m19844_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19845_gshared (ShimEnumerator_t2564 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19845(__this, method) (( Object_t * (*) (ShimEnumerator_t2564 *, const MethodInfo*))ShimEnumerator_get_Key_m19845_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19846_gshared (ShimEnumerator_t2564 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19846(__this, method) (( Object_t * (*) (ShimEnumerator_t2564 *, const MethodInfo*))ShimEnumerator_get_Value_m19846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19847_gshared (ShimEnumerator_t2564 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19847(__this, method) (( Object_t * (*) (ShimEnumerator_t2564 *, const MethodInfo*))ShimEnumerator_get_Current_m19847_gshared)(__this, method)
