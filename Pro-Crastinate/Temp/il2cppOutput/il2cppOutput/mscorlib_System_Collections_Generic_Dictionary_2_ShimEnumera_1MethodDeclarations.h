#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>
struct ShimEnumerator_t2123;
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
struct Dictionary_2_t2110;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13421_gshared (ShimEnumerator_t2123 * __this, Dictionary_2_t2110 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13421(__this, ___host, method) (( void (*) (ShimEnumerator_t2123 *, Dictionary_2_t2110 *, const MethodInfo*))ShimEnumerator__ctor_m13421_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13422_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13422(__this, method) (( bool (*) (ShimEnumerator_t2123 *, const MethodInfo*))ShimEnumerator_MoveNext_m13422_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m13423_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13423(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2123 *, const MethodInfo*))ShimEnumerator_get_Entry_m13423_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13424_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13424(__this, method) (( Object_t * (*) (ShimEnumerator_t2123 *, const MethodInfo*))ShimEnumerator_get_Key_m13424_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13425_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13425(__this, method) (( Object_t * (*) (ShimEnumerator_t2123 *, const MethodInfo*))ShimEnumerator_get_Value_m13425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13426_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13426(__this, method) (( Object_t * (*) (ShimEnumerator_t2123 *, const MethodInfo*))ShimEnumerator_get_Current_m13426_gshared)(__this, method)
