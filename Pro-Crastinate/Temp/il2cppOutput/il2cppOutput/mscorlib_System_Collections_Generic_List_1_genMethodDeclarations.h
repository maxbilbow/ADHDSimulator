#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t13;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t160;
// System.String[]
struct StringU5BU5D_t31;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2634;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t798;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t1949;
// System.Predicate`1<System.String>
struct Predicate_1_t158;
// System.Comparison`1<System.String>
struct Comparison_1_t1950;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m443(__this, method) (( void (*) (List_1_t13 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m11138(__this, ___collection, method) (( void (*) (List_1_t13 *, Object_t*, const MethodInfo*))List_1__ctor_m11139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m11140(__this, ___capacity, method) (( void (*) (List_1_t13 *, int32_t, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(T[],System.Int32)
#define List_1__ctor_m11142(__this, ___data, ___size, method) (( void (*) (List_1_t13 *, StringU5BU5D_t31*, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m11144(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11145_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11146(__this, method) (( Object_t* (*) (List_1_t13 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11148(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t13 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11149_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11150(__this, method) (( Object_t * (*) (List_1_t13 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11152(__this, ___item, method) (( int32_t (*) (List_1_t13 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11153_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11154(__this, ___item, method) (( bool (*) (List_1_t13 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11156(__this, ___item, method) (( int32_t (*) (List_1_t13 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11158(__this, ___index, ___item, method) (( void (*) (List_1_t13 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11160(__this, ___item, method) (( void (*) (List_1_t13 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11162(__this, method) (( bool (*) (List_1_t13 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11164(__this, method) (( bool (*) (List_1_t13 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11166(__this, method) (( Object_t * (*) (List_1_t13 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11168(__this, method) (( bool (*) (List_1_t13 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11170(__this, method) (( bool (*) (List_1_t13 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11172(__this, ___index, method) (( Object_t * (*) (List_1_t13 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11174(__this, ___index, ___value, method) (( void (*) (List_1_t13 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11175_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m11176(__this, ___item, method) (( void (*) (List_1_t13 *, String_t*, const MethodInfo*))List_1_Add_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11178(__this, ___newCount, method) (( void (*) (List_1_t13 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11180(__this, ___collection, method) (( void (*) (List_1_t13 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11182(__this, ___enumerable, method) (( void (*) (List_1_t13 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11183_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11184(__this, ___collection, method) (( void (*) (List_1_t13 *, Object_t*, const MethodInfo*))List_1_AddRange_m11185_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String>::AsReadOnly()
#define List_1_AsReadOnly_m11186(__this, method) (( ReadOnlyCollection_1_t1949 * (*) (List_1_t13 *, const MethodInfo*))List_1_AsReadOnly_m11187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m11188(__this, method) (( void (*) (List_1_t13 *, const MethodInfo*))List_1_Clear_m11189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m11190(__this, ___item, method) (( bool (*) (List_1_t13 *, String_t*, const MethodInfo*))List_1_Contains_m11191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11192(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t13 *, StringU5BU5D_t31*, int32_t, const MethodInfo*))List_1_CopyTo_m11193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m454(__this, ___match, method) (( bool (*) (List_1_t13 *, Predicate_1_t158 *, const MethodInfo*))List_1_Exists_m11194_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<System.String>::Find(System.Predicate`1<T>)
#define List_1_Find_m11195(__this, ___match, method) (( String_t* (*) (List_1_t13 *, Predicate_1_t158 *, const MethodInfo*))List_1_Find_m11196_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11197(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t158 *, const MethodInfo*))List_1_CheckMatch_m11198_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m11199(__this, ___match, method) (( List_1_t13 * (*) (List_1_t13 *, Predicate_1_t158 *, const MethodInfo*))List_1_FindAll_m11200_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m11201(__this, ___match, method) (( List_1_t13 * (*) (List_1_t13 *, Predicate_1_t158 *, const MethodInfo*))List_1_FindAllStackBits_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m11203(__this, ___match, method) (( List_1_t13 * (*) (List_1_t13 *, Predicate_1_t158 *, const MethodInfo*))List_1_FindAllList_m11204_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11205(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t13 *, int32_t, int32_t, Predicate_1_t158 *, const MethodInfo*))List_1_GetIndex_m11206_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m989(__this, method) (( Enumerator_t276  (*) (List_1_t13 *, const MethodInfo*))List_1_GetEnumerator_m11207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m11208(__this, ___item, method) (( int32_t (*) (List_1_t13 *, String_t*, const MethodInfo*))List_1_IndexOf_m11209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11210(__this, ___start, ___delta, method) (( void (*) (List_1_t13 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11212(__this, ___index, method) (( void (*) (List_1_t13 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m11214(__this, ___index, ___item, method) (( void (*) (List_1_t13 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m11215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11216(__this, ___collection, method) (( void (*) (List_1_t13 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m11218(__this, ___item, method) (( bool (*) (List_1_t13 *, String_t*, const MethodInfo*))List_1_Remove_m11219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11220(__this, ___match, method) (( int32_t (*) (List_1_t13 *, Predicate_1_t158 *, const MethodInfo*))List_1_RemoveAll_m11221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11222(__this, ___index, method) (( void (*) (List_1_t13 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
#define List_1_Reverse_m11224(__this, method) (( void (*) (List_1_t13 *, const MethodInfo*))List_1_Reverse_m11225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort()
#define List_1_Sort_m11226(__this, method) (( void (*) (List_1_t13 *, const MethodInfo*))List_1_Sort_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11228(__this, ___comparison, method) (( void (*) (List_1_t13 *, Comparison_1_t1950 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m11096(__this, method) (( StringU5BU5D_t31* (*) (List_1_t13 *, const MethodInfo*))List_1_ToArray_m11230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::TrimExcess()
#define List_1_TrimExcess_m11231(__this, method) (( void (*) (List_1_t13 *, const MethodInfo*))List_1_TrimExcess_m11232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m11233(__this, method) (( int32_t (*) (List_1_t13 *, const MethodInfo*))List_1_get_Capacity_m11234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11235(__this, ___value, method) (( void (*) (List_1_t13 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11236_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m11237(__this, method) (( int32_t (*) (List_1_t13 *, const MethodInfo*))List_1_get_Count_m11238_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m11239(__this, ___index, method) (( String_t* (*) (List_1_t13 *, int32_t, const MethodInfo*))List_1_get_Item_m11240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m11241(__this, ___index, ___value, method) (( void (*) (List_1_t13 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m11242_gshared)(__this, ___index, ___value, method)
