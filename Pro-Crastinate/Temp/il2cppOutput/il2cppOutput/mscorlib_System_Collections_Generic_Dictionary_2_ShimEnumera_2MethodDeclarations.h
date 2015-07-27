﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2207;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2195;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14680_gshared (ShimEnumerator_t2207 * __this, Dictionary_2_t2195 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14680(__this, ___host, method) (( void (*) (ShimEnumerator_t2207 *, Dictionary_2_t2195 *, const MethodInfo*))ShimEnumerator__ctor_m14680_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14681_gshared (ShimEnumerator_t2207 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14681(__this, method) (( bool (*) (ShimEnumerator_t2207 *, const MethodInfo*))ShimEnumerator_MoveNext_m14681_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m14682_gshared (ShimEnumerator_t2207 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14682(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2207 *, const MethodInfo*))ShimEnumerator_get_Entry_m14682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14683_gshared (ShimEnumerator_t2207 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14683(__this, method) (( Object_t * (*) (ShimEnumerator_t2207 *, const MethodInfo*))ShimEnumerator_get_Key_m14683_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14684_gshared (ShimEnumerator_t2207 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14684(__this, method) (( Object_t * (*) (ShimEnumerator_t2207 *, const MethodInfo*))ShimEnumerator_get_Value_m14684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14685_gshared (ShimEnumerator_t2207 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14685(__this, method) (( Object_t * (*) (ShimEnumerator_t2207 *, const MethodInfo*))ShimEnumerator_get_Current_m14685_gshared)(__this, method)