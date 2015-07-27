#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1179;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20061_gshared (Enumerator_t2608 * __this, Dictionary_2_t1179 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20061(__this, ___dictionary, method) (( void (*) (Enumerator_t2608 *, Dictionary_2_t1179 *, const MethodInfo*))Enumerator__ctor_m20061_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20062_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20062(__this, method) (( Object_t * (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20062_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20063_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20063(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20063_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20064_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20064(__this, method) (( Object_t * (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20064_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20065_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20065(__this, method) (( Object_t * (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20066_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20066(__this, method) (( bool (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_MoveNext_m20066_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2604  Enumerator_get_Current_m20067_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20067(__this, method) (( KeyValuePair_2_t2604  (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_get_Current_m20067_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m20068_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20068(__this, method) (( int32_t (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_get_CurrentKey_m20068_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m20069_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20069(__this, method) (( int32_t (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_get_CurrentValue_m20069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m20070_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20070(__this, method) (( void (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_VerifyState_m20070_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20071_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20071(__this, method) (( void (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_VerifyCurrent_m20071_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m20072_gshared (Enumerator_t2608 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20072(__this, method) (( void (*) (Enumerator_t2608 *, const MethodInfo*))Enumerator_Dispose_m20072_gshared)(__this, method)
