#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m18291_gshared (KeyValuePair_2_t2449 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m18291(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2449 *, uint64_t, Object_t *, const MethodInfo*))KeyValuePair_2__ctor_m18291_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" uint64_t KeyValuePair_2_get_Key_m18292_gshared (KeyValuePair_2_t2449 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m18292(__this, method) (( uint64_t (*) (KeyValuePair_2_t2449 *, const MethodInfo*))KeyValuePair_2_get_Key_m18292_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18293_gshared (KeyValuePair_2_t2449 * __this, uint64_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m18293(__this, ___value, method) (( void (*) (KeyValuePair_2_t2449 *, uint64_t, const MethodInfo*))KeyValuePair_2_set_Key_m18293_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m18294_gshared (KeyValuePair_2_t2449 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m18294(__this, method) (( Object_t * (*) (KeyValuePair_2_t2449 *, const MethodInfo*))KeyValuePair_2_get_Value_m18294_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18295_gshared (KeyValuePair_2_t2449 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m18295(__this, ___value, method) (( void (*) (KeyValuePair_2_t2449 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Value_m18295_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m18296_gshared (KeyValuePair_2_t2449 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m18296(__this, method) (( String_t* (*) (KeyValuePair_2_t2449 *, const MethodInfo*))KeyValuePair_2_ToString_m18296_gshared)(__this, method)
