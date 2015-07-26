#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>
struct Transform_1_t2031;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t53;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m12531(__this, ___object, ___method, method) (( void (*) (Transform_1_t2031 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12216_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m12532(__this, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2031 *, String_t*, VirtualButton_t53 *, const MethodInfo*))Transform_1_Invoke_m12217_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m12533(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2031 *, String_t*, VirtualButton_t53 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12218_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m12534(__this, ___result, method) (( DictionaryEntry_t1235  (*) (Transform_1_t2031 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12219_gshared)(__this, ___result, method)
