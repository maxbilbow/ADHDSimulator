#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>
struct Transform_1_t2035;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12249_gshared (Transform_1_t2035 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12249(__this, ___object, ___method, method) (( void (*) (Transform_1_t2035 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12249_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m12250_gshared (Transform_1_t2035 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12250(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2035 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m12250_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12251_gshared (Transform_1_t2035 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12251(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2035 *, Object_t *, int32_t, AsyncCallback_t391 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12251_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m12252_gshared (Transform_1_t2035 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12252(__this, ___result, method) (( int32_t (*) (Transform_1_t2035 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12252_gshared)(__this, ___result, method)
