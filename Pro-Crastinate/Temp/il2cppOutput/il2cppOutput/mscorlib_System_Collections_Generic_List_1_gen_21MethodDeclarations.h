﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
#define List_1__ctor_m2595(__this, method) (( void (*) (List_1_t421 *, const MethodInfo*))List_1__ctor_m4085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16119(__this, ___collection, method) (( void (*) (List_1_t421 *, Object_t*, const MethodInfo*))List_1__ctor_m11221_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m16120(__this, ___capacity, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1__ctor_m11223_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(T[],System.Int32)
#define List_1__ctor_m16121(__this, ___data, ___size, method) (( void (*) (List_1_t421 *, CanvasGroupU5BU5D_t2306*, int32_t, const MethodInfo*))List_1__ctor_m11225_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m16122(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11227_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16123(__this, method) (( Object_t* (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16124(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t421 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11231_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16125(__this, method) (( Object_t * (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16126(__this, ___item, method) (( int32_t (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11235_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16127(__this, ___item, method) (( bool (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11237_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16128(__this, ___item, method) (( int32_t (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11239_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16129(__this, ___index, ___item, method) (( void (*) (List_1_t421 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16130(__this, ___item, method) (( void (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11243_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16131(__this, method) (( bool (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11245_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16132(__this, method) (( bool (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11247_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16133(__this, method) (( Object_t * (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16134(__this, method) (( bool (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11251_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16135(__this, method) (( bool (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11253_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16136(__this, ___index, method) (( Object_t * (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11255_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16137(__this, ___index, ___value, method) (( void (*) (List_1_t421 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11257_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m16138(__this, ___item, method) (( void (*) (List_1_t421 *, CanvasGroup_t517 *, const MethodInfo*))List_1_Add_m11259_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16139(__this, ___newCount, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11261_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16140(__this, ___collection, method) (( void (*) (List_1_t421 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11263_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16141(__this, ___enumerable, method) (( void (*) (List_1_t421 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11265_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16142(__this, ___collection, method) (( void (*) (List_1_t421 *, Object_t*, const MethodInfo*))List_1_AddRange_m11267_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m16143(__this, method) (( ReadOnlyCollection_1_t2307 * (*) (List_1_t421 *, const MethodInfo*))List_1_AsReadOnly_m11269_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m16144(__this, method) (( void (*) (List_1_t421 *, const MethodInfo*))List_1_Clear_m11271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m16145(__this, ___item, method) (( bool (*) (List_1_t421 *, CanvasGroup_t517 *, const MethodInfo*))List_1_Contains_m11273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16146(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t421 *, CanvasGroupU5BU5D_t2306*, int32_t, const MethodInfo*))List_1_CopyTo_m11275_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m16147(__this, ___match, method) (( bool (*) (List_1_t421 *, Predicate_1_t2309 *, const MethodInfo*))List_1_Exists_m11276_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m16148(__this, ___match, method) (( CanvasGroup_t517 * (*) (List_1_t421 *, Predicate_1_t2309 *, const MethodInfo*))List_1_Find_m11278_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16149(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2309 *, const MethodInfo*))List_1_CheckMatch_m11280_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m16150(__this, ___match, method) (( List_1_t421 * (*) (List_1_t421 *, Predicate_1_t2309 *, const MethodInfo*))List_1_FindAll_m11282_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m16151(__this, ___match, method) (( List_1_t421 * (*) (List_1_t421 *, Predicate_1_t2309 *, const MethodInfo*))List_1_FindAllStackBits_m11284_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m16152(__this, ___match, method) (( List_1_t421 * (*) (List_1_t421 *, Predicate_1_t2309 *, const MethodInfo*))List_1_FindAllList_m11286_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16153(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t421 *, int32_t, int32_t, Predicate_1_t2309 *, const MethodInfo*))List_1_GetIndex_m11288_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m16154(__this, method) (( Enumerator_t2310  (*) (List_1_t421 *, const MethodInfo*))List_1_GetEnumerator_m11289_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m16155(__this, ___item, method) (( int32_t (*) (List_1_t421 *, CanvasGroup_t517 *, const MethodInfo*))List_1_IndexOf_m11291_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16156(__this, ___start, ___delta, method) (( void (*) (List_1_t421 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11293_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16157(__this, ___index, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11295_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m16158(__this, ___index, ___item, method) (( void (*) (List_1_t421 *, int32_t, CanvasGroup_t517 *, const MethodInfo*))List_1_Insert_m11297_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16159(__this, ___collection, method) (( void (*) (List_1_t421 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11299_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m16160(__this, ___item, method) (( bool (*) (List_1_t421 *, CanvasGroup_t517 *, const MethodInfo*))List_1_Remove_m11301_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16161(__this, ___match, method) (( int32_t (*) (List_1_t421 *, Predicate_1_t2309 *, const MethodInfo*))List_1_RemoveAll_m11303_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16162(__this, ___index, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11305_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m16163(__this, method) (( void (*) (List_1_t421 *, const MethodInfo*))List_1_Reverse_m11307_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m16164(__this, method) (( void (*) (List_1_t421 *, const MethodInfo*))List_1_Sort_m11309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16165(__this, ___comparison, method) (( void (*) (List_1_t421 *, Comparison_1_t2311 *, const MethodInfo*))List_1_Sort_m11311_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m16166(__this, method) (( CanvasGroupU5BU5D_t2306* (*) (List_1_t421 *, const MethodInfo*))List_1_ToArray_m11312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m16167(__this, method) (( void (*) (List_1_t421 *, const MethodInfo*))List_1_TrimExcess_m11314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m16168(__this, method) (( int32_t (*) (List_1_t421 *, const MethodInfo*))List_1_get_Capacity_m11316_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16169(__this, ___value, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11318_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m16170(__this, method) (( int32_t (*) (List_1_t421 *, const MethodInfo*))List_1_get_Count_m11320_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m16171(__this, ___index, method) (( CanvasGroup_t517 * (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_get_Item_m11322_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m16172(__this, ___index, ___value, method) (( void (*) (List_1_t421 *, int32_t, CanvasGroup_t517 *, const MethodInfo*))List_1_set_Item_m11324_gshared)(__this, ___index, ___value, method)