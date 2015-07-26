﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t296;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerEnterHandler
struct IPointerEnterHandler_t465;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t259;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m2248(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t296 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m13609_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m14104(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t296 *, Object_t *, BaseEventData_t259 *, const MethodInfo*))EventFunction_1_Invoke_m13611_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m14105(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t296 *, Object_t *, BaseEventData_t259 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m13613_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m14106(__this, ___result, method) (( void (*) (EventFunction_1_t296 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m13615_gshared)(__this, ___result, method)