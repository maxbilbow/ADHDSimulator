﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1922;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1718;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t2938;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t2613;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t2939;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t2940;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t2614;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t2615;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t2617;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m20076(__this, method) (( void (*) (List_1_t1922 *, const MethodInfo*))List_1__ctor_m4062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20077(__this, ___collection, method) (( void (*) (List_1_t1922 *, Object_t*, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m11103(__this, ___capacity, method) (( void (*) (List_1_t1922 *, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(T[],System.Int32)
#define List_1__ctor_m20078(__this, ___data, ___size, method) (( void (*) (List_1_t1922 *, StrongNameU5BU5D_t2613*, int32_t, const MethodInfo*))List_1__ctor_m11145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m20079(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11147_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20080(__this, method) (( Object_t* (*) (List_1_t1922 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20081(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1922 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20082(__this, method) (( Object_t * (*) (List_1_t1922 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20083(__this, ___item, method) (( int32_t (*) (List_1_t1922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20084(__this, ___item, method) (( bool (*) (List_1_t1922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20085(__this, ___item, method) (( int32_t (*) (List_1_t1922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20086(__this, ___index, ___item, method) (( void (*) (List_1_t1922 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20087(__this, ___item, method) (( void (*) (List_1_t1922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20088(__this, method) (( bool (*) (List_1_t1922 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20089(__this, method) (( bool (*) (List_1_t1922 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11167_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20090(__this, method) (( Object_t * (*) (List_1_t1922 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20091(__this, method) (( bool (*) (List_1_t1922 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20092(__this, method) (( bool (*) (List_1_t1922 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11173_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20093(__this, ___index, method) (( Object_t * (*) (List_1_t1922 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20094(__this, ___index, ___value, method) (( void (*) (List_1_t1922 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11177_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m20095(__this, ___item, method) (( void (*) (List_1_t1922 *, StrongName_t1718 *, const MethodInfo*))List_1_Add_m11179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20096(__this, ___newCount, method) (( void (*) (List_1_t1922 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11181_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20097(__this, ___collection, method) (( void (*) (List_1_t1922 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20098(__this, ___enumerable, method) (( void (*) (List_1_t1922 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11185_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20099(__this, ___collection, method) (( void (*) (List_1_t1922 *, Object_t*, const MethodInfo*))List_1_AddRange_m11187_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m20100(__this, method) (( ReadOnlyCollection_1_t2614 * (*) (List_1_t1922 *, const MethodInfo*))List_1_AsReadOnly_m11189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m20101(__this, method) (( void (*) (List_1_t1922 *, const MethodInfo*))List_1_Clear_m11191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m20102(__this, ___item, method) (( bool (*) (List_1_t1922 *, StrongName_t1718 *, const MethodInfo*))List_1_Contains_m11193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20103(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1922 *, StrongNameU5BU5D_t2613*, int32_t, const MethodInfo*))List_1_CopyTo_m11195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m20104(__this, ___match, method) (( bool (*) (List_1_t1922 *, Predicate_1_t2615 *, const MethodInfo*))List_1_Exists_m11196_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m20105(__this, ___match, method) (( StrongName_t1718 * (*) (List_1_t1922 *, Predicate_1_t2615 *, const MethodInfo*))List_1_Find_m11198_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20106(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2615 *, const MethodInfo*))List_1_CheckMatch_m11200_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m20107(__this, ___match, method) (( List_1_t1922 * (*) (List_1_t1922 *, Predicate_1_t2615 *, const MethodInfo*))List_1_FindAll_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m20108(__this, ___match, method) (( List_1_t1922 * (*) (List_1_t1922 *, Predicate_1_t2615 *, const MethodInfo*))List_1_FindAllStackBits_m11204_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m20109(__this, ___match, method) (( List_1_t1922 * (*) (List_1_t1922 *, Predicate_1_t2615 *, const MethodInfo*))List_1_FindAllList_m11206_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20110(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1922 *, int32_t, int32_t, Predicate_1_t2615 *, const MethodInfo*))List_1_GetIndex_m11208_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m20111(__this, method) (( Enumerator_t2616  (*) (List_1_t1922 *, const MethodInfo*))List_1_GetEnumerator_m11209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m20112(__this, ___item, method) (( int32_t (*) (List_1_t1922 *, StrongName_t1718 *, const MethodInfo*))List_1_IndexOf_m11211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20113(__this, ___start, ___delta, method) (( void (*) (List_1_t1922 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11213_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20114(__this, ___index, method) (( void (*) (List_1_t1922 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m20115(__this, ___index, ___item, method) (( void (*) (List_1_t1922 *, int32_t, StrongName_t1718 *, const MethodInfo*))List_1_Insert_m11217_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20116(__this, ___collection, method) (( void (*) (List_1_t1922 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11219_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m20117(__this, ___item, method) (( bool (*) (List_1_t1922 *, StrongName_t1718 *, const MethodInfo*))List_1_Remove_m11221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20118(__this, ___match, method) (( int32_t (*) (List_1_t1922 *, Predicate_1_t2615 *, const MethodInfo*))List_1_RemoveAll_m11223_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20119(__this, ___index, method) (( void (*) (List_1_t1922 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11225_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m20120(__this, method) (( void (*) (List_1_t1922 *, const MethodInfo*))List_1_Reverse_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m20121(__this, method) (( void (*) (List_1_t1922 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20122(__this, ___comparison, method) (( void (*) (List_1_t1922 *, Comparison_1_t2617 *, const MethodInfo*))List_1_Sort_m11231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m20123(__this, method) (( StrongNameU5BU5D_t2613* (*) (List_1_t1922 *, const MethodInfo*))List_1_ToArray_m11232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m20124(__this, method) (( void (*) (List_1_t1922 *, const MethodInfo*))List_1_TrimExcess_m11234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m20125(__this, method) (( int32_t (*) (List_1_t1922 *, const MethodInfo*))List_1_get_Capacity_m11236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20126(__this, ___value, method) (( void (*) (List_1_t1922 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11238_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m20127(__this, method) (( int32_t (*) (List_1_t1922 *, const MethodInfo*))List_1_get_Count_m11240_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m20128(__this, ___index, method) (( StrongName_t1718 * (*) (List_1_t1922 *, int32_t, const MethodInfo*))List_1_get_Item_m11242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m20129(__this, ___index, ___value, method) (( void (*) (List_1_t1922 *, int32_t, StrongName_t1718 *, const MethodInfo*))List_1_set_Item_m11244_gshared)(__this, ___index, ___value, method)
