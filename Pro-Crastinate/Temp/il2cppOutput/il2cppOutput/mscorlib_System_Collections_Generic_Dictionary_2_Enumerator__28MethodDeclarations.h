#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t2537;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2531;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19590_gshared (Enumerator_t2537 * __this, Dictionary_2_t2531 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19590(__this, ___dictionary, method) (( void (*) (Enumerator_t2537 *, Dictionary_2_t2531 *, const MethodInfo*))Enumerator__ctor_m19590_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19591_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19591(__this, method) (( Object_t * (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19591_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19592_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19592(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19592_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19593_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19593(__this, method) (( Object_t * (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19593_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19594_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19594(__this, method) (( Object_t * (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19594_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19595_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19595(__this, method) (( bool (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_MoveNext_m19595_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2532  Enumerator_get_Current_m19596_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19596(__this, method) (( KeyValuePair_2_t2532  (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_get_Current_m19596_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19597_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19597(__this, method) (( Object_t * (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_get_CurrentKey_m19597_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m19598_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19598(__this, method) (( bool (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_get_CurrentValue_m19598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m19599_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19599(__this, method) (( void (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_VerifyState_m19599_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19600_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19600(__this, method) (( void (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_VerifyCurrent_m19600_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m19601_gshared (Enumerator_t2537 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19601(__this, method) (( void (*) (Enumerator_t2537 *, const MethodInfo*))Enumerator_Dispose_m19601_gshared)(__this, method)
