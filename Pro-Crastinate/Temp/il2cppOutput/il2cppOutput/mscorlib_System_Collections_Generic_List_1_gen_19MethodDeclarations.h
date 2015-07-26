﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t413;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t343;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t2785;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t2251;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t2786;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t2787;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t2253;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t2254;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t2256;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m2587(__this, method) (( void (*) (List_1_t413 *, const MethodInfo*))List_1__ctor_m4062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15761(__this, ___collection, method) (( void (*) (List_1_t413 *, Object_t*, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m15762(__this, ___capacity, method) (( void (*) (List_1_t413 *, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(T[],System.Int32)
#define List_1__ctor_m15763(__this, ___data, ___size, method) (( void (*) (List_1_t413 *, SelectableU5BU5D_t2251*, int32_t, const MethodInfo*))List_1__ctor_m11145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m15764(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11147_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15765(__this, method) (( Object_t* (*) (List_1_t413 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15766(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t413 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15767(__this, method) (( Object_t * (*) (List_1_t413 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15768(__this, ___item, method) (( int32_t (*) (List_1_t413 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15769(__this, ___item, method) (( bool (*) (List_1_t413 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15770(__this, ___item, method) (( int32_t (*) (List_1_t413 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15771(__this, ___index, ___item, method) (( void (*) (List_1_t413 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15772(__this, ___item, method) (( void (*) (List_1_t413 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15773(__this, method) (( bool (*) (List_1_t413 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15774(__this, method) (( bool (*) (List_1_t413 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11167_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15775(__this, method) (( Object_t * (*) (List_1_t413 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15776(__this, method) (( bool (*) (List_1_t413 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15777(__this, method) (( bool (*) (List_1_t413 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11173_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15778(__this, ___index, method) (( Object_t * (*) (List_1_t413 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15779(__this, ___index, ___value, method) (( void (*) (List_1_t413 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11177_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m15780(__this, ___item, method) (( void (*) (List_1_t413 *, Selectable_t343 *, const MethodInfo*))List_1_Add_m11179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15781(__this, ___newCount, method) (( void (*) (List_1_t413 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11181_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15782(__this, ___collection, method) (( void (*) (List_1_t413 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15783(__this, ___enumerable, method) (( void (*) (List_1_t413 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11185_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15784(__this, ___collection, method) (( void (*) (List_1_t413 *, Object_t*, const MethodInfo*))List_1_AddRange_m11187_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m15785(__this, method) (( ReadOnlyCollection_1_t2253 * (*) (List_1_t413 *, const MethodInfo*))List_1_AsReadOnly_m11189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m15786(__this, method) (( void (*) (List_1_t413 *, const MethodInfo*))List_1_Clear_m11191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m15787(__this, ___item, method) (( bool (*) (List_1_t413 *, Selectable_t343 *, const MethodInfo*))List_1_Contains_m11193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15788(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t413 *, SelectableU5BU5D_t2251*, int32_t, const MethodInfo*))List_1_CopyTo_m11195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m15789(__this, ___match, method) (( bool (*) (List_1_t413 *, Predicate_1_t2254 *, const MethodInfo*))List_1_Exists_m11196_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m15790(__this, ___match, method) (( Selectable_t343 * (*) (List_1_t413 *, Predicate_1_t2254 *, const MethodInfo*))List_1_Find_m11198_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15791(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2254 *, const MethodInfo*))List_1_CheckMatch_m11200_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m15792(__this, ___match, method) (( List_1_t413 * (*) (List_1_t413 *, Predicate_1_t2254 *, const MethodInfo*))List_1_FindAll_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m15793(__this, ___match, method) (( List_1_t413 * (*) (List_1_t413 *, Predicate_1_t2254 *, const MethodInfo*))List_1_FindAllStackBits_m11204_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m15794(__this, ___match, method) (( List_1_t413 * (*) (List_1_t413 *, Predicate_1_t2254 *, const MethodInfo*))List_1_FindAllList_m11206_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15795(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t413 *, int32_t, int32_t, Predicate_1_t2254 *, const MethodInfo*))List_1_GetIndex_m11208_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m15796(__this, method) (( Enumerator_t2255  (*) (List_1_t413 *, const MethodInfo*))List_1_GetEnumerator_m11209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m15797(__this, ___item, method) (( int32_t (*) (List_1_t413 *, Selectable_t343 *, const MethodInfo*))List_1_IndexOf_m11211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15798(__this, ___start, ___delta, method) (( void (*) (List_1_t413 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11213_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15799(__this, ___index, method) (( void (*) (List_1_t413 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m15800(__this, ___index, ___item, method) (( void (*) (List_1_t413 *, int32_t, Selectable_t343 *, const MethodInfo*))List_1_Insert_m11217_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15801(__this, ___collection, method) (( void (*) (List_1_t413 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11219_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m15802(__this, ___item, method) (( bool (*) (List_1_t413 *, Selectable_t343 *, const MethodInfo*))List_1_Remove_m11221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15803(__this, ___match, method) (( int32_t (*) (List_1_t413 *, Predicate_1_t2254 *, const MethodInfo*))List_1_RemoveAll_m11223_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15804(__this, ___index, method) (( void (*) (List_1_t413 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11225_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m15805(__this, method) (( void (*) (List_1_t413 *, const MethodInfo*))List_1_Reverse_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m15806(__this, method) (( void (*) (List_1_t413 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15807(__this, ___comparison, method) (( void (*) (List_1_t413 *, Comparison_1_t2256 *, const MethodInfo*))List_1_Sort_m11231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m15808(__this, method) (( SelectableU5BU5D_t2251* (*) (List_1_t413 *, const MethodInfo*))List_1_ToArray_m11232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m15809(__this, method) (( void (*) (List_1_t413 *, const MethodInfo*))List_1_TrimExcess_m11234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m15810(__this, method) (( int32_t (*) (List_1_t413 *, const MethodInfo*))List_1_get_Capacity_m11236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15811(__this, ___value, method) (( void (*) (List_1_t413 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11238_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m15812(__this, method) (( int32_t (*) (List_1_t413 *, const MethodInfo*))List_1_get_Count_m11240_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m15813(__this, ___index, method) (( Selectable_t343 * (*) (List_1_t413 *, int32_t, const MethodInfo*))List_1_get_Item_m11242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m15814(__this, ___index, ___value, method) (( void (*) (List_1_t413 *, int32_t, Selectable_t343 *, const MethodInfo*))List_1_set_Item_m11244_gshared)(__this, ___index, ___value, method)
