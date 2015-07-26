#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t191;
// System.Object
struct Object_t;
// UnityEngine.Material
struct Material_t190;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_t2677;
// UnityEngine.Material[]
struct MaterialU5BU5D_t192;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Material>
struct IEnumerator_1_t2678;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.Material>
struct ICollection_1_t2679;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>
struct ReadOnlyCollection_1_t2039;
// System.Predicate`1<UnityEngine.Material>
struct Predicate_1_t2040;
// System.Comparison`1<UnityEngine.Material>
struct Comparison_1_t2042;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m599(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m12591(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1__ctor_m11138_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Int32)
#define List_1__ctor_m12592(__this, ___capacity, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1__ctor_m11140_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(T[],System.Int32)
#define List_1__ctor_m12593(__this, ___data, ___size, method) (( void (*) (List_1_t191 *, MaterialU5BU5D_t192*, int32_t, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.cctor()
#define List_1__cctor_m12594(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12595(__this, method) (( Object_t* (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12596(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t191 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12597(__this, method) (( Object_t * (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12598(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12599(__this, ___item, method) (( bool (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11154_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12600(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12601(__this, ___index, ___item, method) (( void (*) (List_1_t191 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12602(__this, ___item, method) (( void (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11160_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12603(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12604(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11164_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12605(__this, method) (( Object_t * (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12606(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12607(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11170_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12608(__this, ___index, method) (( Object_t * (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12609(__this, ___index, ___value, method) (( void (*) (List_1_t191 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11174_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
#define List_1_Add_m12610(__this, ___item, method) (( void (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_Add_m11176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12611(__this, ___newCount, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11178_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12612(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11180_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12613(__this, ___enumerable, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11182_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12614(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_AddRange_m11184_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::AsReadOnly()
#define List_1_AsReadOnly_m12615(__this, method) (( ReadOnlyCollection_1_t2039 * (*) (List_1_t191 *, const MethodInfo*))List_1_AsReadOnly_m11186_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
#define List_1_Clear_m12616(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_Clear_m11188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(T)
#define List_1_Contains_m12617(__this, ___item, method) (( bool (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_Contains_m11190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12618(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t191 *, MaterialU5BU5D_t192*, int32_t, const MethodInfo*))List_1_CopyTo_m11192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m12619(__this, ___match, method) (( bool (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_Exists_m11193_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.Material>::Find(System.Predicate`1<T>)
#define List_1_Find_m12620(__this, ___match, method) (( Material_t190 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_Find_m11195_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12621(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2040 *, const MethodInfo*))List_1_CheckMatch_m11197_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m12622(__this, ___match, method) (( List_1_t191 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_FindAll_m11199_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m12623(__this, ___match, method) (( List_1_t191 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_FindAllStackBits_m11201_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m12624(__this, ___match, method) (( List_1_t191 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_FindAllList_m11203_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12625(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t191 *, int32_t, int32_t, Predicate_1_t2040 *, const MethodInfo*))List_1_GetIndex_m11205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Material>::GetEnumerator()
#define List_1_GetEnumerator_m12626(__this, method) (( Enumerator_t2041  (*) (List_1_t191 *, const MethodInfo*))List_1_GetEnumerator_m11206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(T)
#define List_1_IndexOf_m12627(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_IndexOf_m11208_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12628(__this, ___start, ___delta, method) (( void (*) (List_1_t191 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11210_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12629(__this, ___index, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11212_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Insert(System.Int32,T)
#define List_1_Insert_m12630(__this, ___index, ___item, method) (( void (*) (List_1_t191 *, int32_t, Material_t190 *, const MethodInfo*))List_1_Insert_m11214_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12631(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11216_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Remove(T)
#define List_1_Remove_m12632(__this, ___item, method) (( bool (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_Remove_m11218_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12633(__this, ___match, method) (( int32_t (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_RemoveAll_m11220_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12634(__this, ___index, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11222_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Reverse()
#define List_1_Reverse_m12635(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_Reverse_m11224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort()
#define List_1_Sort_m12636(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_Sort_m11226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12637(__this, ___comparison, method) (( void (*) (List_1_t191 *, Comparison_1_t2042 *, const MethodInfo*))List_1_Sort_m11228_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
#define List_1_ToArray_m12638(__this, method) (( MaterialU5BU5D_t192* (*) (List_1_t191 *, const MethodInfo*))List_1_ToArray_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::TrimExcess()
#define List_1_TrimExcess_m12639(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_TrimExcess_m11231_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Capacity()
#define List_1_get_Capacity_m12640(__this, method) (( int32_t (*) (List_1_t191 *, const MethodInfo*))List_1_get_Capacity_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12641(__this, ___value, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11235_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
#define List_1_get_Count_m12642(__this, method) (( int32_t (*) (List_1_t191 *, const MethodInfo*))List_1_get_Count_m11237_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
#define List_1_get_Item_m12643(__this, ___index, method) (( Material_t190 * (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_get_Item_m11239_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Item(System.Int32,T)
#define List_1_set_Item_m12644(__this, ___index, ___value, method) (( void (*) (List_1_t191 *, int32_t, Material_t190 *, const MethodInfo*))List_1_set_Item_m11241_gshared)(__this, ___index, ___value, method)
