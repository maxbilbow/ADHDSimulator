﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t2054;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12468_gshared (Transform_1_t2054 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12468(__this, ___object, ___method, method) (( void (*) (Transform_1_t2054 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12468_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m12469_gshared (Transform_1_t2054 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12469(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2054 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m12469_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12470_gshared (Transform_1_t2054 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12470(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2054 *, Object_t *, Object_t *, AsyncCallback_t391 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12470_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m12471_gshared (Transform_1_t2054 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12471(__this, ___result, method) (( Object_t * (*) (Transform_1_t2054 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12471_gshared)(__this, ___result, method)