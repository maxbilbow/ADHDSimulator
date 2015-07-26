#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>
struct Enumerator_t2063;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
struct Dictionary_2_t2062;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12978_gshared (Enumerator_t2063 * __this, Dictionary_2_t2062 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12978(__this, ___dictionary, method) (( void (*) (Enumerator_t2063 *, Dictionary_2_t2062 *, const MethodInfo*))Enumerator__ctor_m12978_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12980_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12980(__this, method) (( Object_t * (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12980_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12982_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12982(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12982_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12984_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12984(__this, method) (( Object_t * (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12984_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12986_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12986(__this, method) (( Object_t * (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12986_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12987_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12987(__this, method) (( bool (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_MoveNext_m12987_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2061  Enumerator_get_Current_m12988_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12988(__this, method) (( KeyValuePair_2_t2061  (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_get_Current_m12988_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12990_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12990(__this, method) (( int32_t (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_get_CurrentKey_m12990_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12992_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12992(__this, method) (( Object_t * (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_get_CurrentValue_m12992_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12994_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12994(__this, method) (( void (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_VerifyState_m12994_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12996_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12996(__this, method) (( void (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_VerifyCurrent_m12996_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12998_gshared (Enumerator_t2063 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12998(__this, method) (( void (*) (Enumerator_t2063 *, const MethodInfo*))Enumerator_Dispose_m12998_gshared)(__this, method)
