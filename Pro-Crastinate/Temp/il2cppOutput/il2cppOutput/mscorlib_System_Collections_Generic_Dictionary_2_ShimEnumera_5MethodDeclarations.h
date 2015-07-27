#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t2460;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2447;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18368_gshared (ShimEnumerator_t2460 * __this, Dictionary_2_t2447 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18368(__this, ___host, method) (( void (*) (ShimEnumerator_t2460 *, Dictionary_2_t2447 *, const MethodInfo*))ShimEnumerator__ctor_m18368_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18369_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18369(__this, method) (( bool (*) (ShimEnumerator_t2460 *, const MethodInfo*))ShimEnumerator_MoveNext_m18369_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m18370_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18370(__this, method) (( DictionaryEntry_t1247  (*) (ShimEnumerator_t2460 *, const MethodInfo*))ShimEnumerator_get_Entry_m18370_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18371_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18371(__this, method) (( Object_t * (*) (ShimEnumerator_t2460 *, const MethodInfo*))ShimEnumerator_get_Key_m18371_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18372_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18372(__this, method) (( Object_t * (*) (ShimEnumerator_t2460 *, const MethodInfo*))ShimEnumerator_get_Value_m18372_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18373_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18373(__this, method) (( Object_t * (*) (ShimEnumerator_t2460 *, const MethodInfo*))ShimEnumerator_get_Current_m18373_gshared)(__this, method)
