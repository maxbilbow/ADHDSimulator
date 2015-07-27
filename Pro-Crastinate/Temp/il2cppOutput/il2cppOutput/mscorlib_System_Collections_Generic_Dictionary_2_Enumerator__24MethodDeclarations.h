#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2492;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18938_gshared (Enumerator_t2497 * __this, Dictionary_2_t2492 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18938(__this, ___dictionary, method) (( void (*) (Enumerator_t2497 *, Dictionary_2_t2492 *, const MethodInfo*))Enumerator__ctor_m18938_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18939_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18939(__this, method) (( Object_t * (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18939_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18940_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18940(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18941_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18941(__this, method) (( Object_t * (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18941_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18942_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18942(__this, method) (( Object_t * (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18943_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18943(__this, method) (( bool (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_MoveNext_m18943_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2468  Enumerator_get_Current_m18944_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18944(__this, method) (( KeyValuePair_2_t2468  (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_get_Current_m18944_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18945_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18945(__this, method) (( Object_t * (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_get_CurrentKey_m18945_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2049  Enumerator_get_CurrentValue_m18946_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18946(__this, method) (( KeyValuePair_2_t2049  (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_get_CurrentValue_m18946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m18947_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18947(__this, method) (( void (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_VerifyState_m18947_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18948_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18948(__this, method) (( void (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_VerifyCurrent_m18948_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18949_gshared (Enumerator_t2497 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18949(__this, method) (( void (*) (Enumerator_t2497 *, const MethodInfo*))Enumerator_Dispose_m18949_gshared)(__this, method)
