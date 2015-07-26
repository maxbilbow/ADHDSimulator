﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t324;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t2722;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t112;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t2723;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t2724;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t2139;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t2140;
// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t2142;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m2272(__this, method) (( void (*) (List_1_t324 *, const MethodInfo*))List_1__ctor_m4063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m14149(__this, ___collection, method) (( void (*) (List_1_t324 *, Object_t*, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m14150(__this, ___capacity, method) (( void (*) (List_1_t324 *, int32_t, const MethodInfo*))List_1__ctor_m11144_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(T[],System.Int32)
#define List_1__ctor_m14151(__this, ___data, ___size, method) (( void (*) (List_1_t324 *, GameObjectU5BU5D_t112*, int32_t, const MethodInfo*))List_1__ctor_m11146_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m14152(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11148_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14153(__this, method) (( Object_t* (*) (List_1_t324 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14154(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t324 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11152_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14155(__this, method) (( Object_t * (*) (List_1_t324 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14156(__this, ___item, method) (( int32_t (*) (List_1_t324 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11156_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14157(__this, ___item, method) (( bool (*) (List_1_t324 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11158_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14158(__this, ___item, method) (( int32_t (*) (List_1_t324 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11160_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14159(__this, ___index, ___item, method) (( void (*) (List_1_t324 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11162_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14160(__this, ___item, method) (( void (*) (List_1_t324 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11164_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14161(__this, method) (( bool (*) (List_1_t324 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14162(__this, method) (( bool (*) (List_1_t324 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11168_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14163(__this, method) (( Object_t * (*) (List_1_t324 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14164(__this, method) (( bool (*) (List_1_t324 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11172_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14165(__this, method) (( bool (*) (List_1_t324 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11174_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14166(__this, ___index, method) (( Object_t * (*) (List_1_t324 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11176_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14167(__this, ___index, ___value, method) (( void (*) (List_1_t324 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11178_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m14168(__this, ___item, method) (( void (*) (List_1_t324 *, GameObject_t9 *, const MethodInfo*))List_1_Add_m11180_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14169(__this, ___newCount, method) (( void (*) (List_1_t324 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11182_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14170(__this, ___collection, method) (( void (*) (List_1_t324 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11184_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14171(__this, ___enumerable, method) (( void (*) (List_1_t324 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11186_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14172(__this, ___collection, method) (( void (*) (List_1_t324 *, Object_t*, const MethodInfo*))List_1_AddRange_m11188_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::AsReadOnly()
#define List_1_AsReadOnly_m14173(__this, method) (( ReadOnlyCollection_1_t2139 * (*) (List_1_t324 *, const MethodInfo*))List_1_AsReadOnly_m11190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m14174(__this, method) (( void (*) (List_1_t324 *, const MethodInfo*))List_1_Clear_m11192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m14175(__this, ___item, method) (( bool (*) (List_1_t324 *, GameObject_t9 *, const MethodInfo*))List_1_Contains_m11194_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14176(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t324 *, GameObjectU5BU5D_t112*, int32_t, const MethodInfo*))List_1_CopyTo_m11196_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m14177(__this, ___match, method) (( bool (*) (List_1_t324 *, Predicate_1_t2140 *, const MethodInfo*))List_1_Exists_m11197_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::Find(System.Predicate`1<T>)
#define List_1_Find_m14178(__this, ___match, method) (( GameObject_t9 * (*) (List_1_t324 *, Predicate_1_t2140 *, const MethodInfo*))List_1_Find_m11199_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14179(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2140 *, const MethodInfo*))List_1_CheckMatch_m11201_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m14180(__this, ___match, method) (( List_1_t324 * (*) (List_1_t324 *, Predicate_1_t2140 *, const MethodInfo*))List_1_FindAll_m11203_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m14181(__this, ___match, method) (( List_1_t324 * (*) (List_1_t324 *, Predicate_1_t2140 *, const MethodInfo*))List_1_FindAllStackBits_m11205_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m14182(__this, ___match, method) (( List_1_t324 * (*) (List_1_t324 *, Predicate_1_t2140 *, const MethodInfo*))List_1_FindAllList_m11207_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14183(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t324 *, int32_t, int32_t, Predicate_1_t2140 *, const MethodInfo*))List_1_GetIndex_m11209_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m14184(__this, method) (( Enumerator_t2141  (*) (List_1_t324 *, const MethodInfo*))List_1_GetEnumerator_m11210_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m14185(__this, ___item, method) (( int32_t (*) (List_1_t324 *, GameObject_t9 *, const MethodInfo*))List_1_IndexOf_m11212_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14186(__this, ___start, ___delta, method) (( void (*) (List_1_t324 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11214_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14187(__this, ___index, method) (( void (*) (List_1_t324 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11216_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m14188(__this, ___index, ___item, method) (( void (*) (List_1_t324 *, int32_t, GameObject_t9 *, const MethodInfo*))List_1_Insert_m11218_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14189(__this, ___collection, method) (( void (*) (List_1_t324 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11220_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m14190(__this, ___item, method) (( bool (*) (List_1_t324 *, GameObject_t9 *, const MethodInfo*))List_1_Remove_m11222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14191(__this, ___match, method) (( int32_t (*) (List_1_t324 *, Predicate_1_t2140 *, const MethodInfo*))List_1_RemoveAll_m11224_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14192(__this, ___index, method) (( void (*) (List_1_t324 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Reverse()
#define List_1_Reverse_m14193(__this, method) (( void (*) (List_1_t324 *, const MethodInfo*))List_1_Reverse_m11228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort()
#define List_1_Sort_m14194(__this, method) (( void (*) (List_1_t324 *, const MethodInfo*))List_1_Sort_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14195(__this, ___comparison, method) (( void (*) (List_1_t324 *, Comparison_1_t2142 *, const MethodInfo*))List_1_Sort_m11232_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m14196(__this, method) (( GameObjectU5BU5D_t112* (*) (List_1_t324 *, const MethodInfo*))List_1_ToArray_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::TrimExcess()
#define List_1_TrimExcess_m14197(__this, method) (( void (*) (List_1_t324 *, const MethodInfo*))List_1_TrimExcess_m11235_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m14198(__this, method) (( int32_t (*) (List_1_t324 *, const MethodInfo*))List_1_get_Capacity_m11237_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14199(__this, ___value, method) (( void (*) (List_1_t324 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11239_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m14200(__this, method) (( int32_t (*) (List_1_t324 *, const MethodInfo*))List_1_get_Count_m11241_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m14201(__this, ___index, method) (( GameObject_t9 * (*) (List_1_t324 *, int32_t, const MethodInfo*))List_1_get_Item_m11243_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m14202(__this, ___index, ___value, method) (( void (*) (List_1_t324 *, int32_t, GameObject_t9 *, const MethodInfo*))List_1_set_Item_m11245_gshared)(__this, ___index, ___value, method)