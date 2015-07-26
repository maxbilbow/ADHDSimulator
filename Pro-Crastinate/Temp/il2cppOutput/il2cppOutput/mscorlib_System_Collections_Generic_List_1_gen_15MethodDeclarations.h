#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t491;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t174;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Component>
struct IEnumerable_1_t2713;
// UnityEngine.Component[]
struct ComponentU5BU5D_t2116;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t2714;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.Component>
struct ICollection_1_t2715;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t2118;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t449;
// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t2120;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m13755(__this, method) (( void (*) (List_1_t491 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13756(__this, ___collection, method) (( void (*) (List_1_t491 *, Object_t*, const MethodInfo*))List_1__ctor_m11139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
#define List_1__ctor_m13757(__this, ___capacity, method) (( void (*) (List_1_t491 *, int32_t, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(T[],System.Int32)
#define List_1__ctor_m13758(__this, ___data, ___size, method) (( void (*) (List_1_t491 *, ComponentU5BU5D_t2116*, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
#define List_1__cctor_m13759(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11145_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13760(__this, method) (( Object_t* (*) (List_1_t491 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13761(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t491 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11149_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13762(__this, method) (( Object_t * (*) (List_1_t491 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13763(__this, ___item, method) (( int32_t (*) (List_1_t491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11153_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13764(__this, ___item, method) (( bool (*) (List_1_t491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13765(__this, ___item, method) (( int32_t (*) (List_1_t491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13766(__this, ___index, ___item, method) (( void (*) (List_1_t491 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13767(__this, ___item, method) (( void (*) (List_1_t491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13768(__this, method) (( bool (*) (List_1_t491 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13769(__this, method) (( bool (*) (List_1_t491 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13770(__this, method) (( Object_t * (*) (List_1_t491 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13771(__this, method) (( bool (*) (List_1_t491 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13772(__this, method) (( bool (*) (List_1_t491 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13773(__this, ___index, method) (( Object_t * (*) (List_1_t491 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13774(__this, ___index, ___value, method) (( void (*) (List_1_t491 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11175_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
#define List_1_Add_m13775(__this, ___item, method) (( void (*) (List_1_t491 *, Component_t174 *, const MethodInfo*))List_1_Add_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13776(__this, ___newCount, method) (( void (*) (List_1_t491 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13777(__this, ___collection, method) (( void (*) (List_1_t491 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13778(__this, ___enumerable, method) (( void (*) (List_1_t491 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11183_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13779(__this, ___collection, method) (( void (*) (List_1_t491 *, Object_t*, const MethodInfo*))List_1_AddRange_m11185_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
#define List_1_AsReadOnly_m13780(__this, method) (( ReadOnlyCollection_1_t2118 * (*) (List_1_t491 *, const MethodInfo*))List_1_AsReadOnly_m11187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
#define List_1_Clear_m13781(__this, method) (( void (*) (List_1_t491 *, const MethodInfo*))List_1_Clear_m11189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
#define List_1_Contains_m13782(__this, ___item, method) (( bool (*) (List_1_t491 *, Component_t174 *, const MethodInfo*))List_1_Contains_m11191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13783(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t491 *, ComponentU5BU5D_t2116*, int32_t, const MethodInfo*))List_1_CopyTo_m11193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m13784(__this, ___match, method) (( bool (*) (List_1_t491 *, Predicate_1_t449 *, const MethodInfo*))List_1_Exists_m11194_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
#define List_1_Find_m13785(__this, ___match, method) (( Component_t174 * (*) (List_1_t491 *, Predicate_1_t449 *, const MethodInfo*))List_1_Find_m11196_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13786(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t449 *, const MethodInfo*))List_1_CheckMatch_m11198_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m13787(__this, ___match, method) (( List_1_t491 * (*) (List_1_t491 *, Predicate_1_t449 *, const MethodInfo*))List_1_FindAll_m11200_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m13788(__this, ___match, method) (( List_1_t491 * (*) (List_1_t491 *, Predicate_1_t449 *, const MethodInfo*))List_1_FindAllStackBits_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m13789(__this, ___match, method) (( List_1_t491 * (*) (List_1_t491 *, Predicate_1_t449 *, const MethodInfo*))List_1_FindAllList_m11204_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13790(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t491 *, int32_t, int32_t, Predicate_1_t449 *, const MethodInfo*))List_1_GetIndex_m11206_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
#define List_1_GetEnumerator_m13791(__this, method) (( Enumerator_t2119  (*) (List_1_t491 *, const MethodInfo*))List_1_GetEnumerator_m11207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
#define List_1_IndexOf_m13792(__this, ___item, method) (( int32_t (*) (List_1_t491 *, Component_t174 *, const MethodInfo*))List_1_IndexOf_m11209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13793(__this, ___start, ___delta, method) (( void (*) (List_1_t491 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13794(__this, ___index, method) (( void (*) (List_1_t491 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
#define List_1_Insert_m13795(__this, ___index, ___item, method) (( void (*) (List_1_t491 *, int32_t, Component_t174 *, const MethodInfo*))List_1_Insert_m11215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13796(__this, ___collection, method) (( void (*) (List_1_t491 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
#define List_1_Remove_m13797(__this, ___item, method) (( bool (*) (List_1_t491 *, Component_t174 *, const MethodInfo*))List_1_Remove_m11219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m2659(__this, ___match, method) (( int32_t (*) (List_1_t491 *, Predicate_1_t449 *, const MethodInfo*))List_1_RemoveAll_m11221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13798(__this, ___index, method) (( void (*) (List_1_t491 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
#define List_1_Reverse_m13799(__this, method) (( void (*) (List_1_t491 *, const MethodInfo*))List_1_Reverse_m11225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
#define List_1_Sort_m13800(__this, method) (( void (*) (List_1_t491 *, const MethodInfo*))List_1_Sort_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13801(__this, ___comparison, method) (( void (*) (List_1_t491 *, Comparison_1_t2120 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
#define List_1_ToArray_m13802(__this, method) (( ComponentU5BU5D_t2116* (*) (List_1_t491 *, const MethodInfo*))List_1_ToArray_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
#define List_1_TrimExcess_m13803(__this, method) (( void (*) (List_1_t491 *, const MethodInfo*))List_1_TrimExcess_m11232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
#define List_1_get_Capacity_m13804(__this, method) (( int32_t (*) (List_1_t491 *, const MethodInfo*))List_1_get_Capacity_m11234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13805(__this, ___value, method) (( void (*) (List_1_t491 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11236_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
#define List_1_get_Count_m13806(__this, method) (( int32_t (*) (List_1_t491 *, const MethodInfo*))List_1_get_Count_m11238_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
#define List_1_get_Item_m13807(__this, ___index, method) (( Component_t174 * (*) (List_1_t491 *, int32_t, const MethodInfo*))List_1_get_Item_m11240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define List_1_set_Item_m13808(__this, ___index, ___value, method) (( void (*) (List_1_t491 *, int32_t, Component_t174 *, const MethodInfo*))List_1_set_Item_m11242_gshared)(__this, ___index, ___value, method)
