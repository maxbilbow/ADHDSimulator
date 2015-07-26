﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t314;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t483;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"
#define UnityAction_1__ctor_m2262(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t314 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13362_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Invoke(T0)
#define UnityAction_1_Invoke_m13740(__this, ___arg0, method) (( void (*) (UnityAction_1_t314 *, List_1_t483 *, const MethodInfo*))UnityAction_1_Invoke_m13364_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m13741(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t314 *, List_1_t483 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13366_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m13742(__this, ___result, method) (( void (*) (UnityAction_1_t314 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13368_gshared)(__this, ___result, method)
