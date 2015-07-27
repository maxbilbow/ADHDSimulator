#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2555;
// UnityEngine.Object
struct Object_t76;
struct Object_t76_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m19471_gshared (CachedInvokableCall_1_t2555 * __this, Object_t76 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m19471(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2555 *, Object_t76 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m19471_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m19472_gshared (CachedInvokableCall_1_t2555 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m19472(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2555 *, ObjectU5BU5D_t148*, const MethodInfo*))CachedInvokableCall_1_Invoke_m19472_gshared)(__this, ___args, method)
