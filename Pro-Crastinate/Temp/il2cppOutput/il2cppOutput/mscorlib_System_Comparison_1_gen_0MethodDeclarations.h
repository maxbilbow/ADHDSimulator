﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t335;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2330_gshared (Comparison_1_t335 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2330(__this, ___object, ___method, method) (( void (*) (Comparison_1_t335 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2330_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14585_gshared (Comparison_1_t335 * __this, RaycastHit_t193  ___x, RaycastHit_t193  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14585(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t335 *, RaycastHit_t193 , RaycastHit_t193 , const MethodInfo*))Comparison_1_Invoke_m14585_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14586_gshared (Comparison_1_t335 * __this, RaycastHit_t193  ___x, RaycastHit_t193  ___y, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14586(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t335 *, RaycastHit_t193 , RaycastHit_t193 , AsyncCallback_t382 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14586_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14587_gshared (Comparison_1_t335 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14587(__this, ___result, method) (( int32_t (*) (Comparison_1_t335 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14587_gshared)(__this, ___result, method)
