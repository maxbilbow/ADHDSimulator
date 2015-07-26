#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t2135;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t319;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m14087(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2135 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11333_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::Invoke(T)
#define Predicate_1_Invoke_m14088(__this, ___obj, method) (( bool (*) (Predicate_1_t2135 *, BaseRaycaster_t319 *, const MethodInfo*))Predicate_1_Invoke_m11334_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m14089(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2135 *, BaseRaycaster_t319 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11335_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m14090(__this, ___result, method) (( bool (*) (Predicate_1_t2135 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11336_gshared)(__this, ___result, method)
