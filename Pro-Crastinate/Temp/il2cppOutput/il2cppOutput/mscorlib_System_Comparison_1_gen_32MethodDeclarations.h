#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2359;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17477_gshared (Comparison_1_t2359 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17477(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2359 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17477_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17478_gshared (Comparison_1_t2359 * __this, UILineInfo_t522  ___x, UILineInfo_t522  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17478(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2359 *, UILineInfo_t522 , UILineInfo_t522 , const MethodInfo*))Comparison_1_Invoke_m17478_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17479_gshared (Comparison_1_t2359 * __this, UILineInfo_t522  ___x, UILineInfo_t522  ___y, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17479(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2359 *, UILineInfo_t522 , UILineInfo_t522 , AsyncCallback_t382 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17479_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17480_gshared (Comparison_1_t2359 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17480(__this, ___result, method) (( int32_t (*) (Comparison_1_t2359 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17480_gshared)(__this, ___result, method)
