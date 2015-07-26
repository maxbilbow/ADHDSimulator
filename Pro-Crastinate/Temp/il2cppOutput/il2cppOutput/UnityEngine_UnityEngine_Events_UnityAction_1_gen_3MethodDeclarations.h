#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t528;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2557_gshared (UnityAction_1_t528 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m2557(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t528 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2557_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15739_gshared (UnityAction_1_t528 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m15739(__this, ___arg0, method) (( void (*) (UnityAction_1_t528 *, float, const MethodInfo*))UnityAction_1_Invoke_m15739_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15740_gshared (UnityAction_1_t528 * __this, float ___arg0, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15740(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t528 *, float, AsyncCallback_t382 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15740_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15741_gshared (UnityAction_1_t528 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m15741(__this, ___result, method) (( void (*) (UnityAction_1_t528 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15741_gshared)(__this, ___result, method)
