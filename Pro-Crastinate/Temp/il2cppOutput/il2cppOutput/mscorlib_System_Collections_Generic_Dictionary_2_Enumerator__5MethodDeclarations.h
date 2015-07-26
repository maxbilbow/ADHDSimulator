#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2010;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2005;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12187_gshared (Enumerator_t2010 * __this, Dictionary_2_t2005 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12187(__this, ___dictionary, method) (( void (*) (Enumerator_t2010 *, Dictionary_2_t2005 *, const MethodInfo*))Enumerator__ctor_m12187_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12188_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12188(__this, method) (( Object_t * (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12188_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12189_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12189(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12189_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12190_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12190(__this, method) (( Object_t * (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12190_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12191_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12191(__this, method) (( Object_t * (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12192_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12192(__this, method) (( bool (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_MoveNext_m12192_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2006  Enumerator_get_Current_m12193_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12193(__this, method) (( KeyValuePair_2_t2006  (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_get_Current_m12193_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12194_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12194(__this, method) (( Object_t * (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_get_CurrentKey_m12194_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12195_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12195(__this, method) (( Object_t * (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_get_CurrentValue_m12195_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12196_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12196(__this, method) (( void (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_VerifyState_m12196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12197_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12197(__this, method) (( void (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_VerifyCurrent_m12197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12198_gshared (Enumerator_t2010 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12198(__this, method) (( void (*) (Enumerator_t2010 *, const MethodInfo*))Enumerator_Dispose_m12198_gshared)(__this, method)
