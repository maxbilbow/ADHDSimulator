#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Enumerator_t2487;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2481;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19065_gshared (Enumerator_t2487 * __this, Dictionary_2_t2481 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19065(__this, ___dictionary, method) (( void (*) (Enumerator_t2487 *, Dictionary_2_t2481 *, const MethodInfo*))Enumerator__ctor_m19065_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19066_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19066(__this, method) (( Object_t * (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19066_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19067_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19067(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19067_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19068_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19068(__this, method) (( Object_t * (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19068_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19069_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19069(__this, method) (( Object_t * (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19069_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19070_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19070(__this, method) (( bool (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_MoveNext_m19070_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2482  Enumerator_get_Current_m19071_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19071(__this, method) (( KeyValuePair_2_t2482  (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_get_Current_m19071_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19072_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19072(__this, method) (( Object_t * (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_get_CurrentKey_m19072_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m19073_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19073(__this, method) (( int32_t (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_get_CurrentValue_m19073_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m19074_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19074(__this, method) (( void (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_VerifyState_m19074_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19075_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19075(__this, method) (( void (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_VerifyCurrent_m19075_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19076_gshared (Enumerator_t2487 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19076(__this, method) (( void (*) (Enumerator_t2487 *, const MethodInfo*))Enumerator_Dispose_m19076_gshared)(__this, method)
