#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t2319;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2318;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16324_gshared (InvokableCall_1_t2319 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m16324(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2319 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m16324_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16325_gshared (InvokableCall_1_t2319 * __this, UnityAction_1_t2318 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m16325(__this, ___callback, method) (( void (*) (InvokableCall_1_t2319 *, UnityAction_1_t2318 *, const MethodInfo*))InvokableCall_1__ctor_m16325_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16326_gshared (InvokableCall_1_t2319 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m16326(__this, ___args, method) (( void (*) (InvokableCall_1_t2319 *, ObjectU5BU5D_t148*, const MethodInfo*))InvokableCall_1_Invoke_m16326_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16327_gshared (InvokableCall_1_t2319 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m16327(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2319 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m16327_gshared)(__this, ___targetObj, ___method, method)
