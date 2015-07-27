#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m17845_gshared (KeyValuePair_2_t2412 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m17845(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2412 *, Object_t *, int64_t, const MethodInfo*))KeyValuePair_2__ctor_m17845_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m17846_gshared (KeyValuePair_2_t2412 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m17846(__this, method) (( Object_t * (*) (KeyValuePair_2_t2412 *, const MethodInfo*))KeyValuePair_2_get_Key_m17846_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m17847_gshared (KeyValuePair_2_t2412 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m17847(__this, ___value, method) (( void (*) (KeyValuePair_2_t2412 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m17847_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C" int64_t KeyValuePair_2_get_Value_m17848_gshared (KeyValuePair_2_t2412 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m17848(__this, method) (( int64_t (*) (KeyValuePair_2_t2412 *, const MethodInfo*))KeyValuePair_2_get_Value_m17848_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m17849_gshared (KeyValuePair_2_t2412 * __this, int64_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m17849(__this, ___value, method) (( void (*) (KeyValuePair_2_t2412 *, int64_t, const MethodInfo*))KeyValuePair_2_set_Value_m17849_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m17850_gshared (KeyValuePair_2_t2412 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m17850(__this, method) (( String_t* (*) (KeyValuePair_2_t2412 *, const MethodInfo*))KeyValuePair_2_ToString_m17850_gshared)(__this, method)
