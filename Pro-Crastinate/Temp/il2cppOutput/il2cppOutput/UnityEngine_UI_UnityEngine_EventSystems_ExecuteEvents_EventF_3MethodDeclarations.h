#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t298;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t467;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t259;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m2247(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t298 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m13594_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m14095(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t298 *, Object_t *, BaseEventData_t259 *, const MethodInfo*))EventFunction_1_Invoke_m13596_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m14096(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t298 *, Object_t *, BaseEventData_t259 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m13598_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m14097(__this, ___result, method) (( void (*) (EventFunction_1_t298 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m13600_gshared)(__this, ___result, method)
