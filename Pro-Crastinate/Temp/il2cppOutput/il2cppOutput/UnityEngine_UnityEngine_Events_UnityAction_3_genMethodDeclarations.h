﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t2552;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_3__ctor_m19460_gshared (UnityAction_3_t2552 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_3__ctor_m19460(__this, ___object, ___method, method) (( void (*) (UnityAction_3_t2552 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_3__ctor_m19460_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m19461_gshared (UnityAction_3_t2552 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
#define UnityAction_3_Invoke_m19461(__this, ___arg0, ___arg1, ___arg2, method) (( void (*) (UnityAction_3_t2552 *, Object_t *, Object_t *, Object_t *, const MethodInfo*))UnityAction_3_Invoke_m19461_gshared)(__this, ___arg0, ___arg1, ___arg2, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_3_BeginInvoke_m19462_gshared (UnityAction_3_t2552 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_3_BeginInvoke_m19462(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (UnityAction_3_t2552 *, Object_t *, Object_t *, Object_t *, AsyncCallback_t391 *, Object_t *, const MethodInfo*))UnityAction_3_BeginInvoke_m19462_gshared)(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m19463_gshared (UnityAction_3_t2552 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_3_EndInvoke_m19463(__this, ___result, method) (( void (*) (UnityAction_3_t2552 *, Object_t *, const MethodInfo*))UnityAction_3_EndInvoke_m19463_gshared)(__this, ___result, method)