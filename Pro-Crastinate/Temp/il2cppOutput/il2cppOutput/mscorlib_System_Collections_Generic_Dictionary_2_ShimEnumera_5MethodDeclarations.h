#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t2411;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2399;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18106_gshared (ShimEnumerator_t2411 * __this, Dictionary_2_t2399 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18106(__this, ___host, method) (( void (*) (ShimEnumerator_t2411 *, Dictionary_2_t2399 *, const MethodInfo*))ShimEnumerator__ctor_m18106_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18107_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18107(__this, method) (( bool (*) (ShimEnumerator_t2411 *, const MethodInfo*))ShimEnumerator_MoveNext_m18107_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m18108_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18108(__this, method) (( DictionaryEntry_t1235  (*) (ShimEnumerator_t2411 *, const MethodInfo*))ShimEnumerator_get_Entry_m18108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18109_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18109(__this, method) (( Object_t * (*) (ShimEnumerator_t2411 *, const MethodInfo*))ShimEnumerator_get_Key_m18109_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18110_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18110(__this, method) (( Object_t * (*) (ShimEnumerator_t2411 *, const MethodInfo*))ShimEnumerator_get_Value_m18110_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18111_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18111(__this, method) (( Object_t * (*) (ShimEnumerator_t2411 *, const MethodInfo*))ShimEnumerator_get_Current_m18111_gshared)(__this, method)
