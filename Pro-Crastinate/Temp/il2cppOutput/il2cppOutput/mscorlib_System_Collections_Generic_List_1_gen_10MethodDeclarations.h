﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t317;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t319;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t2719;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t2132;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t2720;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t2721;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t2134;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t2135;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t2137;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m2269(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1__ctor_m4062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m14005(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m14006(__this, ___capacity, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(T[],System.Int32)
#define List_1__ctor_m14007(__this, ___data, ___size, method) (( void (*) (List_1_t317 *, BaseRaycasterU5BU5D_t2132*, int32_t, const MethodInfo*))List_1__ctor_m11145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m14008(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11147_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14009(__this, method) (( Object_t* (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14010(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14011(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14012(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14013(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14014(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14015(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14016(__this, ___item, method) (( void (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14017(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14018(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11167_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14019(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14020(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14021(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11173_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14022(__this, ___index, method) (( Object_t * (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14023(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11177_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m14024(__this, ___item, method) (( void (*) (List_1_t317 *, BaseRaycaster_t319 *, const MethodInfo*))List_1_Add_m11179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14025(__this, ___newCount, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11181_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14026(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14027(__this, ___enumerable, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11185_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14028(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddRange_m11187_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m14029(__this, method) (( ReadOnlyCollection_1_t2134 * (*) (List_1_t317 *, const MethodInfo*))List_1_AsReadOnly_m11189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m14030(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Clear_m11191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m14031(__this, ___item, method) (( bool (*) (List_1_t317 *, BaseRaycaster_t319 *, const MethodInfo*))List_1_Contains_m11193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14032(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, BaseRaycasterU5BU5D_t2132*, int32_t, const MethodInfo*))List_1_CopyTo_m11195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m14033(__this, ___match, method) (( bool (*) (List_1_t317 *, Predicate_1_t2135 *, const MethodInfo*))List_1_Exists_m11196_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m14034(__this, ___match, method) (( BaseRaycaster_t319 * (*) (List_1_t317 *, Predicate_1_t2135 *, const MethodInfo*))List_1_Find_m11198_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14035(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2135 *, const MethodInfo*))List_1_CheckMatch_m11200_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m14036(__this, ___match, method) (( List_1_t317 * (*) (List_1_t317 *, Predicate_1_t2135 *, const MethodInfo*))List_1_FindAll_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m14037(__this, ___match, method) (( List_1_t317 * (*) (List_1_t317 *, Predicate_1_t2135 *, const MethodInfo*))List_1_FindAllStackBits_m11204_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m14038(__this, ___match, method) (( List_1_t317 * (*) (List_1_t317 *, Predicate_1_t2135 *, const MethodInfo*))List_1_FindAllList_m11206_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14039(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t317 *, int32_t, int32_t, Predicate_1_t2135 *, const MethodInfo*))List_1_GetIndex_m11208_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#define List_1_GetEnumerator_m14040(__this, method) (( Enumerator_t2136  (*) (List_1_t317 *, const MethodInfo*))List_1_GetEnumerator_m11209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m14041(__this, ___item, method) (( int32_t (*) (List_1_t317 *, BaseRaycaster_t319 *, const MethodInfo*))List_1_IndexOf_m11211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14042(__this, ___start, ___delta, method) (( void (*) (List_1_t317 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11213_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14043(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m14044(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, BaseRaycaster_t319 *, const MethodInfo*))List_1_Insert_m11217_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14045(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11219_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m14046(__this, ___item, method) (( bool (*) (List_1_t317 *, BaseRaycaster_t319 *, const MethodInfo*))List_1_Remove_m11221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14047(__this, ___match, method) (( int32_t (*) (List_1_t317 *, Predicate_1_t2135 *, const MethodInfo*))List_1_RemoveAll_m11223_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14048(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11225_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m14049(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Reverse_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m14050(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14051(__this, ___comparison, method) (( void (*) (List_1_t317 *, Comparison_1_t2137 *, const MethodInfo*))List_1_Sort_m11231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m14052(__this, method) (( BaseRaycasterU5BU5D_t2132* (*) (List_1_t317 *, const MethodInfo*))List_1_ToArray_m11232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m14053(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_TrimExcess_m11234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m14054(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Capacity_m11236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14055(__this, ___value, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11238_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m14056(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Count_m11240_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m14057(__this, ___index, method) (( BaseRaycaster_t319 * (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_get_Item_m11242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m14058(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, BaseRaycaster_t319 *, const MethodInfo*))List_1_set_Item_m11244_gshared)(__this, ___index, ___value, method)
