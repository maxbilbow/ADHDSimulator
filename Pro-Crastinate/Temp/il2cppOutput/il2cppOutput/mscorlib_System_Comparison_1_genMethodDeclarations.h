#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t300;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2245_gshared (Comparison_1_t300 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2245(__this, ___object, ___method, method) (( void (*) (Comparison_1_t300 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2245_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13865_gshared (Comparison_1_t300 * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13865(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t300 *, RaycastResult_t326 , RaycastResult_t326 , const MethodInfo*))Comparison_1_Invoke_m13865_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13866_gshared (Comparison_1_t300 * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13866(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t300 *, RaycastResult_t326 , RaycastResult_t326 , AsyncCallback_t391 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13866_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13867_gshared (Comparison_1_t300 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13867(__this, ___result, method) (( int32_t (*) (Comparison_1_t300 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13867_gshared)(__this, ___result, method)
