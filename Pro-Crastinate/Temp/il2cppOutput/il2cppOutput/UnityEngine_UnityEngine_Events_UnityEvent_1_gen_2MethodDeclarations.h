﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t402;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t528;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t769;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m2549_gshared (UnityEvent_1_t402 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2549(__this, method) (( void (*) (UnityEvent_1_t402 *, const MethodInfo*))UnityEvent_1__ctor_m2549_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2562_gshared (UnityEvent_1_t402 * __this, UnityAction_1_t528 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2562(__this, ___call, method) (( void (*) (UnityEvent_1_t402 *, UnityAction_1_t528 *, const MethodInfo*))UnityEvent_1_AddListener_m2562_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2561_gshared (UnityEvent_1_t402 * __this, UnityAction_1_t528 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2561(__this, ___call, method) (( void (*) (UnityEvent_1_t402 *, UnityAction_1_t528 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2561_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15739_gshared (UnityEvent_1_t402 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m15739(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t402 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m15739_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t769 * UnityEvent_1_GetDelegate_m15740_gshared (UnityEvent_1_t402 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15740(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t769 * (*) (UnityEvent_1_t402 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m15740_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t769 * UnityEvent_1_GetDelegate_m15741_gshared (Object_t * __this /* static, unused */, UnityAction_1_t528 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15741(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t769 * (*) (Object_t * /* static, unused */, UnityAction_1_t528 *, const MethodInfo*))UnityEvent_1_GetDelegate_m15741_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2554_gshared (UnityEvent_1_t402 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2554(__this, ___arg0, method) (( void (*) (UnityEvent_1_t402 *, float, const MethodInfo*))UnityEvent_1_Invoke_m2554_gshared)(__this, ___arg0, method)