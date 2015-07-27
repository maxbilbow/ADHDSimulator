#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
struct Dictionary_2_t2022;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12214_gshared (Enumerator_t2031 * __this, Dictionary_2_t2022 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12214(__this, ___dictionary, method) (( void (*) (Enumerator_t2031 *, Dictionary_2_t2022 *, const MethodInfo*))Enumerator__ctor_m12214_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12215_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12215(__this, method) (( Object_t * (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12215_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12216_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12216(__this, method) (( DictionaryEntry_t1247  (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12216_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12217_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12217(__this, method) (( Object_t * (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12217_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12218_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12218(__this, method) (( Object_t * (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12218_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12219_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12219(__this, method) (( bool (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_MoveNext_m12219_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_Current()
extern "C" KeyValuePair_2_t2025  Enumerator_get_Current_m12220_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12220(__this, method) (( KeyValuePair_2_t2025  (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_get_Current_m12220_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12221_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12221(__this, method) (( Object_t * (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_get_CurrentKey_m12221_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12222_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12222(__this, method) (( int32_t (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_get_CurrentValue_m12222_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::VerifyState()
extern "C" void Enumerator_VerifyState_m12223_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12223(__this, method) (( void (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_VerifyState_m12223_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12224_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12224(__this, method) (( void (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_VerifyCurrent_m12224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::Dispose()
extern "C" void Enumerator_Dispose_m12225_gshared (Enumerator_t2031 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12225(__this, method) (( void (*) (Enumerator_t2031 *, const MethodInfo*))Enumerator_Dispose_m12225_gshared)(__this, method)
