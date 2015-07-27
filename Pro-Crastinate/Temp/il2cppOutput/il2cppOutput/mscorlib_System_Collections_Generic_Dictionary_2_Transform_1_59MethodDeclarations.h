#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2580;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19891_gshared (Transform_1_t2580 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19891(__this, ___object, ___method, method) (( void (*) (Transform_1_t2580 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19891_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1247  Transform_1_Invoke_m19892_gshared (Transform_1_t2580 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19892(__this, ___key, ___value, method) (( DictionaryEntry_t1247  (*) (Transform_1_t2580 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m19892_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19893_gshared (Transform_1_t2580 * __this, Object_t * ___key, bool ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19893(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2580 *, Object_t *, bool, AsyncCallback_t391 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19893_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1247  Transform_1_EndInvoke_m19894_gshared (Transform_1_t2580 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19894(__this, ___result, method) (( DictionaryEntry_t1247  (*) (Transform_1_t2580 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19894_gshared)(__this, ___result, method)
