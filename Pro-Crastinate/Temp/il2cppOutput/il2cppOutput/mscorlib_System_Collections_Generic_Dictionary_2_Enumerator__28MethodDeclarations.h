#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2579;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__28.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19852_gshared (Enumerator_t2586 * __this, Dictionary_2_t2579 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19852(__this, ___dictionary, method) (( void (*) (Enumerator_t2586 *, Dictionary_2_t2579 *, const MethodInfo*))Enumerator__ctor_m19852_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19853_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19853(__this, method) (( Object_t * (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19853_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19854_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19854(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19854_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19855_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19855(__this, method) (( Object_t * (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19855_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19856_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19856(__this, method) (( Object_t * (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19856_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19857_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19857(__this, method) (( bool (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_MoveNext_m19857_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2581  Enumerator_get_Current_m19858_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19858(__this, method) (( KeyValuePair_2_t2581  (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_get_Current_m19858_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19859_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19859(__this, method) (( Object_t * (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_get_CurrentKey_m19859_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m19860_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19860(__this, method) (( bool (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_get_CurrentValue_m19860_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m19861_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19861(__this, method) (( void (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_VerifyState_m19861_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19862_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19862(__this, method) (( void (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_VerifyCurrent_m19862_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m19863_gshared (Enumerator_t2586 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19863(__this, method) (( void (*) (Enumerator_t2586 *, const MethodInfo*))Enumerator_Dispose_m19863_gshared)(__this, method)
