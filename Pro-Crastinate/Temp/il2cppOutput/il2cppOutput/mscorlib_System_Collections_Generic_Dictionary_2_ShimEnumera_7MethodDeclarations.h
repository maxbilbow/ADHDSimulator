﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t2493;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2481;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19112_gshared (ShimEnumerator_t2493 * __this, Dictionary_2_t2481 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19112(__this, ___host, method) (( void (*) (ShimEnumerator_t2493 *, Dictionary_2_t2481 *, const MethodInfo*))ShimEnumerator__ctor_m19112_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19113_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19113(__this, method) (( bool (*) (ShimEnumerator_t2493 *, const MethodInfo*))ShimEnumerator_MoveNext_m19113_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m19114_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19114(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2493 *, const MethodInfo*))ShimEnumerator_get_Entry_m19114_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19115_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19115(__this, method) (( Object_t * (*) (ShimEnumerator_t2493 *, const MethodInfo*))ShimEnumerator_get_Key_m19115_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19116_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19116(__this, method) (( Object_t * (*) (ShimEnumerator_t2493 *, const MethodInfo*))ShimEnumerator_get_Value_m19116_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19117_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19117(__this, method) (( Object_t * (*) (ShimEnumerator_t2493 *, const MethodInfo*))ShimEnumerator_get_Current_m19117_gshared)(__this, method)
