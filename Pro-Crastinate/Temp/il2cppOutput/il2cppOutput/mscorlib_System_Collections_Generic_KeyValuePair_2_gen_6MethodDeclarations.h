#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m12179_gshared (KeyValuePair_2_t2025 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m12179(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2025 *, Object_t *, int32_t, const MethodInfo*))KeyValuePair_2__ctor_m12179_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12180_gshared (KeyValuePair_2_t2025 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m12180(__this, method) (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))KeyValuePair_2_get_Key_m12180_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12181_gshared (KeyValuePair_2_t2025 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m12181(__this, ___value, method) (( void (*) (KeyValuePair_2_t2025 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m12181_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m12182_gshared (KeyValuePair_2_t2025 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m12182(__this, method) (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))KeyValuePair_2_get_Value_m12182_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12183_gshared (KeyValuePair_2_t2025 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m12183(__this, ___value, method) (( void (*) (KeyValuePair_2_t2025 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Value_m12183_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m12184_gshared (KeyValuePair_2_t2025 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m12184(__this, method) (( String_t* (*) (KeyValuePair_2_t2025 *, const MethodInfo*))KeyValuePair_2_ToString_m12184_gshared)(__this, method)
