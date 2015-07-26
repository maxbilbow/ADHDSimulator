#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t2513;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t772;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m19310(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2513 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11333_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::Invoke(T)
#define Predicate_1_Invoke_m19311(__this, ___obj, method) (( bool (*) (Predicate_1_t2513 *, PersistentCall_t772 *, const MethodInfo*))Predicate_1_Invoke_m11334_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m19312(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2513 *, PersistentCall_t772 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11335_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m19313(__this, ___result, method) (( bool (*) (Predicate_1_t2513 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11336_gshared)(__this, ___result, method)
