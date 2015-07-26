#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2448;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2445;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18678_gshared (Enumerator_t2448 * __this, Dictionary_2_t2445 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18678(__this, ___dictionary, method) (( void (*) (Enumerator_t2448 *, Dictionary_2_t2445 *, const MethodInfo*))Enumerator__ctor_m18678_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18679_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18679(__this, method) (( Object_t * (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18680_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18680(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18680_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18681_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18681(__this, method) (( Object_t * (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18681_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18682_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18682(__this, method) (( Object_t * (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18682_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18683_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18683(__this, method) (( bool (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_MoveNext_m18683_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2419  Enumerator_get_Current_m18684_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18684(__this, method) (( KeyValuePair_2_t2419  (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_get_Current_m18684_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18685_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18685(__this, method) (( Object_t * (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_get_CurrentKey_m18685_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2006  Enumerator_get_CurrentValue_m18686_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18686(__this, method) (( KeyValuePair_2_t2006  (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_get_CurrentValue_m18686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m18687_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18687(__this, method) (( void (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_VerifyState_m18687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18688_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18688(__this, method) (( void (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_VerifyCurrent_m18688_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18689_gshared (Enumerator_t2448 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18689(__this, method) (( void (*) (Enumerator_t2448 *, const MethodInfo*))Enumerator_Dispose_m18689_gshared)(__this, method)
