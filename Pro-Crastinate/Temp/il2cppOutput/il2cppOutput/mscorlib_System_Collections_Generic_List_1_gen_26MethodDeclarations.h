#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t585;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t584;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t2814;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2309;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2815;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t2816;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t2311;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t2312;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t2313;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m3998(__this, method) (( void (*) (List_1_t585 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16575(__this, ___collection, method) (( void (*) (List_1_t585 *, Object_t*, const MethodInfo*))List_1__ctor_m11139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m16576(__this, ___capacity, method) (( void (*) (List_1_t585 *, int32_t, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m16577(__this, ___data, ___size, method) (( void (*) (List_1_t585 *, GUILayoutEntryU5BU5D_t2309*, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m16578(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11145_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16579(__this, method) (( Object_t* (*) (List_1_t585 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16580(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t585 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11149_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16581(__this, method) (( Object_t * (*) (List_1_t585 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16582(__this, ___item, method) (( int32_t (*) (List_1_t585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11153_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16583(__this, ___item, method) (( bool (*) (List_1_t585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16584(__this, ___item, method) (( int32_t (*) (List_1_t585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16585(__this, ___index, ___item, method) (( void (*) (List_1_t585 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16586(__this, ___item, method) (( void (*) (List_1_t585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16587(__this, method) (( bool (*) (List_1_t585 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16588(__this, method) (( bool (*) (List_1_t585 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16589(__this, method) (( Object_t * (*) (List_1_t585 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16590(__this, method) (( bool (*) (List_1_t585 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16591(__this, method) (( bool (*) (List_1_t585 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16592(__this, ___index, method) (( Object_t * (*) (List_1_t585 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16593(__this, ___index, ___value, method) (( void (*) (List_1_t585 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11175_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m16594(__this, ___item, method) (( void (*) (List_1_t585 *, GUILayoutEntry_t584 *, const MethodInfo*))List_1_Add_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16595(__this, ___newCount, method) (( void (*) (List_1_t585 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16596(__this, ___collection, method) (( void (*) (List_1_t585 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16597(__this, ___enumerable, method) (( void (*) (List_1_t585 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11183_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16598(__this, ___collection, method) (( void (*) (List_1_t585 *, Object_t*, const MethodInfo*))List_1_AddRange_m11185_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m16599(__this, method) (( ReadOnlyCollection_1_t2311 * (*) (List_1_t585 *, const MethodInfo*))List_1_AsReadOnly_m11187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m16600(__this, method) (( void (*) (List_1_t585 *, const MethodInfo*))List_1_Clear_m11189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m16601(__this, ___item, method) (( bool (*) (List_1_t585 *, GUILayoutEntry_t584 *, const MethodInfo*))List_1_Contains_m11191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16602(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t585 *, GUILayoutEntryU5BU5D_t2309*, int32_t, const MethodInfo*))List_1_CopyTo_m11193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m16603(__this, ___match, method) (( bool (*) (List_1_t585 *, Predicate_1_t2312 *, const MethodInfo*))List_1_Exists_m11194_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m16604(__this, ___match, method) (( GUILayoutEntry_t584 * (*) (List_1_t585 *, Predicate_1_t2312 *, const MethodInfo*))List_1_Find_m11196_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16605(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2312 *, const MethodInfo*))List_1_CheckMatch_m11198_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m16606(__this, ___match, method) (( List_1_t585 * (*) (List_1_t585 *, Predicate_1_t2312 *, const MethodInfo*))List_1_FindAll_m11200_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m16607(__this, ___match, method) (( List_1_t585 * (*) (List_1_t585 *, Predicate_1_t2312 *, const MethodInfo*))List_1_FindAllStackBits_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m16608(__this, ___match, method) (( List_1_t585 * (*) (List_1_t585 *, Predicate_1_t2312 *, const MethodInfo*))List_1_FindAllList_m11204_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16609(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t585 *, int32_t, int32_t, Predicate_1_t2312 *, const MethodInfo*))List_1_GetIndex_m11206_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m3995(__this, method) (( Enumerator_t815  (*) (List_1_t585 *, const MethodInfo*))List_1_GetEnumerator_m11207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m16610(__this, ___item, method) (( int32_t (*) (List_1_t585 *, GUILayoutEntry_t584 *, const MethodInfo*))List_1_IndexOf_m11209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16611(__this, ___start, ___delta, method) (( void (*) (List_1_t585 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16612(__this, ___index, method) (( void (*) (List_1_t585 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m16613(__this, ___index, ___item, method) (( void (*) (List_1_t585 *, int32_t, GUILayoutEntry_t584 *, const MethodInfo*))List_1_Insert_m11215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16614(__this, ___collection, method) (( void (*) (List_1_t585 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m16615(__this, ___item, method) (( bool (*) (List_1_t585 *, GUILayoutEntry_t584 *, const MethodInfo*))List_1_Remove_m11219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16616(__this, ___match, method) (( int32_t (*) (List_1_t585 *, Predicate_1_t2312 *, const MethodInfo*))List_1_RemoveAll_m11221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16617(__this, ___index, method) (( void (*) (List_1_t585 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m16618(__this, method) (( void (*) (List_1_t585 *, const MethodInfo*))List_1_Reverse_m11225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m16619(__this, method) (( void (*) (List_1_t585 *, const MethodInfo*))List_1_Sort_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16620(__this, ___comparison, method) (( void (*) (List_1_t585 *, Comparison_1_t2313 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m16621(__this, method) (( GUILayoutEntryU5BU5D_t2309* (*) (List_1_t585 *, const MethodInfo*))List_1_ToArray_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m16622(__this, method) (( void (*) (List_1_t585 *, const MethodInfo*))List_1_TrimExcess_m11232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m16623(__this, method) (( int32_t (*) (List_1_t585 *, const MethodInfo*))List_1_get_Capacity_m11234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16624(__this, ___value, method) (( void (*) (List_1_t585 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11236_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m16625(__this, method) (( int32_t (*) (List_1_t585 *, const MethodInfo*))List_1_get_Count_m11238_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m16626(__this, ___index, method) (( GUILayoutEntry_t584 * (*) (List_1_t585 *, int32_t, const MethodInfo*))List_1_get_Item_m11240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m16627(__this, ___index, ___value, method) (( void (*) (List_1_t585 *, int32_t, GUILayoutEntry_t584 *, const MethodInfo*))List_1_set_Item_m11242_gshared)(__this, ___index, ___value, method)
