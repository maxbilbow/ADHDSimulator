#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t502;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t169;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2006;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1965;
// System.Predicate`1<System.Object>
struct Predicate_1_t1971;
// System.Comparison`1<System.Object>
struct Comparison_1_t1977;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m4085_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1__ctor_m4085(__this, method) (( void (*) (List_1_t502 *, const MethodInfo*))List_1__ctor_m4085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11221_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11221(__this, ___collection, method) (( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))List_1__ctor_m11221_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11223_gshared (List_1_t502 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11223(__this, ___capacity, method) (( void (*) (List_1_t502 *, int32_t, const MethodInfo*))List_1__ctor_m11223_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m11225_gshared (List_1_t502 * __this, ObjectU5BU5D_t148* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m11225(__this, ___data, ___size, method) (( void (*) (List_1_t502 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))List_1__ctor_m11225_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11227_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11227(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11227_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11229_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11229(__this, method) (( Object_t* (*) (List_1_t502 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11231_gshared (List_1_t502 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11231(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t502 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11231_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11233_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11233(__this, method) (( Object_t * (*) (List_1_t502 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11235_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11235(__this, ___item, method) (( int32_t (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11235_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11237_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11237(__this, ___item, method) (( bool (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11237_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11239_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11239(__this, ___item, method) (( int32_t (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11239_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11241_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11241(__this, ___index, ___item, method) (( void (*) (List_1_t502 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11243_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11243(__this, ___item, method) (( void (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11243_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11245_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11245(__this, method) (( bool (*) (List_1_t502 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11245_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11247_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11247(__this, method) (( bool (*) (List_1_t502 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11247_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11249_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11249(__this, method) (( Object_t * (*) (List_1_t502 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11251_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11251(__this, method) (( bool (*) (List_1_t502 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11251_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11253_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11253(__this, method) (( bool (*) (List_1_t502 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11253_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11255_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11255(__this, ___index, method) (( Object_t * (*) (List_1_t502 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11255_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11257_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11257(__this, ___index, ___value, method) (( void (*) (List_1_t502 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11257_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11259_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11259(__this, ___item, method) (( void (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_Add_m11259_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11261_gshared (List_1_t502 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11261(__this, ___newCount, method) (( void (*) (List_1_t502 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11261_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11263_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11263(__this, ___collection, method) (( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11263_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11265_gshared (List_1_t502 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11265(__this, ___enumerable, method) (( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11265_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11267_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11267(__this, ___collection, method) (( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))List_1_AddRange_m11267_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1965 * List_1_AsReadOnly_m11269_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11269(__this, method) (( ReadOnlyCollection_1_t1965 * (*) (List_1_t502 *, const MethodInfo*))List_1_AsReadOnly_m11269_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11271_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_Clear_m11271(__this, method) (( void (*) (List_1_t502 *, const MethodInfo*))List_1_Clear_m11271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11273_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11273(__this, ___item, method) (( bool (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_Contains_m11273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11275_gshared (List_1_t502 * __this, ObjectU5BU5D_t148* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11275(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t502 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))List_1_CopyTo_m11275_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m11276_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_Exists_m11276(__this, ___match, method) (( bool (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))List_1_Exists_m11276_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11278_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_Find_m11278(__this, ___match, method) (( Object_t * (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))List_1_Find_m11278_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11280_gshared (Object_t * __this /* static, unused */, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11280(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1971 *, const MethodInfo*))List_1_CheckMatch_m11280_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t502 * List_1_FindAll_m11282_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_FindAll_m11282(__this, ___match, method) (( List_1_t502 * (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))List_1_FindAll_m11282_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t502 * List_1_FindAllStackBits_m11284_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m11284(__this, ___match, method) (( List_1_t502 * (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))List_1_FindAllStackBits_m11284_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t502 * List_1_FindAllList_m11286_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m11286(__this, ___match, method) (( List_1_t502 * (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))List_1_FindAllList_m11286_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11288_gshared (List_1_t502 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11288(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t502 *, int32_t, int32_t, Predicate_1_t1971 *, const MethodInfo*))List_1_GetIndex_m11288_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1964  List_1_GetEnumerator_m11289_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11289(__this, method) (( Enumerator_t1964  (*) (List_1_t502 *, const MethodInfo*))List_1_GetEnumerator_m11289_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11291_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11291(__this, ___item, method) (( int32_t (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11291_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11293_gshared (List_1_t502 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11293(__this, ___start, ___delta, method) (( void (*) (List_1_t502 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11293_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11295_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11295(__this, ___index, method) (( void (*) (List_1_t502 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11295_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11297_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11297(__this, ___index, ___item, method) (( void (*) (List_1_t502 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11297_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11299_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11299(__this, ___collection, method) (( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11299_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11301_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11301(__this, ___item, method) (( bool (*) (List_1_t502 *, Object_t *, const MethodInfo*))List_1_Remove_m11301_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11303_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11303(__this, ___match, method) (( int32_t (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))List_1_RemoveAll_m11303_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11305_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11305(__this, ___index, method) (( void (*) (List_1_t502 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11305_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11307_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_Reverse_m11307(__this, method) (( void (*) (List_1_t502 *, const MethodInfo*))List_1_Reverse_m11307_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11309_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_Sort_m11309(__this, method) (( void (*) (List_1_t502 *, const MethodInfo*))List_1_Sort_m11309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11311_gshared (List_1_t502 * __this, Comparison_1_t1977 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11311(__this, ___comparison, method) (( void (*) (List_1_t502 *, Comparison_1_t1977 *, const MethodInfo*))List_1_Sort_m11311_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t148* List_1_ToArray_m11312_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_ToArray_m11312(__this, method) (( ObjectU5BU5D_t148* (*) (List_1_t502 *, const MethodInfo*))List_1_ToArray_m11312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11314_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11314(__this, method) (( void (*) (List_1_t502 *, const MethodInfo*))List_1_TrimExcess_m11314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11316_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11316(__this, method) (( int32_t (*) (List_1_t502 *, const MethodInfo*))List_1_get_Capacity_m11316_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11318_gshared (List_1_t502 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11318(__this, ___value, method) (( void (*) (List_1_t502 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11318_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11320_gshared (List_1_t502 * __this, const MethodInfo* method);
#define List_1_get_Count_m11320(__this, method) (( int32_t (*) (List_1_t502 *, const MethodInfo*))List_1_get_Count_m11320_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11322_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11322(__this, ___index, method) (( Object_t * (*) (List_1_t502 *, int32_t, const MethodInfo*))List_1_get_Item_m11322_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11324_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11324(__this, ___index, ___value, method) (( void (*) (List_1_t502 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11324_gshared)(__this, ___index, ___value, method)
