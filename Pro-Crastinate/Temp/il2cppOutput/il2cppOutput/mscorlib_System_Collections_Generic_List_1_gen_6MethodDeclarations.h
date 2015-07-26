#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
struct List_1_t206;
// System.Object
struct Object_t;
// Procrastinate.ClockBehaviour
struct ClockBehaviour_t204;
// System.Collections.Generic.IEnumerable`1<Procrastinate.ClockBehaviour>
struct IEnumerable_1_t2682;
// Procrastinate.ClockBehaviour[]
struct ClockBehaviourU5BU5D_t2056;
// System.Collections.Generic.IEnumerator`1<Procrastinate.ClockBehaviour>
struct IEnumerator_1_t2683;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<Procrastinate.ClockBehaviour>
struct ICollection_1_t2684;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Procrastinate.ClockBehaviour>
struct ReadOnlyCollection_1_t2058;
// System.Predicate`1<Procrastinate.ClockBehaviour>
struct Predicate_1_t262;
// System.Comparison`1<Procrastinate.ClockBehaviour>
struct Comparison_1_t2059;
// System.Collections.Generic.List`1/Enumerator<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m922(__this, method) (( void (*) (List_1_t206 *, const MethodInfo*))List_1__ctor_m4063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m12852(__this, ___collection, method) (( void (*) (List_1_t206 *, Object_t*, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::.ctor(System.Int32)
#define List_1__ctor_m12853(__this, ___capacity, method) (( void (*) (List_1_t206 *, int32_t, const MethodInfo*))List_1__ctor_m11144_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::.ctor(T[],System.Int32)
#define List_1__ctor_m12854(__this, ___data, ___size, method) (( void (*) (List_1_t206 *, ClockBehaviourU5BU5D_t2056*, int32_t, const MethodInfo*))List_1__ctor_m11146_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::.cctor()
#define List_1__cctor_m12855(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11148_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12856(__this, method) (( Object_t* (*) (List_1_t206 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12857(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t206 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11152_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12858(__this, method) (( Object_t * (*) (List_1_t206 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12859(__this, ___item, method) (( int32_t (*) (List_1_t206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11156_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12860(__this, ___item, method) (( bool (*) (List_1_t206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11158_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12861(__this, ___item, method) (( int32_t (*) (List_1_t206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11160_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12862(__this, ___index, ___item, method) (( void (*) (List_1_t206 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11162_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12863(__this, ___item, method) (( void (*) (List_1_t206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11164_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12864(__this, method) (( bool (*) (List_1_t206 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12865(__this, method) (( bool (*) (List_1_t206 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11168_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12866(__this, method) (( Object_t * (*) (List_1_t206 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12867(__this, method) (( bool (*) (List_1_t206 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11172_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12868(__this, method) (( bool (*) (List_1_t206 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11174_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12869(__this, ___index, method) (( Object_t * (*) (List_1_t206 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11176_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12870(__this, ___index, ___value, method) (( void (*) (List_1_t206 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11178_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Add(T)
#define List_1_Add_m12871(__this, ___item, method) (( void (*) (List_1_t206 *, ClockBehaviour_t204 *, const MethodInfo*))List_1_Add_m11180_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12872(__this, ___newCount, method) (( void (*) (List_1_t206 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11182_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12873(__this, ___collection, method) (( void (*) (List_1_t206 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11184_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12874(__this, ___enumerable, method) (( void (*) (List_1_t206 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11186_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12875(__this, ___collection, method) (( void (*) (List_1_t206 *, Object_t*, const MethodInfo*))List_1_AddRange_m11188_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::AsReadOnly()
#define List_1_AsReadOnly_m12876(__this, method) (( ReadOnlyCollection_1_t2058 * (*) (List_1_t206 *, const MethodInfo*))List_1_AsReadOnly_m11190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Clear()
#define List_1_Clear_m12877(__this, method) (( void (*) (List_1_t206 *, const MethodInfo*))List_1_Clear_m11192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Contains(T)
#define List_1_Contains_m12878(__this, ___item, method) (( bool (*) (List_1_t206 *, ClockBehaviour_t204 *, const MethodInfo*))List_1_Contains_m11194_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12879(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t206 *, ClockBehaviourU5BU5D_t2056*, int32_t, const MethodInfo*))List_1_CopyTo_m11196_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m12880(__this, ___match, method) (( bool (*) (List_1_t206 *, Predicate_1_t262 *, const MethodInfo*))List_1_Exists_m11197_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Find(System.Predicate`1<T>)
#define List_1_Find_m12881(__this, ___match, method) (( ClockBehaviour_t204 * (*) (List_1_t206 *, Predicate_1_t262 *, const MethodInfo*))List_1_Find_m11199_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12882(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t262 *, const MethodInfo*))List_1_CheckMatch_m11201_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m909(__this, ___match, method) (( List_1_t206 * (*) (List_1_t206 *, Predicate_1_t262 *, const MethodInfo*))List_1_FindAll_m11203_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m12883(__this, ___match, method) (( List_1_t206 * (*) (List_1_t206 *, Predicate_1_t262 *, const MethodInfo*))List_1_FindAllStackBits_m11205_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m12884(__this, ___match, method) (( List_1_t206 * (*) (List_1_t206 *, Predicate_1_t262 *, const MethodInfo*))List_1_FindAllList_m11207_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12885(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t206 *, int32_t, int32_t, Predicate_1_t262 *, const MethodInfo*))List_1_GetIndex_m11209_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m894(__this, method) (( Enumerator_t261  (*) (List_1_t206 *, const MethodInfo*))List_1_GetEnumerator_m11210_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::IndexOf(T)
#define List_1_IndexOf_m12886(__this, ___item, method) (( int32_t (*) (List_1_t206 *, ClockBehaviour_t204 *, const MethodInfo*))List_1_IndexOf_m11212_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12887(__this, ___start, ___delta, method) (( void (*) (List_1_t206 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11214_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12888(__this, ___index, method) (( void (*) (List_1_t206 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11216_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Insert(System.Int32,T)
#define List_1_Insert_m12889(__this, ___index, ___item, method) (( void (*) (List_1_t206 *, int32_t, ClockBehaviour_t204 *, const MethodInfo*))List_1_Insert_m11218_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12890(__this, ___collection, method) (( void (*) (List_1_t206 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11220_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Remove(T)
#define List_1_Remove_m12891(__this, ___item, method) (( bool (*) (List_1_t206 *, ClockBehaviour_t204 *, const MethodInfo*))List_1_Remove_m11222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12892(__this, ___match, method) (( int32_t (*) (List_1_t206 *, Predicate_1_t262 *, const MethodInfo*))List_1_RemoveAll_m11224_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12893(__this, ___index, method) (( void (*) (List_1_t206 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Reverse()
#define List_1_Reverse_m12894(__this, method) (( void (*) (List_1_t206 *, const MethodInfo*))List_1_Reverse_m11228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Sort()
#define List_1_Sort_m12895(__this, method) (( void (*) (List_1_t206 *, const MethodInfo*))List_1_Sort_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12896(__this, ___comparison, method) (( void (*) (List_1_t206 *, Comparison_1_t2059 *, const MethodInfo*))List_1_Sort_m11232_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::ToArray()
#define List_1_ToArray_m12897(__this, method) (( ClockBehaviourU5BU5D_t2056* (*) (List_1_t206 *, const MethodInfo*))List_1_ToArray_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::TrimExcess()
#define List_1_TrimExcess_m12898(__this, method) (( void (*) (List_1_t206 *, const MethodInfo*))List_1_TrimExcess_m11235_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Capacity()
#define List_1_get_Capacity_m12899(__this, method) (( int32_t (*) (List_1_t206 *, const MethodInfo*))List_1_get_Capacity_m11237_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12900(__this, ___value, method) (( void (*) (List_1_t206 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11239_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Count()
#define List_1_get_Count_m12901(__this, method) (( int32_t (*) (List_1_t206 *, const MethodInfo*))List_1_get_Count_m11241_gshared)(__this, method)
// T System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m12902(__this, ___index, method) (( ClockBehaviour_t204 * (*) (List_1_t206 *, int32_t, const MethodInfo*))List_1_get_Item_m11243_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::set_Item(System.Int32,T)
#define List_1_set_Item_m12903(__this, ___index, ___value, method) (( void (*) (List_1_t206 *, int32_t, ClockBehaviour_t204 *, const MethodInfo*))List_1_set_Item_m11245_gshared)(__this, ___index, ___value, method)
