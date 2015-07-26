#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t354;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t357;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t392;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2362(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t354 *, UnityAction_1_t357 *, UnityAction_1_t357 *, const MethodInfo*))ObjectPool_1__ctor_m13700_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m15066(__this, method) (( int32_t (*) (ObjectPool_1_t354 *, const MethodInfo*))ObjectPool_1_get_countAll_m13702_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15067(__this, ___value, method) (( void (*) (ObjectPool_1_t354 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13704_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m15068(__this, method) (( int32_t (*) (ObjectPool_1_t354 *, const MethodInfo*))ObjectPool_1_get_countActive_m13706_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15069(__this, method) (( int32_t (*) (ObjectPool_1_t354 *, const MethodInfo*))ObjectPool_1_get_countInactive_m13708_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m2369(__this, method) (( List_1_t392 * (*) (ObjectPool_1_t354 *, const MethodInfo*))ObjectPool_1_Get_m13710_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m2374(__this, ___element, method) (( void (*) (ObjectPool_1_t354 *, List_1_t392 *, const MethodInfo*))ObjectPool_1_Release_m13712_gshared)(__this, ___element, method)
