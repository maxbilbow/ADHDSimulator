#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m18467_gshared (KeyValuePair_2_t2468 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m18467(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2468 *, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))KeyValuePair_2__ctor_m18467_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m18468_gshared (KeyValuePair_2_t2468 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m18468(__this, method) (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))KeyValuePair_2_get_Key_m18468_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18469_gshared (KeyValuePair_2_t2468 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m18469(__this, ___value, method) (( void (*) (KeyValuePair_2_t2468 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m18469_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" KeyValuePair_2_t2049  KeyValuePair_2_get_Value_m18470_gshared (KeyValuePair_2_t2468 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m18470(__this, method) (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))KeyValuePair_2_get_Value_m18470_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18471_gshared (KeyValuePair_2_t2468 * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m18471(__this, ___value, method) (( void (*) (KeyValuePair_2_t2468 *, KeyValuePair_2_t2049 , const MethodInfo*))KeyValuePair_2_set_Value_m18471_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m18472_gshared (KeyValuePair_2_t2468 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m18472(__this, method) (( String_t* (*) (KeyValuePair_2_t2468 *, const MethodInfo*))KeyValuePair_2_ToString_m18472_gshared)(__this, method)
