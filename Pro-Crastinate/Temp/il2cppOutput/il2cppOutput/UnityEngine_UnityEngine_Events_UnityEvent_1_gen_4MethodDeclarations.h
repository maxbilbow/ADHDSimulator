#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t426;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2269;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t769;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m2614_gshared (UnityEvent_1_t426 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2614(__this, method) (( void (*) (UnityEvent_1_t426 *, const MethodInfo*))UnityEvent_1__ctor_m2614_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m16041_gshared (UnityEvent_1_t426 * __this, UnityAction_1_t2269 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m16041(__this, ___call, method) (( void (*) (UnityEvent_1_t426 *, UnityAction_1_t2269 *, const MethodInfo*))UnityEvent_1_AddListener_m16041_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m16042_gshared (UnityEvent_1_t426 * __this, UnityAction_1_t2269 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16042(__this, ___call, method) (( void (*) (UnityEvent_1_t426 *, UnityAction_1_t2269 *, const MethodInfo*))UnityEvent_1_RemoveListener_m16042_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m16043_gshared (UnityEvent_1_t426 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16043(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t426 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m16043_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t769 * UnityEvent_1_GetDelegate_m16044_gshared (UnityEvent_1_t426 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16044(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t769 * (*) (UnityEvent_1_t426 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m16044_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t769 * UnityEvent_1_GetDelegate_m16045_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2269 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16045(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t769 * (*) (Object_t * /* static, unused */, UnityAction_1_t2269 *, const MethodInfo*))UnityEvent_1_GetDelegate_m16045_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2615_gshared (UnityEvent_1_t426 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2615(__this, ___arg0, method) (( void (*) (UnityEvent_1_t426 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m2615_gshared)(__this, ___arg0, method)
