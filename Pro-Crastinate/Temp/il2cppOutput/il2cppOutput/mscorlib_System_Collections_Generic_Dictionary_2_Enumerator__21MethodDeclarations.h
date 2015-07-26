#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Enumerator_t2405;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2399;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18061_gshared (Enumerator_t2405 * __this, Dictionary_2_t2399 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18061(__this, ___dictionary, method) (( void (*) (Enumerator_t2405 *, Dictionary_2_t2399 *, const MethodInfo*))Enumerator__ctor_m18061_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18062_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18062(__this, method) (( Object_t * (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18062_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18063_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18063(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18063_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18064_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18064(__this, method) (( Object_t * (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18064_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18065_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18065(__this, method) (( Object_t * (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18066_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18066(__this, method) (( bool (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_MoveNext_m18066_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2400  Enumerator_get_Current_m18067_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18067(__this, method) (( KeyValuePair_2_t2400  (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_get_Current_m18067_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m18068_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18068(__this, method) (( uint64_t (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_get_CurrentKey_m18068_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m18069_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18069(__this, method) (( Object_t * (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_get_CurrentValue_m18069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m18070_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18070(__this, method) (( void (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_VerifyState_m18070_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18071_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18071(__this, method) (( void (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_VerifyCurrent_m18071_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18072_gshared (Enumerator_t2405 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18072(__this, method) (( void (*) (Enumerator_t2405 *, const MethodInfo*))Enumerator_Dispose_m18072_gshared)(__this, method)
