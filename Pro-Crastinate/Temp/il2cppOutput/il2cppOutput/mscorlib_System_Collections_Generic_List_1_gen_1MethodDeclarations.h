#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t134;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t13;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<System.String>>
struct IEnumerable_1_t2638;
// System.Collections.Generic.List`1<System.String>[]
struct List_1U5BU5D_t1964;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.String>>
struct IEnumerator_1_t2639;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<System.String>>
struct ICollection_1_t2640;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>
struct ReadOnlyCollection_1_t1966;
// System.Predicate`1<System.Collections.Generic.List`1<System.String>>
struct Predicate_1_t265;
// System.Comparison`1<System.Collections.Generic.List`1<System.String>>
struct Comparison_1_t1967;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m462(__this, method) (( void (*) (List_1_t134 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m11587(__this, ___collection, method) (( void (*) (List_1_t134 *, Object_t*, const MethodInfo*))List_1__ctor_m11138_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Int32)
#define List_1__ctor_m11588(__this, ___capacity, method) (( void (*) (List_1_t134 *, int32_t, const MethodInfo*))List_1__ctor_m11140_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor(T[],System.Int32)
#define List_1__ctor_m11589(__this, ___data, ___size, method) (( void (*) (List_1_t134 *, List_1U5BU5D_t1964*, int32_t, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.cctor()
#define List_1__cctor_m11590(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11591(__this, method) (( Object_t* (*) (List_1_t134 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11592(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t134 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11593(__this, method) (( Object_t * (*) (List_1_t134 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11594(__this, ___item, method) (( int32_t (*) (List_1_t134 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11595(__this, ___item, method) (( bool (*) (List_1_t134 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11154_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11596(__this, ___item, method) (( int32_t (*) (List_1_t134 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11597(__this, ___index, ___item, method) (( void (*) (List_1_t134 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11598(__this, ___item, method) (( void (*) (List_1_t134 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11160_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11599(__this, method) (( bool (*) (List_1_t134 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11600(__this, method) (( bool (*) (List_1_t134 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11164_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11601(__this, method) (( Object_t * (*) (List_1_t134 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11602(__this, method) (( bool (*) (List_1_t134 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11603(__this, method) (( bool (*) (List_1_t134 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11170_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11604(__this, ___index, method) (( Object_t * (*) (List_1_t134 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11605(__this, ___index, ___value, method) (( void (*) (List_1_t134 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11174_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(T)
#define List_1_Add_m11606(__this, ___item, method) (( void (*) (List_1_t134 *, List_1_t13 *, const MethodInfo*))List_1_Add_m11176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11607(__this, ___newCount, method) (( void (*) (List_1_t134 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11178_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11608(__this, ___collection, method) (( void (*) (List_1_t134 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11180_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11609(__this, ___enumerable, method) (( void (*) (List_1_t134 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11182_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11610(__this, ___collection, method) (( void (*) (List_1_t134 *, Object_t*, const MethodInfo*))List_1_AddRange_m11184_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::AsReadOnly()
#define List_1_AsReadOnly_m11611(__this, method) (( ReadOnlyCollection_1_t1966 * (*) (List_1_t134 *, const MethodInfo*))List_1_AsReadOnly_m11186_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Clear()
#define List_1_Clear_m11612(__this, method) (( void (*) (List_1_t134 *, const MethodInfo*))List_1_Clear_m11188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Contains(T)
#define List_1_Contains_m11613(__this, ___item, method) (( bool (*) (List_1_t134 *, List_1_t13 *, const MethodInfo*))List_1_Contains_m11190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11614(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t134 *, List_1U5BU5D_t1964*, int32_t, const MethodInfo*))List_1_CopyTo_m11192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m11615(__this, ___match, method) (( bool (*) (List_1_t134 *, Predicate_1_t265 *, const MethodInfo*))List_1_Exists_m11193_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Find(System.Predicate`1<T>)
#define List_1_Find_m11616(__this, ___match, method) (( List_1_t13 * (*) (List_1_t134 *, Predicate_1_t265 *, const MethodInfo*))List_1_Find_m11195_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11617(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t265 *, const MethodInfo*))List_1_CheckMatch_m11197_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m926(__this, ___match, method) (( List_1_t134 * (*) (List_1_t134 *, Predicate_1_t265 *, const MethodInfo*))List_1_FindAll_m11199_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m11618(__this, ___match, method) (( List_1_t134 * (*) (List_1_t134 *, Predicate_1_t265 *, const MethodInfo*))List_1_FindAllStackBits_m11201_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m11619(__this, ___match, method) (( List_1_t134 * (*) (List_1_t134 *, Predicate_1_t265 *, const MethodInfo*))List_1_FindAllList_m11203_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11620(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t134 *, int32_t, int32_t, Predicate_1_t265 *, const MethodInfo*))List_1_GetIndex_m11205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::GetEnumerator()
#define List_1_GetEnumerator_m927(__this, method) (( Enumerator_t266  (*) (List_1_t134 *, const MethodInfo*))List_1_GetEnumerator_m11206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::IndexOf(T)
#define List_1_IndexOf_m11621(__this, ___item, method) (( int32_t (*) (List_1_t134 *, List_1_t13 *, const MethodInfo*))List_1_IndexOf_m11208_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11622(__this, ___start, ___delta, method) (( void (*) (List_1_t134 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11210_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11623(__this, ___index, method) (( void (*) (List_1_t134 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11212_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Insert(System.Int32,T)
#define List_1_Insert_m11624(__this, ___index, ___item, method) (( void (*) (List_1_t134 *, int32_t, List_1_t13 *, const MethodInfo*))List_1_Insert_m11214_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11625(__this, ___collection, method) (( void (*) (List_1_t134 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11216_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Remove(T)
#define List_1_Remove_m11626(__this, ___item, method) (( bool (*) (List_1_t134 *, List_1_t13 *, const MethodInfo*))List_1_Remove_m11218_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11627(__this, ___match, method) (( int32_t (*) (List_1_t134 *, Predicate_1_t265 *, const MethodInfo*))List_1_RemoveAll_m11220_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11628(__this, ___index, method) (( void (*) (List_1_t134 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11222_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Reverse()
#define List_1_Reverse_m11629(__this, method) (( void (*) (List_1_t134 *, const MethodInfo*))List_1_Reverse_m11224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Sort()
#define List_1_Sort_m11630(__this, method) (( void (*) (List_1_t134 *, const MethodInfo*))List_1_Sort_m11226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11631(__this, ___comparison, method) (( void (*) (List_1_t134 *, Comparison_1_t1967 *, const MethodInfo*))List_1_Sort_m11228_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::ToArray()
#define List_1_ToArray_m11632(__this, method) (( List_1U5BU5D_t1964* (*) (List_1_t134 *, const MethodInfo*))List_1_ToArray_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::TrimExcess()
#define List_1_TrimExcess_m11633(__this, method) (( void (*) (List_1_t134 *, const MethodInfo*))List_1_TrimExcess_m11231_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Capacity()
#define List_1_get_Capacity_m11634(__this, method) (( int32_t (*) (List_1_t134 *, const MethodInfo*))List_1_get_Capacity_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11635(__this, ___value, method) (( void (*) (List_1_t134 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11235_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Count()
#define List_1_get_Count_m11636(__this, method) (( int32_t (*) (List_1_t134 *, const MethodInfo*))List_1_get_Count_m11237_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Item(System.Int32)
#define List_1_get_Item_m11637(__this, ___index, method) (( List_1_t13 * (*) (List_1_t134 *, int32_t, const MethodInfo*))List_1_get_Item_m11239_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::set_Item(System.Int32,T)
#define List_1_set_Item_m11638(__this, ___index, ___value, method) (( void (*) (List_1_t134 *, int32_t, List_1_t13 *, const MethodInfo*))List_1_set_Item_m11241_gshared)(__this, ___index, ___value, method)
