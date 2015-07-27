#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
struct Dictionary_2_t2110;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13374_gshared (Enumerator_t2117 * __this, Dictionary_2_t2110 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13374(__this, ___dictionary, method) (( void (*) (Enumerator_t2117 *, Dictionary_2_t2110 *, const MethodInfo*))Enumerator__ctor_m13374_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13375_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13375(__this, method) (( Object_t * (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13375_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13376_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13376(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13376_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13377_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13377(__this, method) (( Object_t * (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13377_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13378_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13378(__this, method) (( Object_t * (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13378_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13379_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13379(__this, method) (( bool (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_MoveNext_m13379_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2112  Enumerator_get_Current_m13380_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13380(__this, method) (( KeyValuePair_2_t2112  (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_get_Current_m13380_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13381_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13381(__this, method) (( int32_t (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_get_CurrentKey_m13381_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13382_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13382(__this, method) (( Object_t * (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_get_CurrentValue_m13382_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13383_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13383(__this, method) (( void (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_VerifyState_m13383_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13384_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13384(__this, method) (( void (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_VerifyCurrent_m13384_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13385_gshared (Enumerator_t2117 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13385(__this, method) (( void (*) (Enumerator_t2117 *, const MethodInfo*))Enumerator_Dispose_m13385_gshared)(__this, method)
