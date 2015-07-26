#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<RMX.KeyValueObserver>
struct List_1_t30;
// System.Object
struct Object_t;
// RMX.KeyValueObserver
struct KeyValueObserver_t138;
// System.Collections.Generic.IEnumerable`1<RMX.KeyValueObserver>
struct IEnumerable_1_t2660;
// RMX.KeyValueObserver[]
struct KeyValueObserverU5BU5D_t2016;
// System.Collections.Generic.IEnumerator`1<RMX.KeyValueObserver>
struct IEnumerator_1_t2661;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<RMX.KeyValueObserver>
struct ICollection_1_t2662;
// System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.KeyValueObserver>
struct ReadOnlyCollection_1_t2018;
// System.Predicate`1<RMX.KeyValueObserver>
struct Predicate_1_t2019;
// System.Comparison`1<RMX.KeyValueObserver>
struct Comparison_1_t2020;
// System.Collections.Generic.List`1/Enumerator<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m491(__this, method) (( void (*) (List_1_t30 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m12282(__this, ___collection, method) (( void (*) (List_1_t30 *, Object_t*, const MethodInfo*))List_1__ctor_m11139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::.ctor(System.Int32)
#define List_1__ctor_m12283(__this, ___capacity, method) (( void (*) (List_1_t30 *, int32_t, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::.ctor(T[],System.Int32)
#define List_1__ctor_m12284(__this, ___data, ___size, method) (( void (*) (List_1_t30 *, KeyValueObserverU5BU5D_t2016*, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::.cctor()
#define List_1__cctor_m12285(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11145_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12286(__this, method) (( Object_t* (*) (List_1_t30 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12287(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t30 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11149_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12288(__this, method) (( Object_t * (*) (List_1_t30 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12289(__this, ___item, method) (( int32_t (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11153_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12290(__this, ___item, method) (( bool (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12291(__this, ___item, method) (( int32_t (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12292(__this, ___index, ___item, method) (( void (*) (List_1_t30 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12293(__this, ___item, method) (( void (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12294(__this, method) (( bool (*) (List_1_t30 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12295(__this, method) (( bool (*) (List_1_t30 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12296(__this, method) (( Object_t * (*) (List_1_t30 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12297(__this, method) (( bool (*) (List_1_t30 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12298(__this, method) (( bool (*) (List_1_t30 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12299(__this, ___index, method) (( Object_t * (*) (List_1_t30 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12300(__this, ___index, ___value, method) (( void (*) (List_1_t30 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11175_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Add(T)
#define List_1_Add_m12301(__this, ___item, method) (( void (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_Add_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12302(__this, ___newCount, method) (( void (*) (List_1_t30 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12303(__this, ___collection, method) (( void (*) (List_1_t30 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12304(__this, ___enumerable, method) (( void (*) (List_1_t30 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11183_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12305(__this, ___collection, method) (( void (*) (List_1_t30 *, Object_t*, const MethodInfo*))List_1_AddRange_m11185_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<RMX.KeyValueObserver>::AsReadOnly()
#define List_1_AsReadOnly_m12306(__this, method) (( ReadOnlyCollection_1_t2018 * (*) (List_1_t30 *, const MethodInfo*))List_1_AsReadOnly_m11187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Clear()
#define List_1_Clear_m12307(__this, method) (( void (*) (List_1_t30 *, const MethodInfo*))List_1_Clear_m11189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Contains(T)
#define List_1_Contains_m12308(__this, ___item, method) (( bool (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_Contains_m11191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12309(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t30 *, KeyValueObserverU5BU5D_t2016*, int32_t, const MethodInfo*))List_1_CopyTo_m11193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m12310(__this, ___match, method) (( bool (*) (List_1_t30 *, Predicate_1_t2019 *, const MethodInfo*))List_1_Exists_m11194_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<RMX.KeyValueObserver>::Find(System.Predicate`1<T>)
#define List_1_Find_m12311(__this, ___match, method) (( Object_t * (*) (List_1_t30 *, Predicate_1_t2019 *, const MethodInfo*))List_1_Find_m11196_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12312(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2019 *, const MethodInfo*))List_1_CheckMatch_m11198_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.KeyValueObserver>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m12313(__this, ___match, method) (( List_1_t30 * (*) (List_1_t30 *, Predicate_1_t2019 *, const MethodInfo*))List_1_FindAll_m11200_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.KeyValueObserver>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m12314(__this, ___match, method) (( List_1_t30 * (*) (List_1_t30 *, Predicate_1_t2019 *, const MethodInfo*))List_1_FindAllStackBits_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.KeyValueObserver>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m12315(__this, ___match, method) (( List_1_t30 * (*) (List_1_t30 *, Predicate_1_t2019 *, const MethodInfo*))List_1_FindAllList_m11204_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<RMX.KeyValueObserver>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12316(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t30 *, int32_t, int32_t, Predicate_1_t2019 *, const MethodInfo*))List_1_GetIndex_m11206_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RMX.KeyValueObserver>::GetEnumerator()
#define List_1_GetEnumerator_m494(__this, method) (( Enumerator_t168  (*) (List_1_t30 *, const MethodInfo*))List_1_GetEnumerator_m11207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.KeyValueObserver>::IndexOf(T)
#define List_1_IndexOf_m12317(__this, ___item, method) (( int32_t (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12318(__this, ___start, ___delta, method) (( void (*) (List_1_t30 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12319(__this, ___index, method) (( void (*) (List_1_t30 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Insert(System.Int32,T)
#define List_1_Insert_m12320(__this, ___index, ___item, method) (( void (*) (List_1_t30 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12321(__this, ___collection, method) (( void (*) (List_1_t30 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Remove(T)
#define List_1_Remove_m12322(__this, ___item, method) (( bool (*) (List_1_t30 *, Object_t *, const MethodInfo*))List_1_Remove_m11219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RMX.KeyValueObserver>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12323(__this, ___match, method) (( int32_t (*) (List_1_t30 *, Predicate_1_t2019 *, const MethodInfo*))List_1_RemoveAll_m11221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12324(__this, ___index, method) (( void (*) (List_1_t30 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Reverse()
#define List_1_Reverse_m12325(__this, method) (( void (*) (List_1_t30 *, const MethodInfo*))List_1_Reverse_m11225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Sort()
#define List_1_Sort_m12326(__this, method) (( void (*) (List_1_t30 *, const MethodInfo*))List_1_Sort_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12327(__this, ___comparison, method) (( void (*) (List_1_t30 *, Comparison_1_t2020 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<RMX.KeyValueObserver>::ToArray()
#define List_1_ToArray_m12328(__this, method) (( KeyValueObserverU5BU5D_t2016* (*) (List_1_t30 *, const MethodInfo*))List_1_ToArray_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::TrimExcess()
#define List_1_TrimExcess_m12329(__this, method) (( void (*) (List_1_t30 *, const MethodInfo*))List_1_TrimExcess_m11232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.KeyValueObserver>::get_Capacity()
#define List_1_get_Capacity_m12330(__this, method) (( int32_t (*) (List_1_t30 *, const MethodInfo*))List_1_get_Capacity_m11234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12331(__this, ___value, method) (( void (*) (List_1_t30 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11236_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<RMX.KeyValueObserver>::get_Count()
#define List_1_get_Count_m12332(__this, method) (( int32_t (*) (List_1_t30 *, const MethodInfo*))List_1_get_Count_m11238_gshared)(__this, method)
// T System.Collections.Generic.List`1<RMX.KeyValueObserver>::get_Item(System.Int32)
#define List_1_get_Item_m12333(__this, ___index, method) (( Object_t * (*) (List_1_t30 *, int32_t, const MethodInfo*))List_1_get_Item_m11240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::set_Item(System.Int32,T)
#define List_1_set_Item_m12334(__this, ___index, ___value, method) (( void (*) (List_1_t30 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11242_gshared)(__this, ___index, ___value, method)
