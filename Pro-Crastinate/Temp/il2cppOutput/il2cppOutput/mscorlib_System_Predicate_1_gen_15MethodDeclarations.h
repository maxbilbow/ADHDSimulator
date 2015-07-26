#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2129;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m13993_gshared (Predicate_1_t2129 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m13993(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2129 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m13993_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13994_gshared (Predicate_1_t2129 * __this, RaycastResult_t320  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m13994(__this, ___obj, method) (( bool (*) (Predicate_1_t2129 *, RaycastResult_t320 , const MethodInfo*))Predicate_1_Invoke_m13994_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m13995_gshared (Predicate_1_t2129 * __this, RaycastResult_t320  ___obj, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m13995(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2129 *, RaycastResult_t320 , AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m13995_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13996_gshared (Predicate_1_t2129 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m13996(__this, ___result, method) (( bool (*) (Predicate_1_t2129 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m13996_gshared)(__this, ___result, method)
