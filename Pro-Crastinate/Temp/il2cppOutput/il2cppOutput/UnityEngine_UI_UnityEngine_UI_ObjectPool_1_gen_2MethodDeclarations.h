#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t458;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t459;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t491;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2671(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t458 *, UnityAction_1_t459 *, UnityAction_1_t459 *, const MethodInfo*))ObjectPool_1__ctor_m13700_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m16288(__this, method) (( int32_t (*) (ObjectPool_1_t458 *, const MethodInfo*))ObjectPool_1_get_countAll_m13702_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16289(__this, ___value, method) (( void (*) (ObjectPool_1_t458 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13704_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m16290(__this, method) (( int32_t (*) (ObjectPool_1_t458 *, const MethodInfo*))ObjectPool_1_get_countActive_m13706_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16291(__this, method) (( int32_t (*) (ObjectPool_1_t458 *, const MethodInfo*))ObjectPool_1_get_countInactive_m13708_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2672(__this, method) (( List_1_t491 * (*) (ObjectPool_1_t458 *, const MethodInfo*))ObjectPool_1_Get_m13710_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2673(__this, ___element, method) (( void (*) (ObjectPool_1_t458 *, List_1_t491 *, const MethodInfo*))ObjectPool_1_Release_m13712_gshared)(__this, ___element, method)
