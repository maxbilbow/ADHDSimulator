#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t483;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t2107;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerable_1_t2708;
// UnityEngine.EventSystems.IEventSystemHandler[]
struct IEventSystemHandlerU5BU5D_t2104;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerator_1_t2709;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ICollection_1_t2710;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ReadOnlyCollection_1_t2106;
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Predicate_1_t2108;
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Comparison_1_t2110;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m13616(__this, method) (( void (*) (List_1_t483 *, const MethodInfo*))List_1__ctor_m4063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13617(__this, ___collection, method) (( void (*) (List_1_t483 *, Object_t*, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Int32)
#define List_1__ctor_m13618(__this, ___capacity, method) (( void (*) (List_1_t483 *, int32_t, const MethodInfo*))List_1__ctor_m11144_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(T[],System.Int32)
#define List_1__ctor_m13619(__this, ___data, ___size, method) (( void (*) (List_1_t483 *, IEventSystemHandlerU5BU5D_t2104*, int32_t, const MethodInfo*))List_1__ctor_m11146_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
#define List_1__cctor_m13620(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11148_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13621(__this, method) (( Object_t* (*) (List_1_t483 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13622(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t483 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11152_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13623(__this, method) (( Object_t * (*) (List_1_t483 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13624(__this, ___item, method) (( int32_t (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11156_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13625(__this, ___item, method) (( bool (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11158_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13626(__this, ___item, method) (( int32_t (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11160_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13627(__this, ___index, ___item, method) (( void (*) (List_1_t483 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11162_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13628(__this, ___item, method) (( void (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11164_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13629(__this, method) (( bool (*) (List_1_t483 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13630(__this, method) (( bool (*) (List_1_t483 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11168_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13631(__this, method) (( Object_t * (*) (List_1_t483 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13632(__this, method) (( bool (*) (List_1_t483 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11172_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13633(__this, method) (( bool (*) (List_1_t483 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11174_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13634(__this, ___index, method) (( Object_t * (*) (List_1_t483 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11176_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13635(__this, ___index, ___value, method) (( void (*) (List_1_t483 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11178_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
#define List_1_Add_m13636(__this, ___item, method) (( void (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_Add_m11180_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13637(__this, ___newCount, method) (( void (*) (List_1_t483 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11182_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13638(__this, ___collection, method) (( void (*) (List_1_t483 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11184_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13639(__this, ___enumerable, method) (( void (*) (List_1_t483 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11186_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13640(__this, ___collection, method) (( void (*) (List_1_t483 *, Object_t*, const MethodInfo*))List_1_AddRange_m11188_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AsReadOnly()
#define List_1_AsReadOnly_m13641(__this, method) (( ReadOnlyCollection_1_t2106 * (*) (List_1_t483 *, const MethodInfo*))List_1_AsReadOnly_m11190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
#define List_1_Clear_m13642(__this, method) (( void (*) (List_1_t483 *, const MethodInfo*))List_1_Clear_m11192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
#define List_1_Contains_m13643(__this, ___item, method) (( bool (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_Contains_m11194_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13644(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t483 *, IEventSystemHandlerU5BU5D_t2104*, int32_t, const MethodInfo*))List_1_CopyTo_m11196_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m13645(__this, ___match, method) (( bool (*) (List_1_t483 *, Predicate_1_t2108 *, const MethodInfo*))List_1_Exists_m11197_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m13646(__this, ___match, method) (( Object_t * (*) (List_1_t483 *, Predicate_1_t2108 *, const MethodInfo*))List_1_Find_m11199_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13647(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2108 *, const MethodInfo*))List_1_CheckMatch_m11201_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m13648(__this, ___match, method) (( List_1_t483 * (*) (List_1_t483 *, Predicate_1_t2108 *, const MethodInfo*))List_1_FindAll_m11203_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m13649(__this, ___match, method) (( List_1_t483 * (*) (List_1_t483 *, Predicate_1_t2108 *, const MethodInfo*))List_1_FindAllStackBits_m11205_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m13650(__this, ___match, method) (( List_1_t483 * (*) (List_1_t483 *, Predicate_1_t2108 *, const MethodInfo*))List_1_FindAllList_m11207_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13651(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t483 *, int32_t, int32_t, Predicate_1_t2108 *, const MethodInfo*))List_1_GetIndex_m11209_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#define List_1_GetEnumerator_m13652(__this, method) (( Enumerator_t2109  (*) (List_1_t483 *, const MethodInfo*))List_1_GetEnumerator_m11210_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
#define List_1_IndexOf_m13653(__this, ___item, method) (( int32_t (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11212_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13654(__this, ___start, ___delta, method) (( void (*) (List_1_t483 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11214_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13655(__this, ___index, method) (( void (*) (List_1_t483 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11216_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
#define List_1_Insert_m13656(__this, ___index, ___item, method) (( void (*) (List_1_t483 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11218_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13657(__this, ___collection, method) (( void (*) (List_1_t483 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11220_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#define List_1_Remove_m13658(__this, ___item, method) (( bool (*) (List_1_t483 *, Object_t *, const MethodInfo*))List_1_Remove_m11222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13659(__this, ___match, method) (( int32_t (*) (List_1_t483 *, Predicate_1_t2108 *, const MethodInfo*))List_1_RemoveAll_m11224_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13660(__this, ___index, method) (( void (*) (List_1_t483 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Reverse()
#define List_1_Reverse_m13661(__this, method) (( void (*) (List_1_t483 *, const MethodInfo*))List_1_Reverse_m11228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort()
#define List_1_Sort_m13662(__this, method) (( void (*) (List_1_t483 *, const MethodInfo*))List_1_Sort_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13663(__this, ___comparison, method) (( void (*) (List_1_t483 *, Comparison_1_t2110 *, const MethodInfo*))List_1_Sort_m11232_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::ToArray()
#define List_1_ToArray_m13664(__this, method) (( IEventSystemHandlerU5BU5D_t2104* (*) (List_1_t483 *, const MethodInfo*))List_1_ToArray_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::TrimExcess()
#define List_1_TrimExcess_m13665(__this, method) (( void (*) (List_1_t483 *, const MethodInfo*))List_1_TrimExcess_m11235_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Capacity()
#define List_1_get_Capacity_m13666(__this, method) (( int32_t (*) (List_1_t483 *, const MethodInfo*))List_1_get_Capacity_m11237_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13667(__this, ___value, method) (( void (*) (List_1_t483 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11239_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
#define List_1_get_Count_m13668(__this, method) (( int32_t (*) (List_1_t483 *, const MethodInfo*))List_1_get_Count_m11241_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
#define List_1_get_Item_m13669(__this, ___index, method) (( Object_t * (*) (List_1_t483 *, int32_t, const MethodInfo*))List_1_get_Item_m11243_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m13670(__this, ___index, ___value, method) (( void (*) (List_1_t483 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11245_gshared)(__this, ___index, ___value, method)
