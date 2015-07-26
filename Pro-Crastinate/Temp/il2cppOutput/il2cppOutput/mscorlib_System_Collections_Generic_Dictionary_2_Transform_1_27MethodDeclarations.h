#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t2230;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t358;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_23MethodDeclarations.h"
#define Transform_1__ctor_m15607(__this, ___object, ___method, method) (( void (*) (Transform_1_t2230 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14754_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15608(__this, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2230 *, Graphic_t358 *, int32_t, const MethodInfo*))Transform_1_Invoke_m14755_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15609(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2230 *, Graphic_t358 *, int32_t, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14756_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15610(__this, ___result, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2230 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14757_gshared)(__this, ___result, method)
