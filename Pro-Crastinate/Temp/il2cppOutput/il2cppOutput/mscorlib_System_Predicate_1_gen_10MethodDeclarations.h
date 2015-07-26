#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Material>
struct Predicate_1_t2040;
// System.Object
struct Object_t;
// UnityEngine.Material
struct Material_t190;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Material>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m12679(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2040 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11333_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Material>::Invoke(T)
#define Predicate_1_Invoke_m12680(__this, ___obj, method) (( bool (*) (Predicate_1_t2040 *, Material_t190 *, const MethodInfo*))Predicate_1_Invoke_m11334_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Material>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12681(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2040 *, Material_t190 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11335_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Material>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12682(__this, ___result, method) (( bool (*) (Predicate_1_t2040 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11336_gshared)(__this, ___result, method)
