#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t240;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t234;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t2695;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t2084;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t2696;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t2697;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t2086;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2087;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t2089;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m1027(__this, method) (( void (*) (List_1_t240 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13275(__this, ___collection, method) (( void (*) (List_1_t240 *, Object_t*, const MethodInfo*))List_1__ctor_m11139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m13276(__this, ___capacity, method) (( void (*) (List_1_t240 *, int32_t, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(T[],System.Int32)
#define List_1__ctor_m13277(__this, ___data, ___size, method) (( void (*) (List_1_t240 *, EntryU5BU5D_t2084*, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m13278(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11145_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13279(__this, method) (( Object_t* (*) (List_1_t240 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13280(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t240 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11149_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13281(__this, method) (( Object_t * (*) (List_1_t240 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13282(__this, ___item, method) (( int32_t (*) (List_1_t240 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11153_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13283(__this, ___item, method) (( bool (*) (List_1_t240 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13284(__this, ___item, method) (( int32_t (*) (List_1_t240 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13285(__this, ___index, ___item, method) (( void (*) (List_1_t240 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13286(__this, ___item, method) (( void (*) (List_1_t240 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13287(__this, method) (( bool (*) (List_1_t240 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13288(__this, method) (( bool (*) (List_1_t240 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13289(__this, method) (( Object_t * (*) (List_1_t240 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13290(__this, method) (( bool (*) (List_1_t240 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13291(__this, method) (( bool (*) (List_1_t240 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13292(__this, ___index, method) (( Object_t * (*) (List_1_t240 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13293(__this, ___index, ___value, method) (( void (*) (List_1_t240 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11175_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m13294(__this, ___item, method) (( void (*) (List_1_t240 *, Entry_t234 *, const MethodInfo*))List_1_Add_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13295(__this, ___newCount, method) (( void (*) (List_1_t240 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13296(__this, ___collection, method) (( void (*) (List_1_t240 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13297(__this, ___enumerable, method) (( void (*) (List_1_t240 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11183_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13298(__this, ___collection, method) (( void (*) (List_1_t240 *, Object_t*, const MethodInfo*))List_1_AddRange_m11185_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m13299(__this, method) (( ReadOnlyCollection_1_t2086 * (*) (List_1_t240 *, const MethodInfo*))List_1_AsReadOnly_m11187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m13300(__this, method) (( void (*) (List_1_t240 *, const MethodInfo*))List_1_Clear_m11189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m13301(__this, ___item, method) (( bool (*) (List_1_t240 *, Entry_t234 *, const MethodInfo*))List_1_Contains_m11191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13302(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t240 *, EntryU5BU5D_t2084*, int32_t, const MethodInfo*))List_1_CopyTo_m11193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m13303(__this, ___match, method) (( bool (*) (List_1_t240 *, Predicate_1_t2087 *, const MethodInfo*))List_1_Exists_m11194_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m13304(__this, ___match, method) (( Entry_t234 * (*) (List_1_t240 *, Predicate_1_t2087 *, const MethodInfo*))List_1_Find_m11196_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13305(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2087 *, const MethodInfo*))List_1_CheckMatch_m11198_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m13306(__this, ___match, method) (( List_1_t240 * (*) (List_1_t240 *, Predicate_1_t2087 *, const MethodInfo*))List_1_FindAll_m11200_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m13307(__this, ___match, method) (( List_1_t240 * (*) (List_1_t240 *, Predicate_1_t2087 *, const MethodInfo*))List_1_FindAllStackBits_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m13308(__this, ___match, method) (( List_1_t240 * (*) (List_1_t240 *, Predicate_1_t2087 *, const MethodInfo*))List_1_FindAllList_m11204_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13309(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t240 *, int32_t, int32_t, Predicate_1_t2087 *, const MethodInfo*))List_1_GetIndex_m11206_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m13310(__this, method) (( Enumerator_t2088  (*) (List_1_t240 *, const MethodInfo*))List_1_GetEnumerator_m11207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m13311(__this, ___item, method) (( int32_t (*) (List_1_t240 *, Entry_t234 *, const MethodInfo*))List_1_IndexOf_m11209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13312(__this, ___start, ___delta, method) (( void (*) (List_1_t240 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13313(__this, ___index, method) (( void (*) (List_1_t240 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m13314(__this, ___index, ___item, method) (( void (*) (List_1_t240 *, int32_t, Entry_t234 *, const MethodInfo*))List_1_Insert_m11215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13315(__this, ___collection, method) (( void (*) (List_1_t240 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m13316(__this, ___item, method) (( bool (*) (List_1_t240 *, Entry_t234 *, const MethodInfo*))List_1_Remove_m11219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13317(__this, ___match, method) (( int32_t (*) (List_1_t240 *, Predicate_1_t2087 *, const MethodInfo*))List_1_RemoveAll_m11221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13318(__this, ___index, method) (( void (*) (List_1_t240 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m13319(__this, method) (( void (*) (List_1_t240 *, const MethodInfo*))List_1_Reverse_m11225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m13320(__this, method) (( void (*) (List_1_t240 *, const MethodInfo*))List_1_Sort_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13321(__this, ___comparison, method) (( void (*) (List_1_t240 *, Comparison_1_t2089 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m13322(__this, method) (( EntryU5BU5D_t2084* (*) (List_1_t240 *, const MethodInfo*))List_1_ToArray_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m13323(__this, method) (( void (*) (List_1_t240 *, const MethodInfo*))List_1_TrimExcess_m11232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m13324(__this, method) (( int32_t (*) (List_1_t240 *, const MethodInfo*))List_1_get_Capacity_m11234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13325(__this, ___value, method) (( void (*) (List_1_t240 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11236_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m13326(__this, method) (( int32_t (*) (List_1_t240 *, const MethodInfo*))List_1_get_Count_m11238_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m13327(__this, ___index, method) (( Entry_t234 * (*) (List_1_t240 *, int32_t, const MethodInfo*))List_1_get_Item_m11240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m13328(__this, ___index, ___value, method) (( void (*) (List_1_t240 *, int32_t, Entry_t234 *, const MethodInfo*))List_1_set_Item_m11242_gshared)(__this, ___index, ___value, method)
