#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2223;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14977_gshared (Enumerator_t2229 * __this, Dictionary_2_t2223 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14977(__this, ___dictionary, method) (( void (*) (Enumerator_t2229 *, Dictionary_2_t2223 *, const MethodInfo*))Enumerator__ctor_m14977_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14978_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14978(__this, method) (( Object_t * (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14978_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14979_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14979(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14979_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14980_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14980(__this, method) (( Object_t * (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14980_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14981_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14981(__this, method) (( Object_t * (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14981_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14982_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14982(__this, method) (( bool (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_MoveNext_m14982_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2225  Enumerator_get_Current_m14983_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14983(__this, method) (( KeyValuePair_2_t2225  (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_get_Current_m14983_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14984_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14984(__this, method) (( Object_t * (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_get_CurrentKey_m14984_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14985_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14985(__this, method) (( int32_t (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_get_CurrentValue_m14985_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14986_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14986(__this, method) (( void (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_VerifyState_m14986_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14987_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14987(__this, method) (( void (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_VerifyCurrent_m14987_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14988_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14988(__this, method) (( void (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_Dispose_m14988_gshared)(__this, method)
