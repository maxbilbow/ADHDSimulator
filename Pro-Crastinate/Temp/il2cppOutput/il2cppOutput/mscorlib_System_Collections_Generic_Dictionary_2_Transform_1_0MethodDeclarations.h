﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>
struct Transform_1_t1992;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11974_gshared (Transform_1_t1992 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11974(__this, ___object, ___method, method) (( void (*) (Transform_1_t1992 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11974_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m11975_gshared (Transform_1_t1992 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11975(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t1992 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m11975_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11976_gshared (Transform_1_t1992 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11976(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1992 *, Object_t *, int32_t, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11976_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m11977_gshared (Transform_1_t1992 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11977(__this, ___result, method) (( int32_t (*) (Transform_1_t1992 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11977_gshared)(__this, ___result, method)
