﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
#define List_1__ctor_m17989(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1__ctor_m4085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17990(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1__ctor_m11221_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Int32)
#define List_1__ctor_m17991(__this, ___capacity, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1__ctor_m11223_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m17992(__this, ___data, ___size, method) (( void (*) (List_1_t689 *, MatchDirectConnectInfoU5BU5D_t2431*, int32_t, const MethodInfo*))List_1__ctor_m11225_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
#define List_1__cctor_m17993(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11227_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17994(__this, method) (( Object_t* (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17995(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t689 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11231_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17996(__this, method) (( Object_t * (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17997(__this, ___item, method) (( int32_t (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11235_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17998(__this, ___item, method) (( bool (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11237_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17999(__this, ___item, method) (( int32_t (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11239_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18000(__this, ___index, ___item, method) (( void (*) (List_1_t689 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18001(__this, ___item, method) (( void (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11243_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18002(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11245_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18003(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11247_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18004(__this, method) (( Object_t * (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18005(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11251_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18006(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11253_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18007(__this, ___index, method) (( Object_t * (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11255_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18008(__this, ___index, ___value, method) (( void (*) (List_1_t689 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11257_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
#define List_1_Add_m18009(__this, ___item, method) (( void (*) (List_1_t689 *, MatchDirectConnectInfo_t687 *, const MethodInfo*))List_1_Add_m11259_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18010(__this, ___newCount, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11261_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18011(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11263_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18012(__this, ___enumerable, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11265_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18013(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddRange_m11267_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AsReadOnly()
#define List_1_AsReadOnly_m18014(__this, method) (( ReadOnlyCollection_1_t2432 * (*) (List_1_t689 *, const MethodInfo*))List_1_AsReadOnly_m11269_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
#define List_1_Clear_m18015(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Clear_m11271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
#define List_1_Contains_m18016(__this, ___item, method) (( bool (*) (List_1_t689 *, MatchDirectConnectInfo_t687 *, const MethodInfo*))List_1_Contains_m11273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18017(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t689 *, MatchDirectConnectInfoU5BU5D_t2431*, int32_t, const MethodInfo*))List_1_CopyTo_m11275_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m18018(__this, ___match, method) (( bool (*) (List_1_t689 *, Predicate_1_t2434 *, const MethodInfo*))List_1_Exists_m11276_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m18019(__this, ___match, method) (( MatchDirectConnectInfo_t687 * (*) (List_1_t689 *, Predicate_1_t2434 *, const MethodInfo*))List_1_Find_m11278_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18020(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2434 *, const MethodInfo*))List_1_CheckMatch_m11280_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m18021(__this, ___match, method) (( List_1_t689 * (*) (List_1_t689 *, Predicate_1_t2434 *, const MethodInfo*))List_1_FindAll_m11282_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m18022(__this, ___match, method) (( List_1_t689 * (*) (List_1_t689 *, Predicate_1_t2434 *, const MethodInfo*))List_1_FindAllStackBits_m11284_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m18023(__this, ___match, method) (( List_1_t689 * (*) (List_1_t689 *, Predicate_1_t2434 *, const MethodInfo*))List_1_FindAllList_m11286_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18024(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t689 *, int32_t, int32_t, Predicate_1_t2434 *, const MethodInfo*))List_1_GetIndex_m11288_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
#define List_1_GetEnumerator_m18025(__this, method) (( Enumerator_t2435  (*) (List_1_t689 *, const MethodInfo*))List_1_GetEnumerator_m11289_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
#define List_1_IndexOf_m18026(__this, ___item, method) (( int32_t (*) (List_1_t689 *, MatchDirectConnectInfo_t687 *, const MethodInfo*))List_1_IndexOf_m11291_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18027(__this, ___start, ___delta, method) (( void (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11293_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18028(__this, ___index, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11295_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
#define List_1_Insert_m18029(__this, ___index, ___item, method) (( void (*) (List_1_t689 *, int32_t, MatchDirectConnectInfo_t687 *, const MethodInfo*))List_1_Insert_m11297_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18030(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11299_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
#define List_1_Remove_m18031(__this, ___item, method) (( bool (*) (List_1_t689 *, MatchDirectConnectInfo_t687 *, const MethodInfo*))List_1_Remove_m11301_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18032(__this, ___match, method) (( int32_t (*) (List_1_t689 *, Predicate_1_t2434 *, const MethodInfo*))List_1_RemoveAll_m11303_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18033(__this, ___index, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11305_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Reverse()
#define List_1_Reverse_m18034(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Reverse_m11307_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort()
#define List_1_Sort_m18035(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Sort_m11309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18036(__this, ___comparison, method) (( void (*) (List_1_t689 *, Comparison_1_t2436 *, const MethodInfo*))List_1_Sort_m11311_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ToArray()
#define List_1_ToArray_m18037(__this, method) (( MatchDirectConnectInfoU5BU5D_t2431* (*) (List_1_t689 *, const MethodInfo*))List_1_ToArray_m11312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::TrimExcess()
#define List_1_TrimExcess_m18038(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_TrimExcess_m11314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Capacity()
#define List_1_get_Capacity_m18039(__this, method) (( int32_t (*) (List_1_t689 *, const MethodInfo*))List_1_get_Capacity_m11316_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18040(__this, ___value, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11318_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
#define List_1_get_Count_m18041(__this, method) (( int32_t (*) (List_1_t689 *, const MethodInfo*))List_1_get_Count_m11320_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
#define List_1_get_Item_m18042(__this, ___index, method) (( MatchDirectConnectInfo_t687 * (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_get_Item_m11322_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m18043(__this, ___index, ___value, method) (( void (*) (List_1_t689 *, int32_t, MatchDirectConnectInfo_t687 *, const MethodInfo*))List_1_set_Item_m11324_gshared)(__this, ___index, ___value, method)