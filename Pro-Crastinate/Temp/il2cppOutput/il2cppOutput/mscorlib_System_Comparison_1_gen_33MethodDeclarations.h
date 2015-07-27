#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2399;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17588_gshared (Comparison_1_t2399 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17588(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2399 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17588_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17589_gshared (Comparison_1_t2399 * __this, UICharInfo_t531  ___x, UICharInfo_t531  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17589(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2399 *, UICharInfo_t531 , UICharInfo_t531 , const MethodInfo*))Comparison_1_Invoke_m17589_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17590_gshared (Comparison_1_t2399 * __this, UICharInfo_t531  ___x, UICharInfo_t531  ___y, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17590(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2399 *, UICharInfo_t531 , UICharInfo_t531 , AsyncCallback_t391 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17590_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17591_gshared (Comparison_1_t2399 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17591(__this, ___result, method) (( int32_t (*) (Comparison_1_t2399 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17591_gshared)(__this, ___result, method)
