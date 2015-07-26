#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t2270;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2269;
// System.Object[]
struct ObjectU5BU5D_t146;

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16050_gshared (InvokableCall_1_t2270 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m16050(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2270 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m16050_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16051_gshared (InvokableCall_1_t2270 * __this, UnityAction_1_t2269 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m16051(__this, ___callback, method) (( void (*) (InvokableCall_1_t2270 *, UnityAction_1_t2269 *, const MethodInfo*))InvokableCall_1__ctor_m16051_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16052_gshared (InvokableCall_1_t2270 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m16052(__this, ___args, method) (( void (*) (InvokableCall_1_t2270 *, ObjectU5BU5D_t146*, const MethodInfo*))InvokableCall_1_Invoke_m16052_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16053_gshared (InvokableCall_1_t2270 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m16053(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2270 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m16053_gshared)(__this, ___targetObj, ___method, method)
