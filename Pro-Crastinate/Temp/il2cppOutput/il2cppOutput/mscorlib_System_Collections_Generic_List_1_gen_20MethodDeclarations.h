#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t414;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t510;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t2788;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t2257;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t2789;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t2790;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t2259;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t2260;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t2262;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m2584(__this, method) (( void (*) (List_1_t414 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15857(__this, ___collection, method) (( void (*) (List_1_t414 *, Object_t*, const MethodInfo*))List_1__ctor_m11139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m15858(__this, ___capacity, method) (( void (*) (List_1_t414 *, int32_t, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(T[],System.Int32)
#define List_1__ctor_m15859(__this, ___data, ___size, method) (( void (*) (List_1_t414 *, CanvasGroupU5BU5D_t2257*, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m15860(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11145_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15861(__this, method) (( Object_t* (*) (List_1_t414 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15862(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t414 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11149_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15863(__this, method) (( Object_t * (*) (List_1_t414 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15864(__this, ___item, method) (( int32_t (*) (List_1_t414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11153_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15865(__this, ___item, method) (( bool (*) (List_1_t414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15866(__this, ___item, method) (( int32_t (*) (List_1_t414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15867(__this, ___index, ___item, method) (( void (*) (List_1_t414 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15868(__this, ___item, method) (( void (*) (List_1_t414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15869(__this, method) (( bool (*) (List_1_t414 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15870(__this, method) (( bool (*) (List_1_t414 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15871(__this, method) (( Object_t * (*) (List_1_t414 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15872(__this, method) (( bool (*) (List_1_t414 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15873(__this, method) (( bool (*) (List_1_t414 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15874(__this, ___index, method) (( Object_t * (*) (List_1_t414 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15875(__this, ___index, ___value, method) (( void (*) (List_1_t414 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11175_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m15876(__this, ___item, method) (( void (*) (List_1_t414 *, CanvasGroup_t510 *, const MethodInfo*))List_1_Add_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15877(__this, ___newCount, method) (( void (*) (List_1_t414 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15878(__this, ___collection, method) (( void (*) (List_1_t414 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15879(__this, ___enumerable, method) (( void (*) (List_1_t414 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11183_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15880(__this, ___collection, method) (( void (*) (List_1_t414 *, Object_t*, const MethodInfo*))List_1_AddRange_m11185_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m15881(__this, method) (( ReadOnlyCollection_1_t2259 * (*) (List_1_t414 *, const MethodInfo*))List_1_AsReadOnly_m11187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m15882(__this, method) (( void (*) (List_1_t414 *, const MethodInfo*))List_1_Clear_m11189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m15883(__this, ___item, method) (( bool (*) (List_1_t414 *, CanvasGroup_t510 *, const MethodInfo*))List_1_Contains_m11191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15884(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t414 *, CanvasGroupU5BU5D_t2257*, int32_t, const MethodInfo*))List_1_CopyTo_m11193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m15885(__this, ___match, method) (( bool (*) (List_1_t414 *, Predicate_1_t2260 *, const MethodInfo*))List_1_Exists_m11194_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m15886(__this, ___match, method) (( CanvasGroup_t510 * (*) (List_1_t414 *, Predicate_1_t2260 *, const MethodInfo*))List_1_Find_m11196_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15887(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2260 *, const MethodInfo*))List_1_CheckMatch_m11198_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m15888(__this, ___match, method) (( List_1_t414 * (*) (List_1_t414 *, Predicate_1_t2260 *, const MethodInfo*))List_1_FindAll_m11200_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m15889(__this, ___match, method) (( List_1_t414 * (*) (List_1_t414 *, Predicate_1_t2260 *, const MethodInfo*))List_1_FindAllStackBits_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m15890(__this, ___match, method) (( List_1_t414 * (*) (List_1_t414 *, Predicate_1_t2260 *, const MethodInfo*))List_1_FindAllList_m11204_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15891(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t414 *, int32_t, int32_t, Predicate_1_t2260 *, const MethodInfo*))List_1_GetIndex_m11206_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m15892(__this, method) (( Enumerator_t2261  (*) (List_1_t414 *, const MethodInfo*))List_1_GetEnumerator_m11207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m15893(__this, ___item, method) (( int32_t (*) (List_1_t414 *, CanvasGroup_t510 *, const MethodInfo*))List_1_IndexOf_m11209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15894(__this, ___start, ___delta, method) (( void (*) (List_1_t414 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15895(__this, ___index, method) (( void (*) (List_1_t414 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m15896(__this, ___index, ___item, method) (( void (*) (List_1_t414 *, int32_t, CanvasGroup_t510 *, const MethodInfo*))List_1_Insert_m11215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15897(__this, ___collection, method) (( void (*) (List_1_t414 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m15898(__this, ___item, method) (( bool (*) (List_1_t414 *, CanvasGroup_t510 *, const MethodInfo*))List_1_Remove_m11219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15899(__this, ___match, method) (( int32_t (*) (List_1_t414 *, Predicate_1_t2260 *, const MethodInfo*))List_1_RemoveAll_m11221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15900(__this, ___index, method) (( void (*) (List_1_t414 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m15901(__this, method) (( void (*) (List_1_t414 *, const MethodInfo*))List_1_Reverse_m11225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m15902(__this, method) (( void (*) (List_1_t414 *, const MethodInfo*))List_1_Sort_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15903(__this, ___comparison, method) (( void (*) (List_1_t414 *, Comparison_1_t2262 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m15904(__this, method) (( CanvasGroupU5BU5D_t2257* (*) (List_1_t414 *, const MethodInfo*))List_1_ToArray_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m15905(__this, method) (( void (*) (List_1_t414 *, const MethodInfo*))List_1_TrimExcess_m11232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m15906(__this, method) (( int32_t (*) (List_1_t414 *, const MethodInfo*))List_1_get_Capacity_m11234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15907(__this, ___value, method) (( void (*) (List_1_t414 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11236_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m15908(__this, method) (( int32_t (*) (List_1_t414 *, const MethodInfo*))List_1_get_Count_m11238_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m15909(__this, ___index, method) (( CanvasGroup_t510 * (*) (List_1_t414 *, int32_t, const MethodInfo*))List_1_get_Item_m11240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m15910(__this, ___index, ___value, method) (( void (*) (List_1_t414 *, int32_t, CanvasGroup_t510 *, const MethodInfo*))List_1_set_Item_m11242_gshared)(__this, ___index, ___value, method)
