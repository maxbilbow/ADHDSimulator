#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2152;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2147;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14371_gshared (Enumerator_t2152 * __this, Dictionary_2_t2147 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14371(__this, ___dictionary, method) (( void (*) (Enumerator_t2152 *, Dictionary_2_t2147 *, const MethodInfo*))Enumerator__ctor_m14371_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14372_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14372(__this, method) (( Object_t * (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14372_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14373_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14373(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14373_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14374_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14374(__this, method) (( Object_t * (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14374_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14375_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14375(__this, method) (( Object_t * (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14375_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14376_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14376(__this, method) (( bool (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_MoveNext_m14376_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2148  Enumerator_get_Current_m14377_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14377(__this, method) (( KeyValuePair_2_t2148  (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_get_Current_m14377_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m14378_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14378(__this, method) (( int32_t (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_get_CurrentKey_m14378_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14379_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14379(__this, method) (( Object_t * (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_get_CurrentValue_m14379_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14380_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14380(__this, method) (( void (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_VerifyState_m14380_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14381_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14381(__this, method) (( void (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_VerifyCurrent_m14381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14382_gshared (Enumerator_t2152 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14382(__this, method) (( void (*) (Enumerator_t2152 *, const MethodInfo*))Enumerator_Dispose_m14382_gshared)(__this, method)
