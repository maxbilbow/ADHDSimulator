﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2571;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t777;

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_4__ctor_m19685_gshared (UnityEvent_4_t2571 * __this, const MethodInfo* method);
#define UnityEvent_4__ctor_m19685(__this, method) (( void (*) (UnityEvent_4_t2571 *, const MethodInfo*))UnityEvent_4__ctor_m19685_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m19686_gshared (UnityEvent_4_t2571 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m19686(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_4_t2571 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_4_FindMethod_Impl_m19686_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t777 * UnityEvent_4_GetDelegate_m19687_gshared (UnityEvent_4_t2571 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_4_GetDelegate_m19687(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t777 * (*) (UnityEvent_4_t2571 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_4_GetDelegate_m19687_gshared)(__this, ___target, ___theFunction, method)