#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2368;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2362;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17615_gshared (Enumerator_t2368 * __this, Dictionary_2_t2362 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17615(__this, ___dictionary, method) (( void (*) (Enumerator_t2368 *, Dictionary_2_t2362 *, const MethodInfo*))Enumerator__ctor_m17615_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17616_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17616(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17616_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17617_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17617(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17617_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17618_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17618(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17618_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17619_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17619(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17620_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17620(__this, method) (( bool (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_MoveNext_m17620_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2363  Enumerator_get_Current_m17621_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17621(__this, method) (( KeyValuePair_2_t2363  (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_Current_m17621_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17622_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17622(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_CurrentKey_m17622_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m17623_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17623(__this, method) (( int64_t (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_CurrentValue_m17623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m17624_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17624(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_VerifyState_m17624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17625_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17625(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_VerifyCurrent_m17625_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m17626_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17626(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_Dispose_m17626_gshared)(__this, method)
