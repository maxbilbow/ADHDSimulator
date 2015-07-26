#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t495;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t161;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1962;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1936;
// System.Predicate`1<System.Object>
struct Predicate_1_t1941;
// System.Comparison`1<System.Object>
struct Comparison_1_t1947;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m4062_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1__ctor_m4062(__this, method) (( void (*) (List_1_t495 *, const MethodInfo*))List_1__ctor_m4062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11141_gshared (List_1_t495 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11141(__this, ___collection, method) (( void (*) (List_1_t495 *, Object_t*, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11143_gshared (List_1_t495 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11143(__this, ___capacity, method) (( void (*) (List_1_t495 *, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m11145_gshared (List_1_t495 * __this, ObjectU5BU5D_t146* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m11145(__this, ___data, ___size, method) (( void (*) (List_1_t495 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))List_1__ctor_m11145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11147_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11147(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11147_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149(__this, method) (( Object_t* (*) (List_1_t495 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11151_gshared (List_1_t495 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11151(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t495 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11153_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11153(__this, method) (( Object_t * (*) (List_1_t495 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11155_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11155(__this, ___item, method) (( int32_t (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11157_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11157(__this, ___item, method) (( bool (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11159_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11159(__this, ___item, method) (( int32_t (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11161_gshared (List_1_t495 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11161(__this, ___index, ___item, method) (( void (*) (List_1_t495 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11163_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11163(__this, ___item, method) (( void (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165(__this, method) (( bool (*) (List_1_t495 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11167_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11167(__this, method) (( bool (*) (List_1_t495 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11167_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11169_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11169(__this, method) (( Object_t * (*) (List_1_t495 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11171_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11171(__this, method) (( bool (*) (List_1_t495 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11173_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11173(__this, method) (( bool (*) (List_1_t495 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11173_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11175_gshared (List_1_t495 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11175(__this, ___index, method) (( Object_t * (*) (List_1_t495 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11177_gshared (List_1_t495 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11177(__this, ___index, ___value, method) (( void (*) (List_1_t495 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11177_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11179_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11179(__this, ___item, method) (( void (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_Add_m11179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11181_gshared (List_1_t495 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11181(__this, ___newCount, method) (( void (*) (List_1_t495 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11181_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11183_gshared (List_1_t495 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11183(__this, ___collection, method) (( void (*) (List_1_t495 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11185_gshared (List_1_t495 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11185(__this, ___enumerable, method) (( void (*) (List_1_t495 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11185_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11187_gshared (List_1_t495 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11187(__this, ___collection, method) (( void (*) (List_1_t495 *, Object_t*, const MethodInfo*))List_1_AddRange_m11187_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1936 * List_1_AsReadOnly_m11189_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11189(__this, method) (( ReadOnlyCollection_1_t1936 * (*) (List_1_t495 *, const MethodInfo*))List_1_AsReadOnly_m11189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11191_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_Clear_m11191(__this, method) (( void (*) (List_1_t495 *, const MethodInfo*))List_1_Clear_m11191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11193_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11193(__this, ___item, method) (( bool (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_Contains_m11193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11195_gshared (List_1_t495 * __this, ObjectU5BU5D_t146* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11195(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t495 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))List_1_CopyTo_m11195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m11196_gshared (List_1_t495 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_Exists_m11196(__this, ___match, method) (( bool (*) (List_1_t495 *, Predicate_1_t1941 *, const MethodInfo*))List_1_Exists_m11196_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11198_gshared (List_1_t495 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_Find_m11198(__this, ___match, method) (( Object_t * (*) (List_1_t495 *, Predicate_1_t1941 *, const MethodInfo*))List_1_Find_m11198_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11200_gshared (Object_t * __this /* static, unused */, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11200(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1941 *, const MethodInfo*))List_1_CheckMatch_m11200_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t495 * List_1_FindAll_m11202_gshared (List_1_t495 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_FindAll_m11202(__this, ___match, method) (( List_1_t495 * (*) (List_1_t495 *, Predicate_1_t1941 *, const MethodInfo*))List_1_FindAll_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t495 * List_1_FindAllStackBits_m11204_gshared (List_1_t495 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m11204(__this, ___match, method) (( List_1_t495 * (*) (List_1_t495 *, Predicate_1_t1941 *, const MethodInfo*))List_1_FindAllStackBits_m11204_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t495 * List_1_FindAllList_m11206_gshared (List_1_t495 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m11206(__this, ___match, method) (( List_1_t495 * (*) (List_1_t495 *, Predicate_1_t1941 *, const MethodInfo*))List_1_FindAllList_m11206_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11208_gshared (List_1_t495 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11208(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t495 *, int32_t, int32_t, Predicate_1_t1941 *, const MethodInfo*))List_1_GetIndex_m11208_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1934  List_1_GetEnumerator_m11209_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11209(__this, method) (( Enumerator_t1934  (*) (List_1_t495 *, const MethodInfo*))List_1_GetEnumerator_m11209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11211_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11211(__this, ___item, method) (( int32_t (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11213_gshared (List_1_t495 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11213(__this, ___start, ___delta, method) (( void (*) (List_1_t495 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11213_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11215_gshared (List_1_t495 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11215(__this, ___index, method) (( void (*) (List_1_t495 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11217_gshared (List_1_t495 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11217(__this, ___index, ___item, method) (( void (*) (List_1_t495 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11217_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11219_gshared (List_1_t495 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11219(__this, ___collection, method) (( void (*) (List_1_t495 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11219_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11221_gshared (List_1_t495 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11221(__this, ___item, method) (( bool (*) (List_1_t495 *, Object_t *, const MethodInfo*))List_1_Remove_m11221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11223_gshared (List_1_t495 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11223(__this, ___match, method) (( int32_t (*) (List_1_t495 *, Predicate_1_t1941 *, const MethodInfo*))List_1_RemoveAll_m11223_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11225_gshared (List_1_t495 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11225(__this, ___index, method) (( void (*) (List_1_t495 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11225_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11227_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_Reverse_m11227(__this, method) (( void (*) (List_1_t495 *, const MethodInfo*))List_1_Reverse_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11229_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_Sort_m11229(__this, method) (( void (*) (List_1_t495 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11231_gshared (List_1_t495 * __this, Comparison_1_t1947 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11231(__this, ___comparison, method) (( void (*) (List_1_t495 *, Comparison_1_t1947 *, const MethodInfo*))List_1_Sort_m11231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t146* List_1_ToArray_m11232_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_ToArray_m11232(__this, method) (( ObjectU5BU5D_t146* (*) (List_1_t495 *, const MethodInfo*))List_1_ToArray_m11232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11234_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11234(__this, method) (( void (*) (List_1_t495 *, const MethodInfo*))List_1_TrimExcess_m11234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11236_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11236(__this, method) (( int32_t (*) (List_1_t495 *, const MethodInfo*))List_1_get_Capacity_m11236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11238_gshared (List_1_t495 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11238(__this, ___value, method) (( void (*) (List_1_t495 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11238_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11240_gshared (List_1_t495 * __this, const MethodInfo* method);
#define List_1_get_Count_m11240(__this, method) (( int32_t (*) (List_1_t495 *, const MethodInfo*))List_1_get_Count_m11240_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11242_gshared (List_1_t495 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11242(__this, ___index, method) (( Object_t * (*) (List_1_t495 *, int32_t, const MethodInfo*))List_1_get_Item_m11242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11244_gshared (List_1_t495 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11244(__this, ___index, ___value, method) (( void (*) (List_1_t495 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11244_gshared)(__this, ___index, ___value, method)
