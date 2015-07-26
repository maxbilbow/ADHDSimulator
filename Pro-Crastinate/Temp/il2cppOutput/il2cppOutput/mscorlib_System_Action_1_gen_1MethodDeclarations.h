#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t506;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t277;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m2352(__this, ___object, ___method, method) (( void (*) (Action_1_t506 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m13222_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m4032(__this, ___obj, method) (( void (*) (Action_1_t506 *, Font_t277 *, const MethodInfo*))Action_1_Invoke_m13223_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m15064(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t506 *, Font_t277 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m13225_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m15065(__this, ___result, method) (( void (*) (Action_1_t506 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m13227_gshared)(__this, ___result, method)
