#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Enum,RMX.EventStatus,System.Collections.DictionaryEntry>
struct Transform_1_t1978;
// System.Object
struct Object_t;
// System.Enum
struct Enum_t5;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Enum,RMX.EventStatus,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m12009(__this, ___object, ___method, method) (( void (*) (Transform_1_t1978 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11982_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Enum,RMX.EventStatus,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m12010(__this, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Transform_1_t1978 *, Enum_t5 *, int32_t, const MethodInfo*))Transform_1_Invoke_m11983_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Enum,RMX.EventStatus,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m12011(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1978 *, Enum_t5 *, int32_t, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11984_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Enum,RMX.EventStatus,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m12012(__this, ___result, method) (( DictionaryEntry_t1235  (*) (Transform_1_t1978 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11985_gshared)(__this, ___result, method)
