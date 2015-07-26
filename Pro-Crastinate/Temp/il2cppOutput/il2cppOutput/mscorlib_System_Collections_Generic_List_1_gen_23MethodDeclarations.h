#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t447;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t355;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>
struct IEnumerable_1_t2796;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t2277;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>
struct IEnumerator_1_t2797;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>
struct ICollection_1_t2798;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
struct ReadOnlyCollection_1_t2279;
// System.Predicate`1<UnityEngine.RectTransform>
struct Predicate_1_t2280;
// System.Comparison`1<UnityEngine.RectTransform>
struct Comparison_1_t2282;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m2650(__this, method) (( void (*) (List_1_t447 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16164(__this, ___collection, method) (( void (*) (List_1_t447 *, Object_t*, const MethodInfo*))List_1__ctor_m11138_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
#define List_1__ctor_m16165(__this, ___capacity, method) (( void (*) (List_1_t447 *, int32_t, const MethodInfo*))List_1__ctor_m11140_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(T[],System.Int32)
#define List_1__ctor_m16166(__this, ___data, ___size, method) (( void (*) (List_1_t447 *, RectTransformU5BU5D_t2277*, int32_t, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
#define List_1__cctor_m16167(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16168(__this, method) (( Object_t* (*) (List_1_t447 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16169(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t447 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16170(__this, method) (( Object_t * (*) (List_1_t447 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16171(__this, ___item, method) (( int32_t (*) (List_1_t447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16172(__this, ___item, method) (( bool (*) (List_1_t447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11154_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16173(__this, ___item, method) (( int32_t (*) (List_1_t447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16174(__this, ___index, ___item, method) (( void (*) (List_1_t447 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16175(__this, ___item, method) (( void (*) (List_1_t447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11160_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16176(__this, method) (( bool (*) (List_1_t447 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16177(__this, method) (( bool (*) (List_1_t447 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11164_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16178(__this, method) (( Object_t * (*) (List_1_t447 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16179(__this, method) (( bool (*) (List_1_t447 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16180(__this, method) (( bool (*) (List_1_t447 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11170_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16181(__this, ___index, method) (( Object_t * (*) (List_1_t447 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16182(__this, ___index, ___value, method) (( void (*) (List_1_t447 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11174_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
#define List_1_Add_m16183(__this, ___item, method) (( void (*) (List_1_t447 *, RectTransform_t355 *, const MethodInfo*))List_1_Add_m11176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16184(__this, ___newCount, method) (( void (*) (List_1_t447 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11178_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16185(__this, ___collection, method) (( void (*) (List_1_t447 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11180_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16186(__this, ___enumerable, method) (( void (*) (List_1_t447 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11182_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16187(__this, ___collection, method) (( void (*) (List_1_t447 *, Object_t*, const MethodInfo*))List_1_AddRange_m11184_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
#define List_1_AsReadOnly_m16188(__this, method) (( ReadOnlyCollection_1_t2279 * (*) (List_1_t447 *, const MethodInfo*))List_1_AsReadOnly_m11186_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
#define List_1_Clear_m16189(__this, method) (( void (*) (List_1_t447 *, const MethodInfo*))List_1_Clear_m11188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
#define List_1_Contains_m16190(__this, ___item, method) (( bool (*) (List_1_t447 *, RectTransform_t355 *, const MethodInfo*))List_1_Contains_m11190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16191(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t447 *, RectTransformU5BU5D_t2277*, int32_t, const MethodInfo*))List_1_CopyTo_m11192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m16192(__this, ___match, method) (( bool (*) (List_1_t447 *, Predicate_1_t2280 *, const MethodInfo*))List_1_Exists_m11193_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
#define List_1_Find_m16193(__this, ___match, method) (( RectTransform_t355 * (*) (List_1_t447 *, Predicate_1_t2280 *, const MethodInfo*))List_1_Find_m11195_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16194(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2280 *, const MethodInfo*))List_1_CheckMatch_m11197_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m16195(__this, ___match, method) (( List_1_t447 * (*) (List_1_t447 *, Predicate_1_t2280 *, const MethodInfo*))List_1_FindAll_m11199_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m16196(__this, ___match, method) (( List_1_t447 * (*) (List_1_t447 *, Predicate_1_t2280 *, const MethodInfo*))List_1_FindAllStackBits_m11201_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m16197(__this, ___match, method) (( List_1_t447 * (*) (List_1_t447 *, Predicate_1_t2280 *, const MethodInfo*))List_1_FindAllList_m11203_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16198(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t447 *, int32_t, int32_t, Predicate_1_t2280 *, const MethodInfo*))List_1_GetIndex_m11205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
#define List_1_GetEnumerator_m16199(__this, method) (( Enumerator_t2281  (*) (List_1_t447 *, const MethodInfo*))List_1_GetEnumerator_m11206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
#define List_1_IndexOf_m16200(__this, ___item, method) (( int32_t (*) (List_1_t447 *, RectTransform_t355 *, const MethodInfo*))List_1_IndexOf_m11208_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16201(__this, ___start, ___delta, method) (( void (*) (List_1_t447 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11210_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16202(__this, ___index, method) (( void (*) (List_1_t447 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11212_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
#define List_1_Insert_m16203(__this, ___index, ___item, method) (( void (*) (List_1_t447 *, int32_t, RectTransform_t355 *, const MethodInfo*))List_1_Insert_m11214_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16204(__this, ___collection, method) (( void (*) (List_1_t447 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11216_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
#define List_1_Remove_m16205(__this, ___item, method) (( bool (*) (List_1_t447 *, RectTransform_t355 *, const MethodInfo*))List_1_Remove_m11218_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16206(__this, ___match, method) (( int32_t (*) (List_1_t447 *, Predicate_1_t2280 *, const MethodInfo*))List_1_RemoveAll_m11220_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16207(__this, ___index, method) (( void (*) (List_1_t447 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11222_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
#define List_1_Reverse_m16208(__this, method) (( void (*) (List_1_t447 *, const MethodInfo*))List_1_Reverse_m11224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
#define List_1_Sort_m16209(__this, method) (( void (*) (List_1_t447 *, const MethodInfo*))List_1_Sort_m11226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16210(__this, ___comparison, method) (( void (*) (List_1_t447 *, Comparison_1_t2282 *, const MethodInfo*))List_1_Sort_m11228_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
#define List_1_ToArray_m16211(__this, method) (( RectTransformU5BU5D_t2277* (*) (List_1_t447 *, const MethodInfo*))List_1_ToArray_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
#define List_1_TrimExcess_m16212(__this, method) (( void (*) (List_1_t447 *, const MethodInfo*))List_1_TrimExcess_m11231_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
#define List_1_get_Capacity_m16213(__this, method) (( int32_t (*) (List_1_t447 *, const MethodInfo*))List_1_get_Capacity_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16214(__this, ___value, method) (( void (*) (List_1_t447 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11235_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
#define List_1_get_Count_m16215(__this, method) (( int32_t (*) (List_1_t447 *, const MethodInfo*))List_1_get_Count_m11237_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
#define List_1_get_Item_m16216(__this, ___index, method) (( RectTransform_t355 * (*) (List_1_t447 *, int32_t, const MethodInfo*))List_1_get_Item_m11239_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#define List_1_set_Item_m16217(__this, ___index, ___value, method) (( void (*) (List_1_t447 *, int32_t, RectTransform_t355 *, const MethodInfo*))List_1_set_Item_m11241_gshared)(__this, ___index, ___value, method)
