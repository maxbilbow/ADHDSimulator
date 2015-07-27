#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2529;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19339_gshared (Enumerator_t2536 * __this, Dictionary_2_t2529 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19339(__this, ___dictionary, method) (( void (*) (Enumerator_t2536 *, Dictionary_2_t2529 *, const MethodInfo*))Enumerator__ctor_m19339_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19340_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19340(__this, method) (( Object_t * (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19340_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19341_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19341(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19341_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19342_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19342(__this, method) (( Object_t * (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19343_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19343(__this, method) (( Object_t * (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19344_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19344(__this, method) (( bool (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_MoveNext_m19344_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2531  Enumerator_get_Current_m19345_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19345(__this, method) (( KeyValuePair_2_t2531  (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_get_Current_m19345_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19346_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19346(__this, method) (( Object_t * (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_get_CurrentKey_m19346_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m19347_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19347(__this, method) (( int32_t (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_get_CurrentValue_m19347_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m19348_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19348(__this, method) (( void (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_VerifyState_m19348_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19349_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19349(__this, method) (( void (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_VerifyCurrent_m19349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19350_gshared (Enumerator_t2536 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19350(__this, method) (( void (*) (Enumerator_t2536 *, const MethodInfo*))Enumerator_Dispose_m19350_gshared)(__this, method)
