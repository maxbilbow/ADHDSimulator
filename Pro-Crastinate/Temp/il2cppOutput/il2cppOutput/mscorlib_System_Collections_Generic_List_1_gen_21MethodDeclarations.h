#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t422;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t421;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t2791;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t2263;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t2792;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t2793;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t2265;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t2266;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t2268;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m2597(__this, method) (( void (*) (List_1_t422 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15955(__this, ___collection, method) (( void (*) (List_1_t422 *, Object_t*, const MethodInfo*))List_1__ctor_m11139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m15956(__this, ___capacity, method) (( void (*) (List_1_t422 *, int32_t, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m15957(__this, ___data, ___size, method) (( void (*) (List_1_t422 *, MatEntryU5BU5D_t2263*, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m15958(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11145_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15959(__this, method) (( Object_t* (*) (List_1_t422 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15960(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t422 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11149_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15961(__this, method) (( Object_t * (*) (List_1_t422 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15962(__this, ___item, method) (( int32_t (*) (List_1_t422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11153_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15963(__this, ___item, method) (( bool (*) (List_1_t422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15964(__this, ___item, method) (( int32_t (*) (List_1_t422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15965(__this, ___index, ___item, method) (( void (*) (List_1_t422 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15966(__this, ___item, method) (( void (*) (List_1_t422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15967(__this, method) (( bool (*) (List_1_t422 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15968(__this, method) (( bool (*) (List_1_t422 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15969(__this, method) (( Object_t * (*) (List_1_t422 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15970(__this, method) (( bool (*) (List_1_t422 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15971(__this, method) (( bool (*) (List_1_t422 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15972(__this, ___index, method) (( Object_t * (*) (List_1_t422 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15973(__this, ___index, ___value, method) (( void (*) (List_1_t422 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11175_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m15974(__this, ___item, method) (( void (*) (List_1_t422 *, MatEntry_t421 *, const MethodInfo*))List_1_Add_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15975(__this, ___newCount, method) (( void (*) (List_1_t422 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15976(__this, ___collection, method) (( void (*) (List_1_t422 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15977(__this, ___enumerable, method) (( void (*) (List_1_t422 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11183_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15978(__this, ___collection, method) (( void (*) (List_1_t422 *, Object_t*, const MethodInfo*))List_1_AddRange_m11185_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m15979(__this, method) (( ReadOnlyCollection_1_t2265 * (*) (List_1_t422 *, const MethodInfo*))List_1_AsReadOnly_m11187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m15980(__this, method) (( void (*) (List_1_t422 *, const MethodInfo*))List_1_Clear_m11189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m15981(__this, ___item, method) (( bool (*) (List_1_t422 *, MatEntry_t421 *, const MethodInfo*))List_1_Contains_m11191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15982(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t422 *, MatEntryU5BU5D_t2263*, int32_t, const MethodInfo*))List_1_CopyTo_m11193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m15983(__this, ___match, method) (( bool (*) (List_1_t422 *, Predicate_1_t2266 *, const MethodInfo*))List_1_Exists_m11194_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m15984(__this, ___match, method) (( MatEntry_t421 * (*) (List_1_t422 *, Predicate_1_t2266 *, const MethodInfo*))List_1_Find_m11196_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15985(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2266 *, const MethodInfo*))List_1_CheckMatch_m11198_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m15986(__this, ___match, method) (( List_1_t422 * (*) (List_1_t422 *, Predicate_1_t2266 *, const MethodInfo*))List_1_FindAll_m11200_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m15987(__this, ___match, method) (( List_1_t422 * (*) (List_1_t422 *, Predicate_1_t2266 *, const MethodInfo*))List_1_FindAllStackBits_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m15988(__this, ___match, method) (( List_1_t422 * (*) (List_1_t422 *, Predicate_1_t2266 *, const MethodInfo*))List_1_FindAllList_m11204_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15989(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t422 *, int32_t, int32_t, Predicate_1_t2266 *, const MethodInfo*))List_1_GetIndex_m11206_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m15990(__this, method) (( Enumerator_t2267  (*) (List_1_t422 *, const MethodInfo*))List_1_GetEnumerator_m11207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m15991(__this, ___item, method) (( int32_t (*) (List_1_t422 *, MatEntry_t421 *, const MethodInfo*))List_1_IndexOf_m11209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15992(__this, ___start, ___delta, method) (( void (*) (List_1_t422 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15993(__this, ___index, method) (( void (*) (List_1_t422 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m15994(__this, ___index, ___item, method) (( void (*) (List_1_t422 *, int32_t, MatEntry_t421 *, const MethodInfo*))List_1_Insert_m11215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15995(__this, ___collection, method) (( void (*) (List_1_t422 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m15996(__this, ___item, method) (( bool (*) (List_1_t422 *, MatEntry_t421 *, const MethodInfo*))List_1_Remove_m11219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15997(__this, ___match, method) (( int32_t (*) (List_1_t422 *, Predicate_1_t2266 *, const MethodInfo*))List_1_RemoveAll_m11221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15998(__this, ___index, method) (( void (*) (List_1_t422 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m15999(__this, method) (( void (*) (List_1_t422 *, const MethodInfo*))List_1_Reverse_m11225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m16000(__this, method) (( void (*) (List_1_t422 *, const MethodInfo*))List_1_Sort_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16001(__this, ___comparison, method) (( void (*) (List_1_t422 *, Comparison_1_t2268 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m16002(__this, method) (( MatEntryU5BU5D_t2263* (*) (List_1_t422 *, const MethodInfo*))List_1_ToArray_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m16003(__this, method) (( void (*) (List_1_t422 *, const MethodInfo*))List_1_TrimExcess_m11232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m16004(__this, method) (( int32_t (*) (List_1_t422 *, const MethodInfo*))List_1_get_Capacity_m11234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16005(__this, ___value, method) (( void (*) (List_1_t422 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11236_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m16006(__this, method) (( int32_t (*) (List_1_t422 *, const MethodInfo*))List_1_get_Count_m11238_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m16007(__this, ___index, method) (( MatEntry_t421 * (*) (List_1_t422 *, int32_t, const MethodInfo*))List_1_get_Item_m11240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m16008(__this, ___index, ___value, method) (( void (*) (List_1_t422 *, int32_t, MatEntry_t421 *, const MethodInfo*))List_1_set_Item_m11242_gshared)(__this, ___index, ___value, method)
