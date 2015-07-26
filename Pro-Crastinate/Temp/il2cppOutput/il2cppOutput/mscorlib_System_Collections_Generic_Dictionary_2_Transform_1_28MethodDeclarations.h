#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>
struct Transform_1_t2228;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t237;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t517;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m15541(__this, ___object, ___method, method) (( void (*) (Transform_1_t2228 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12220_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15542(__this, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2228 *, Canvas_t237 *, IndexedSet_1_t517 *, const MethodInfo*))Transform_1_Invoke_m12221_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15543(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2228 *, Canvas_t237 *, IndexedSet_1_t517 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12222_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15544(__this, ___result, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2228 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12223_gshared)(__this, ___result, method)
