#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct Transform_1_t2612;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20100_gshared (Transform_1_t2612 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m20100(__this, ___object, ___method, method) (( void (*) (Transform_1_t2612 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20100_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2604  Transform_1_Invoke_m20101_gshared (Transform_1_t2612 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m20101(__this, ___key, ___value, method) (( KeyValuePair_2_t2604  (*) (Transform_1_t2612 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m20101_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20102_gshared (Transform_1_t2612 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m20102(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2612 *, int32_t, int32_t, AsyncCallback_t391 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20102_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2604  Transform_1_EndInvoke_m20103_gshared (Transform_1_t2612 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m20103(__this, ___result, method) (( KeyValuePair_2_t2604  (*) (Transform_1_t2612 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20103_gshared)(__this, ___result, method)
