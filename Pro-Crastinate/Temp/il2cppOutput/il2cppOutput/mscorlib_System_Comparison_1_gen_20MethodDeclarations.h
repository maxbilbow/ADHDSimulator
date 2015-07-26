﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2208;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15174_gshared (Comparison_1_t2208 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15174(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2208 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15174_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15175_gshared (Comparison_1_t2208 * __this, UIVertex_t390  ___x, UIVertex_t390  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15175(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2208 *, UIVertex_t390 , UIVertex_t390 , const MethodInfo*))Comparison_1_Invoke_m15175_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15176_gshared (Comparison_1_t2208 * __this, UIVertex_t390  ___x, UIVertex_t390  ___y, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15176(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2208 *, UIVertex_t390 , UIVertex_t390 , AsyncCallback_t382 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15176_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15177_gshared (Comparison_1_t2208 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15177(__this, ___result, method) (( int32_t (*) (Comparison_1_t2208 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15177_gshared)(__this, ___result, method)
