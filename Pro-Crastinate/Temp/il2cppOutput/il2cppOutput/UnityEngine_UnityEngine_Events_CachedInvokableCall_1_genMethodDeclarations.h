#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t878;
// UnityEngine.Object
struct Object_t76;
struct Object_t76_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m4147_gshared (CachedInvokableCall_1_t878 * __this, Object_t76 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m4147(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t878 *, Object_t76 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m4147_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m19473_gshared (CachedInvokableCall_1_t878 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m19473(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t878 *, ObjectU5BU5D_t148*, const MethodInfo*))CachedInvokableCall_1_Invoke_m19473_gshared)(__this, ___args, method)
