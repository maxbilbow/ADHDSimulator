#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
struct List_1_t2172;
// System.Object
struct Object_t;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t485;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>
struct IEnumerable_1_t2743;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t2187;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t2739;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>
struct ICollection_1_t2744;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
struct ReadOnlyCollection_1_t2745;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t348;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t347;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m14756(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m14757(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1__ctor_m11138_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Int32)
#define List_1__ctor_m14758(__this, ___capacity, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1__ctor_m11140_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(T[],System.Int32)
#define List_1__ctor_m14759(__this, ___data, ___size, method) (( void (*) (List_1_t2172 *, ICanvasElementU5BU5D_t2187*, int32_t, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.cctor()
#define List_1__cctor_m14760(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14761(__this, method) (( Object_t* (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14762(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2172 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14763(__this, method) (( Object_t * (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14764(__this, ___item, method) (( int32_t (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14765(__this, ___item, method) (( bool (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11154_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14766(__this, ___item, method) (( int32_t (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14767(__this, ___index, ___item, method) (( void (*) (List_1_t2172 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14768(__this, ___item, method) (( void (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11160_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14769(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14770(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11164_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14771(__this, method) (( Object_t * (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14772(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14773(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11170_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14774(__this, ___index, method) (( Object_t * (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14775(__this, ___index, ___value, method) (( void (*) (List_1_t2172 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11174_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define List_1_Add_m14776(__this, ___item, method) (( void (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_Add_m11176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14777(__this, ___newCount, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11178_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14778(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11180_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14779(__this, ___enumerable, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11182_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14780(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_AddRange_m11184_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AsReadOnly()
#define List_1_AsReadOnly_m14781(__this, method) (( ReadOnlyCollection_1_t2745 * (*) (List_1_t2172 *, const MethodInfo*))List_1_AsReadOnly_m11186_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Clear()
#define List_1_Clear_m14782(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_Clear_m11188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define List_1_Contains_m14783(__this, ___item, method) (( bool (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_Contains_m11190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14784(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2172 *, ICanvasElementU5BU5D_t2187*, int32_t, const MethodInfo*))List_1_CopyTo_m11192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m14785(__this, ___match, method) (( bool (*) (List_1_t2172 *, Predicate_1_t348 *, const MethodInfo*))List_1_Exists_m11193_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Find(System.Predicate`1<T>)
#define List_1_Find_m14786(__this, ___match, method) (( Object_t * (*) (List_1_t2172 *, Predicate_1_t348 *, const MethodInfo*))List_1_Find_m11195_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14787(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t348 *, const MethodInfo*))List_1_CheckMatch_m11197_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m14788(__this, ___match, method) (( List_1_t2172 * (*) (List_1_t2172 *, Predicate_1_t348 *, const MethodInfo*))List_1_FindAll_m11199_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m14789(__this, ___match, method) (( List_1_t2172 * (*) (List_1_t2172 *, Predicate_1_t348 *, const MethodInfo*))List_1_FindAllStackBits_m11201_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m14790(__this, ___match, method) (( List_1_t2172 * (*) (List_1_t2172 *, Predicate_1_t348 *, const MethodInfo*))List_1_FindAllList_m11203_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14791(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2172 *, int32_t, int32_t, Predicate_1_t348 *, const MethodInfo*))List_1_GetIndex_m11205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define List_1_GetEnumerator_m14792(__this, method) (( Enumerator_t2746  (*) (List_1_t2172 *, const MethodInfo*))List_1_GetEnumerator_m11206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define List_1_IndexOf_m14793(__this, ___item, method) (( int32_t (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11208_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14794(__this, ___start, ___delta, method) (( void (*) (List_1_t2172 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11210_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14795(__this, ___index, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11212_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define List_1_Insert_m14796(__this, ___index, ___item, method) (( void (*) (List_1_t2172 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11214_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14797(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11216_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define List_1_Remove_m14798(__this, ___item, method) (( bool (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_Remove_m11218_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14799(__this, ___match, method) (( int32_t (*) (List_1_t2172 *, Predicate_1_t348 *, const MethodInfo*))List_1_RemoveAll_m11220_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14800(__this, ___index, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11222_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Reverse()
#define List_1_Reverse_m14801(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_Reverse_m11224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort()
#define List_1_Sort_m14802(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_Sort_m11226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14803(__this, ___comparison, method) (( void (*) (List_1_t2172 *, Comparison_1_t347 *, const MethodInfo*))List_1_Sort_m11228_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::ToArray()
#define List_1_ToArray_m14804(__this, method) (( ICanvasElementU5BU5D_t2187* (*) (List_1_t2172 *, const MethodInfo*))List_1_ToArray_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::TrimExcess()
#define List_1_TrimExcess_m14805(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_TrimExcess_m11231_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Capacity()
#define List_1_get_Capacity_m14806(__this, method) (( int32_t (*) (List_1_t2172 *, const MethodInfo*))List_1_get_Capacity_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14807(__this, ___value, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11235_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define List_1_get_Count_m14808(__this, method) (( int32_t (*) (List_1_t2172 *, const MethodInfo*))List_1_get_Count_m11237_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define List_1_get_Item_m14809(__this, ___index, method) (( Object_t * (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_get_Item_m11239_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define List_1_set_Item_m14810(__this, ___index, ___value, method) (( void (*) (List_1_t2172 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11241_gshared)(__this, ___index, ___value, method)
