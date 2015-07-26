#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2113;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2090;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m13700_gshared (ObjectPool_1_t2113 * __this, UnityAction_1_t2090 * ___actionOnGet, UnityAction_1_t2090 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m13700(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2113 *, UnityAction_1_t2090 *, UnityAction_1_t2090 *, const MethodInfo*))ObjectPool_1__ctor_m13700_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m13702_gshared (ObjectPool_1_t2113 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m13702(__this, method) (( int32_t (*) (ObjectPool_1_t2113 *, const MethodInfo*))ObjectPool_1_get_countAll_m13702_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m13704_gshared (ObjectPool_1_t2113 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m13704(__this, ___value, method) (( void (*) (ObjectPool_1_t2113 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13704_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m13706_gshared (ObjectPool_1_t2113 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m13706(__this, method) (( int32_t (*) (ObjectPool_1_t2113 *, const MethodInfo*))ObjectPool_1_get_countActive_m13706_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m13708_gshared (ObjectPool_1_t2113 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m13708(__this, method) (( int32_t (*) (ObjectPool_1_t2113 *, const MethodInfo*))ObjectPool_1_get_countInactive_m13708_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m13710_gshared (ObjectPool_1_t2113 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m13710(__this, method) (( Object_t * (*) (ObjectPool_1_t2113 *, const MethodInfo*))ObjectPool_1_Get_m13710_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m13712_gshared (ObjectPool_1_t2113 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m13712(__this, ___element, method) (( void (*) (ObjectPool_1_t2113 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m13712_gshared)(__this, ___element, method)
