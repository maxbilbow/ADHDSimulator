#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t104;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t38;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t2680;
// UnityEngine.Transform[]
struct TransformU5BU5D_t101;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t2681;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t497;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Transform>
struct ReadOnlyCollection_1_t2045;
// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t2046;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t2048;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m12705(__this, method) (( void (*) (List_1_t104 *, const MethodInfo*))List_1__ctor_m4062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m672(__this, ___collection, method) (( void (*) (List_1_t104 *, Object_t*, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Int32)
#define List_1__ctor_m2267(__this, ___capacity, method) (( void (*) (List_1_t104 *, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(T[],System.Int32)
#define List_1__ctor_m12706(__this, ___data, ___size, method) (( void (*) (List_1_t104 *, TransformU5BU5D_t101*, int32_t, const MethodInfo*))List_1__ctor_m11145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.cctor()
#define List_1__cctor_m12707(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11147_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12708(__this, method) (( Object_t* (*) (List_1_t104 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12709(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t104 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12710(__this, method) (( Object_t * (*) (List_1_t104 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12711(__this, ___item, method) (( int32_t (*) (List_1_t104 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12712(__this, ___item, method) (( bool (*) (List_1_t104 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12713(__this, ___item, method) (( int32_t (*) (List_1_t104 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12714(__this, ___index, ___item, method) (( void (*) (List_1_t104 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12715(__this, ___item, method) (( void (*) (List_1_t104 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12716(__this, method) (( bool (*) (List_1_t104 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12717(__this, method) (( bool (*) (List_1_t104 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11167_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12718(__this, method) (( Object_t * (*) (List_1_t104 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12719(__this, method) (( bool (*) (List_1_t104 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12720(__this, method) (( bool (*) (List_1_t104 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11173_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12721(__this, ___index, method) (( Object_t * (*) (List_1_t104 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12722(__this, ___index, ___value, method) (( void (*) (List_1_t104 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11177_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
#define List_1_Add_m12723(__this, ___item, method) (( void (*) (List_1_t104 *, Transform_t38 *, const MethodInfo*))List_1_Add_m11179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12724(__this, ___newCount, method) (( void (*) (List_1_t104 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11181_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12725(__this, ___collection, method) (( void (*) (List_1_t104 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12726(__this, ___enumerable, method) (( void (*) (List_1_t104 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11185_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12727(__this, ___collection, method) (( void (*) (List_1_t104 *, Object_t*, const MethodInfo*))List_1_AddRange_m11187_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::AsReadOnly()
#define List_1_AsReadOnly_m12728(__this, method) (( ReadOnlyCollection_1_t2045 * (*) (List_1_t104 *, const MethodInfo*))List_1_AsReadOnly_m11189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
#define List_1_Clear_m12729(__this, method) (( void (*) (List_1_t104 *, const MethodInfo*))List_1_Clear_m11191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(T)
#define List_1_Contains_m12730(__this, ___item, method) (( bool (*) (List_1_t104 *, Transform_t38 *, const MethodInfo*))List_1_Contains_m11193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12731(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t104 *, TransformU5BU5D_t101*, int32_t, const MethodInfo*))List_1_CopyTo_m11195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m12732(__this, ___match, method) (( bool (*) (List_1_t104 *, Predicate_1_t2046 *, const MethodInfo*))List_1_Exists_m11196_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.Transform>::Find(System.Predicate`1<T>)
#define List_1_Find_m12733(__this, ___match, method) (( Transform_t38 * (*) (List_1_t104 *, Predicate_1_t2046 *, const MethodInfo*))List_1_Find_m11198_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12734(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2046 *, const MethodInfo*))List_1_CheckMatch_m11200_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m12735(__this, ___match, method) (( List_1_t104 * (*) (List_1_t104 *, Predicate_1_t2046 *, const MethodInfo*))List_1_FindAll_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m12736(__this, ___match, method) (( List_1_t104 * (*) (List_1_t104 *, Predicate_1_t2046 *, const MethodInfo*))List_1_FindAllStackBits_m11204_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m12737(__this, ___match, method) (( List_1_t104 * (*) (List_1_t104 *, Predicate_1_t2046 *, const MethodInfo*))List_1_FindAllList_m11206_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12738(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t104 *, int32_t, int32_t, Predicate_1_t2046 *, const MethodInfo*))List_1_GetIndex_m11208_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
#define List_1_GetEnumerator_m12739(__this, method) (( Enumerator_t2047  (*) (List_1_t104 *, const MethodInfo*))List_1_GetEnumerator_m11209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::IndexOf(T)
#define List_1_IndexOf_m12740(__this, ___item, method) (( int32_t (*) (List_1_t104 *, Transform_t38 *, const MethodInfo*))List_1_IndexOf_m11211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12741(__this, ___start, ___delta, method) (( void (*) (List_1_t104 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11213_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12742(__this, ___index, method) (( void (*) (List_1_t104 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Insert(System.Int32,T)
#define List_1_Insert_m12743(__this, ___index, ___item, method) (( void (*) (List_1_t104 *, int32_t, Transform_t38 *, const MethodInfo*))List_1_Insert_m11217_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12744(__this, ___collection, method) (( void (*) (List_1_t104 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11219_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Remove(T)
#define List_1_Remove_m12745(__this, ___item, method) (( bool (*) (List_1_t104 *, Transform_t38 *, const MethodInfo*))List_1_Remove_m11221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12746(__this, ___match, method) (( int32_t (*) (List_1_t104 *, Predicate_1_t2046 *, const MethodInfo*))List_1_RemoveAll_m11223_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12747(__this, ___index, method) (( void (*) (List_1_t104 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11225_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Reverse()
#define List_1_Reverse_m12748(__this, method) (( void (*) (List_1_t104 *, const MethodInfo*))List_1_Reverse_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Sort()
#define List_1_Sort_m12749(__this, method) (( void (*) (List_1_t104 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12750(__this, ___comparison, method) (( void (*) (List_1_t104 *, Comparison_1_t2048 *, const MethodInfo*))List_1_Sort_m11231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Transform>::ToArray()
#define List_1_ToArray_m12751(__this, method) (( TransformU5BU5D_t101* (*) (List_1_t104 *, const MethodInfo*))List_1_ToArray_m11232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::TrimExcess()
#define List_1_TrimExcess_m12752(__this, method) (( void (*) (List_1_t104 *, const MethodInfo*))List_1_TrimExcess_m11234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Capacity()
#define List_1_get_Capacity_m12753(__this, method) (( int32_t (*) (List_1_t104 *, const MethodInfo*))List_1_get_Capacity_m11236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12754(__this, ___value, method) (( void (*) (List_1_t104 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11238_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m12755(__this, method) (( int32_t (*) (List_1_t104 *, const MethodInfo*))List_1_get_Count_m11240_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m12756(__this, ___index, method) (( Transform_t38 * (*) (List_1_t104 *, int32_t, const MethodInfo*))List_1_get_Item_m11242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::set_Item(System.Int32,T)
#define List_1_set_Item_m12757(__this, ___index, ___value, method) (( void (*) (List_1_t104 *, int32_t, Transform_t38 *, const MethodInfo*))List_1_set_Item_m11244_gshared)(__this, ___index, ___value, method)
