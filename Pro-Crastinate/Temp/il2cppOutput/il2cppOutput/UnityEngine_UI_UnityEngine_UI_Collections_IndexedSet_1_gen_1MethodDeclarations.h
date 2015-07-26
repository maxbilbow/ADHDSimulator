#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2174;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1962;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Predicate`1<System.Object>
struct Predicate_1_t1941;
// System.Comparison`1<System.Object>
struct Comparison_1_t1947;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14592_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m14592(__this, method) (( void (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1__ctor_m14592_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14594_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14594(__this, method) (( Object_t * (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14594_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14596_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14596(__this, ___item, method) (( void (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14596_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14598_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14598(__this, ___item, method) (( bool (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14598_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14600_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14600(__this, method) (( Object_t* (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14600_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14602_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14602(__this, method) (( void (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_Clear_m14602_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14604_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14604(__this, ___item, method) (( bool (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14604_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14606_gshared (IndexedSet_1_t2174 * __this, ObjectU5BU5D_t146* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14606(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2174 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14606_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14608_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14608(__this, method) (( int32_t (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_get_Count_m14608_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14610_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14610(__this, method) (( bool (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14610_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14612_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14612(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14612_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14614_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14614(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2174 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14614_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14616_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14616(__this, ___index, method) (( void (*) (IndexedSet_1_t2174 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14616_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14618_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14618(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2174 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14618_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14620_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14620(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2174 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14620_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14621_gshared (IndexedSet_1_t2174 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14621(__this, ___match, method) (( void (*) (IndexedSet_1_t2174 *, Predicate_1_t1941 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14621_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14622_gshared (IndexedSet_1_t2174 * __this, Comparison_1_t1947 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14622(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2174 *, Comparison_1_t1947 *, const MethodInfo*))IndexedSet_1_Sort_m14622_gshared)(__this, ___sortLayoutFunction, method)
