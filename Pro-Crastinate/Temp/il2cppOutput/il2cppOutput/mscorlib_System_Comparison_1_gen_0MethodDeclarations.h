#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t342;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2347_gshared (Comparison_1_t342 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2347(__this, ___object, ___method, method) (( void (*) (Comparison_1_t342 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2347_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14847_gshared (Comparison_1_t342 * __this, RaycastHit_t196  ___x, RaycastHit_t196  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14847(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t342 *, RaycastHit_t196 , RaycastHit_t196 , const MethodInfo*))Comparison_1_Invoke_m14847_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14848_gshared (Comparison_1_t342 * __this, RaycastHit_t196  ___x, RaycastHit_t196  ___y, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14848(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t342 *, RaycastHit_t196 , RaycastHit_t196 , AsyncCallback_t391 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14848_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14849_gshared (Comparison_1_t342 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14849(__this, ___result, method) (( int32_t (*) (Comparison_1_t342 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14849_gshared)(__this, ___result, method)
