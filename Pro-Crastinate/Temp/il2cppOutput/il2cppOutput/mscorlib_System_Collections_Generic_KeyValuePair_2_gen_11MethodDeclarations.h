#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m13344_gshared (KeyValuePair_2_t2112 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m13344(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2112 *, int32_t, Object_t *, const MethodInfo*))KeyValuePair_2__ctor_m13344_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m13345_gshared (KeyValuePair_2_t2112 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m13345(__this, method) (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))KeyValuePair_2_get_Key_m13345_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m13346_gshared (KeyValuePair_2_t2112 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m13346(__this, ___value, method) (( void (*) (KeyValuePair_2_t2112 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m13346_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m13347_gshared (KeyValuePair_2_t2112 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m13347(__this, method) (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))KeyValuePair_2_get_Value_m13347_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m13348_gshared (KeyValuePair_2_t2112 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m13348(__this, ___value, method) (( void (*) (KeyValuePair_2_t2112 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Value_m13348_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m13349_gshared (KeyValuePair_2_t2112 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m13349(__this, method) (( String_t* (*) (KeyValuePair_2_t2112 *, const MethodInfo*))KeyValuePair_2_ToString_m13349_gshared)(__this, method)
