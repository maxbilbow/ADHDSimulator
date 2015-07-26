#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t378;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t2247;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t769;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m2453(__this, method) (( void (*) (UnityEvent_1_t378 *, const MethodInfo*))UnityEvent_1__ctor_m13369_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m15715(__this, ___call, method) (( void (*) (UnityEvent_1_t378 *, UnityAction_1_t2247 *, const MethodInfo*))UnityEvent_1_AddListener_m13370_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m15716(__this, ___call, method) (( void (*) (UnityEvent_1_t378 *, UnityAction_1_t2247 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13372_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m15717(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t378 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13374_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m15718(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t769 * (*) (UnityEvent_1_t378 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13376_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m15719(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t769 * (*) (Object_t * /* static, unused */, UnityAction_1_t2247 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13378_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m2508(__this, ___arg0, method) (( void (*) (UnityEvent_1_t378 *, String_t*, const MethodInfo*))UnityEvent_1_Invoke_m13379_gshared)(__this, ___arg0, method)
