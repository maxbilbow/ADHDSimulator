#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t455;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t456;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t493;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2667(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t455 *, UnityAction_1_t456 *, UnityAction_1_t456 *, const MethodInfo*))ObjectPool_1__ctor_m13700_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m16270(__this, method) (( int32_t (*) (ObjectPool_1_t455 *, const MethodInfo*))ObjectPool_1_get_countAll_m13702_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16271(__this, ___value, method) (( void (*) (ObjectPool_1_t455 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13704_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m16272(__this, method) (( int32_t (*) (ObjectPool_1_t455 *, const MethodInfo*))ObjectPool_1_get_countActive_m13706_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16273(__this, method) (( int32_t (*) (ObjectPool_1_t455 *, const MethodInfo*))ObjectPool_1_get_countInactive_m13708_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2668(__this, method) (( List_1_t493 * (*) (ObjectPool_1_t455 *, const MethodInfo*))ObjectPool_1_Get_m13710_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2669(__this, ___element, method) (( void (*) (ObjectPool_1_t455 *, List_1_t493 *, const MethodInfo*))ObjectPool_1_Release_m13712_gshared)(__this, ___element, method)
