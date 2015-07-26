#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t448;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t174;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"
#define UnityAction_1__ctor_m2660(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t448 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13376_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m2663(__this, ___arg0, method) (( void (*) (UnityAction_1_t448 *, Component_t174 *, const MethodInfo*))UnityAction_1_Invoke_m13378_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m16277(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t448 *, Component_t174 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13380_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m16278(__this, ___result, method) (( void (*) (UnityAction_1_t448 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13382_gshared)(__this, ___result, method)
