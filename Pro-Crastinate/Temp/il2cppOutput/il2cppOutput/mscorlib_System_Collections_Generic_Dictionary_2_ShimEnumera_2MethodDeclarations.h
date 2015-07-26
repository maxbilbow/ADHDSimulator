#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2158;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2147;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14418_gshared (ShimEnumerator_t2158 * __this, Dictionary_2_t2147 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14418(__this, ___host, method) (( void (*) (ShimEnumerator_t2158 *, Dictionary_2_t2147 *, const MethodInfo*))ShimEnumerator__ctor_m14418_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14419_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14419(__this, method) (( bool (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_MoveNext_m14419_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m14420_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14420(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Entry_m14420_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14421_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14421(__this, method) (( Object_t * (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Key_m14421_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14422_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14422(__this, method) (( Object_t * (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Value_m14422_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14423_gshared (ShimEnumerator_t2158 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14423(__this, method) (( Object_t * (*) (ShimEnumerator_t2158 *, const MethodInfo*))ShimEnumerator_get_Current_m14423_gshared)(__this, method)
