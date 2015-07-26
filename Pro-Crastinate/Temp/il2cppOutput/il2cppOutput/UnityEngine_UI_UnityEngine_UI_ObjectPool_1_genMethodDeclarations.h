﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t313;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t314;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t483;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2263(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t313 *, UnityAction_1_t314 *, UnityAction_1_t314 *, const MethodInfo*))ObjectPool_1__ctor_m13700_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m13701(__this, method) (( int32_t (*) (ObjectPool_1_t313 *, const MethodInfo*))ObjectPool_1_get_countAll_m13702_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13703(__this, ___value, method) (( void (*) (ObjectPool_1_t313 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13704_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m13705(__this, method) (( int32_t (*) (ObjectPool_1_t313 *, const MethodInfo*))ObjectPool_1_get_countActive_m13706_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13707(__this, method) (( int32_t (*) (ObjectPool_1_t313 *, const MethodInfo*))ObjectPool_1_get_countInactive_m13708_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m13709(__this, method) (( List_1_t483 * (*) (ObjectPool_1_t313 *, const MethodInfo*))ObjectPool_1_Get_m13710_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m13711(__this, ___element, method) (( void (*) (ObjectPool_1_t313 *, List_1_t483 *, const MethodInfo*))ObjectPool_1_Release_m13712_gshared)(__this, ___element, method)
