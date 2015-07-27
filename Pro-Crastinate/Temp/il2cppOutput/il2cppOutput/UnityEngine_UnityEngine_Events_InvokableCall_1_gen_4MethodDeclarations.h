#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t2556;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2557;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m19475_gshared (InvokableCall_1_t2556 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m19475(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2556 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m19475_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m19476_gshared (InvokableCall_1_t2556 * __this, UnityAction_1_t2557 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m19476(__this, ___callback, method) (( void (*) (InvokableCall_1_t2556 *, UnityAction_1_t2557 *, const MethodInfo*))InvokableCall_1__ctor_m19476_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m19477_gshared (InvokableCall_1_t2556 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m19477(__this, ___args, method) (( void (*) (InvokableCall_1_t2556 *, ObjectU5BU5D_t148*, const MethodInfo*))InvokableCall_1_Invoke_m19477_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m19478_gshared (InvokableCall_1_t2556 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m19478(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2556 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m19478_gshared)(__this, ___targetObj, ___method, method)
