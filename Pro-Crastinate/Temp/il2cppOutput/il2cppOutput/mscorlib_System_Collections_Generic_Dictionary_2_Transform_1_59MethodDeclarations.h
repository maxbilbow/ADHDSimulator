﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2530;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19617_gshared (Transform_1_t2530 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19617(__this, ___object, ___method, method) (( void (*) (Transform_1_t2530 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19617_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1235  Transform_1_Invoke_m19618_gshared (Transform_1_t2530 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19618(__this, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2530 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m19618_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19619_gshared (Transform_1_t2530 * __this, Object_t * ___key, bool ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19619(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2530 *, Object_t *, bool, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19619_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1235  Transform_1_EndInvoke_m19620_gshared (Transform_1_t2530 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19620(__this, ___result, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2530 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19620_gshared)(__this, ___result, method)
