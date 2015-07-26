﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2092;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2090;
// System.Object[]
struct ObjectU5BU5D_t146;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13394_gshared (InvokableCall_1_t2092 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13394(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2092 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13394_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13395_gshared (InvokableCall_1_t2092 * __this, UnityAction_1_t2090 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m13395(__this, ___callback, method) (( void (*) (InvokableCall_1_t2092 *, UnityAction_1_t2090 *, const MethodInfo*))InvokableCall_1__ctor_m13395_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13396_gshared (InvokableCall_1_t2092 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13396(__this, ___args, method) (( void (*) (InvokableCall_1_t2092 *, ObjectU5BU5D_t146*, const MethodInfo*))InvokableCall_1_Invoke_m13396_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13397_gshared (InvokableCall_1_t2092 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13397(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2092 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13397_gshared)(__this, ___targetObj, ___method, method)