#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2318;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m16320_gshared (UnityAction_1_t2318 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m16320(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2318 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m16320_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16321_gshared (UnityAction_1_t2318 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m16321(__this, ___arg0, method) (( void (*) (UnityAction_1_t2318 *, bool, const MethodInfo*))UnityAction_1_Invoke_m16321_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16322_gshared (UnityAction_1_t2318 * __this, bool ___arg0, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16322(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2318 *, bool, AsyncCallback_t391 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m16322_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16323_gshared (UnityAction_1_t2318 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m16323(__this, ___result, method) (( void (*) (UnityAction_1_t2318 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m16323_gshared)(__this, ___result, method)
