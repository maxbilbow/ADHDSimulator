#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t2542;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2529;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19386_gshared (ShimEnumerator_t2542 * __this, Dictionary_2_t2529 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19386(__this, ___host, method) (( void (*) (ShimEnumerator_t2542 *, Dictionary_2_t2529 *, const MethodInfo*))ShimEnumerator__ctor_m19386_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19387_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19387(__this, method) (( bool (*) (ShimEnumerator_t2542 *, const MethodInfo*))ShimEnumerator_MoveNext_m19387_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m19388_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19388(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2542 *, const MethodInfo*))ShimEnumerator_get_Entry_m19388_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19389_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19389(__this, method) (( Object_t * (*) (ShimEnumerator_t2542 *, const MethodInfo*))ShimEnumerator_get_Key_m19389_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19390_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19390(__this, method) (( Object_t * (*) (ShimEnumerator_t2542 *, const MethodInfo*))ShimEnumerator_get_Value_m19390_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19391_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19391(__this, method) (( Object_t * (*) (ShimEnumerator_t2542 *, const MethodInfo*))ShimEnumerator_get_Current_m19391_gshared)(__this, method)
