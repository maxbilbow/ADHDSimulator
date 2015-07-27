#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2447;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18321_gshared (Enumerator_t2454 * __this, Dictionary_2_t2447 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18321(__this, ___dictionary, method) (( void (*) (Enumerator_t2454 *, Dictionary_2_t2447 *, const MethodInfo*))Enumerator__ctor_m18321_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18322_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18322(__this, method) (( Object_t * (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18322_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18323_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18323(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18323_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18324_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18324(__this, method) (( Object_t * (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18324_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18325_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18325(__this, method) (( Object_t * (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18325_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18326_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18326(__this, method) (( bool (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_MoveNext_m18326_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2449  Enumerator_get_Current_m18327_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18327(__this, method) (( KeyValuePair_2_t2449  (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_get_Current_m18327_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m18328_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18328(__this, method) (( uint64_t (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_get_CurrentKey_m18328_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m18329_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18329(__this, method) (( Object_t * (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_get_CurrentValue_m18329_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m18330_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18330(__this, method) (( void (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_VerifyState_m18330_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18331_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18331(__this, method) (( void (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_VerifyCurrent_m18331_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18332_gshared (Enumerator_t2454 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18332(__this, method) (( void (*) (Enumerator_t2454 *, const MethodInfo*))Enumerator_Dispose_m18332_gshared)(__this, method)
