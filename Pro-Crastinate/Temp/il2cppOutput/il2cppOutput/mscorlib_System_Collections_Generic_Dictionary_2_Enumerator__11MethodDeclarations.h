#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2180;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2173;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14703_gshared (Enumerator_t2180 * __this, Dictionary_2_t2173 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14703(__this, ___dictionary, method) (( void (*) (Enumerator_t2180 *, Dictionary_2_t2173 *, const MethodInfo*))Enumerator__ctor_m14703_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14704_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14704(__this, method) (( Object_t * (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14704_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14705_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14705(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14705_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14706_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14706(__this, method) (( Object_t * (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14706_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14707_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14707(__this, method) (( Object_t * (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14708_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14708(__this, method) (( bool (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_MoveNext_m14708_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2176  Enumerator_get_Current_m14709_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14709(__this, method) (( KeyValuePair_2_t2176  (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_get_Current_m14709_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14710_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14710(__this, method) (( Object_t * (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_get_CurrentKey_m14710_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14711_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14711(__this, method) (( int32_t (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_get_CurrentValue_m14711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14712_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14712(__this, method) (( void (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_VerifyState_m14712_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14713_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14713(__this, method) (( void (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_VerifyCurrent_m14713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14714_gshared (Enumerator_t2180 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14714(__this, method) (( void (*) (Enumerator_t2180 *, const MethodInfo*))Enumerator_Dispose_m14714_gshared)(__this, method)
