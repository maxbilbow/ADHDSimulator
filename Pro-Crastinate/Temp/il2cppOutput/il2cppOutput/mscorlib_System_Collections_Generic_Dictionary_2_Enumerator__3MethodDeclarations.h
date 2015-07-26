#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>
struct Enumerator_t1988;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
struct Dictionary_2_t1981;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11945_gshared (Enumerator_t1988 * __this, Dictionary_2_t1981 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11945(__this, ___dictionary, method) (( void (*) (Enumerator_t1988 *, Dictionary_2_t1981 *, const MethodInfo*))Enumerator__ctor_m11945_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11946_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11946(__this, method) (( Object_t * (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11946_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11947_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11947(__this, method) (( DictionaryEntry_t1235  (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11947_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11948_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11948(__this, method) (( Object_t * (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11948_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11949_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11949(__this, method) (( Object_t * (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11949_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11950_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11950(__this, method) (( bool (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_MoveNext_m11950_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_Current()
extern "C" KeyValuePair_2_t1982  Enumerator_get_Current_m11951_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11951(__this, method) (( KeyValuePair_2_t1982  (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_get_Current_m11951_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11952_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11952(__this, method) (( Object_t * (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_get_CurrentKey_m11952_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11953_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11953(__this, method) (( int32_t (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_get_CurrentValue_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::VerifyState()
extern "C" void Enumerator_VerifyState_m11954_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11954(__this, method) (( void (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_VerifyState_m11954_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11955_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11955(__this, method) (( void (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_VerifyCurrent_m11955_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::Dispose()
extern "C" void Enumerator_Dispose_m11956_gshared (Enumerator_t1988 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11956(__this, method) (( void (*) (Enumerator_t1988 *, const MethodInfo*))Enumerator_Dispose_m11956_gshared)(__this, method)
