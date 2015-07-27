#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<RMX.Bugger/Log>
struct List_1_t15;
// System.Collections.Generic.IEnumerable`1<RMX.Bugger/Log>
struct IEnumerable_1_t2684;
// RMX.Bugger/Log[]
struct LogU5BU5D_t1981;
// System.Collections.Generic.IEnumerator`1<RMX.Bugger/Log>
struct IEnumerator_1_t2685;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<RMX.Bugger/Log>
struct ICollection_1_t2686;
// System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>
struct ReadOnlyCollection_1_t1983;
// System.Predicate`1<RMX.Bugger/Log>
struct Predicate_1_t1988;
// System.Comparison`1<RMX.Bugger/Log>
struct Comparison_1_t1991;
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor()
extern "C" void List_1__ctor_m449_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1__ctor_m449(__this, method) (( void (*) (List_1_t15 *, const MethodInfo*))List_1__ctor_m449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11485_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11485(__this, ___collection, method) (( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))List_1__ctor_m11485_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11486_gshared (List_1_t15 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11486(__this, ___capacity, method) (( void (*) (List_1_t15 *, int32_t, const MethodInfo*))List_1__ctor_m11486_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m11487_gshared (List_1_t15 * __this, LogU5BU5D_t1981* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m11487(__this, ___data, ___size, method) (( void (*) (List_1_t15 *, LogU5BU5D_t1981*, int32_t, const MethodInfo*))List_1__ctor_m11487_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.cctor()
extern "C" void List_1__cctor_m11488_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11488(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11488_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11489_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11489(__this, method) (( Object_t* (*) (List_1_t15 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11489_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11490_gshared (List_1_t15 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11490(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t15 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11490_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11491_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11491(__this, method) (( Object_t * (*) (List_1_t15 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11492_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11492(__this, ___item, method) (( int32_t (*) (List_1_t15 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11492_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11493_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11493(__this, ___item, method) (( bool (*) (List_1_t15 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11493_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11494_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11494(__this, ___item, method) (( int32_t (*) (List_1_t15 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11495_gshared (List_1_t15 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11495(__this, ___index, ___item, method) (( void (*) (List_1_t15 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11495_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11496_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11496(__this, ___item, method) (( void (*) (List_1_t15 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11496_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11497_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11497(__this, method) (( bool (*) (List_1_t15 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11498_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11498(__this, method) (( bool (*) (List_1_t15 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11499_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11499(__this, method) (( Object_t * (*) (List_1_t15 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11500_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11500(__this, method) (( bool (*) (List_1_t15 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11501_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11501(__this, method) (( bool (*) (List_1_t15 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11502_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11502(__this, ___index, method) (( Object_t * (*) (List_1_t15 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11503_gshared (List_1_t15 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11503(__this, ___index, ___value, method) (( void (*) (List_1_t15 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(T)
extern "C" void List_1_Add_m11504_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method);
#define List_1_Add_m11504(__this, ___item, method) (( void (*) (List_1_t15 *, Log_t5 , const MethodInfo*))List_1_Add_m11504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11505_gshared (List_1_t15 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11505(__this, ___newCount, method) (( void (*) (List_1_t15 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11505_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11506_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11506(__this, ___collection, method) (( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11506_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11507_gshared (List_1_t15 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11507(__this, ___enumerable, method) (( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11507_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11508_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11508(__this, ___collection, method) (( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))List_1_AddRange_m11508_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1983 * List_1_AsReadOnly_m11509_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11509(__this, method) (( ReadOnlyCollection_1_t1983 * (*) (List_1_t15 *, const MethodInfo*))List_1_AsReadOnly_m11509_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Clear()
extern "C" void List_1_Clear_m11510_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_Clear_m11510(__this, method) (( void (*) (List_1_t15 *, const MethodInfo*))List_1_Clear_m11510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Contains(T)
extern "C" bool List_1_Contains_m11511_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method);
#define List_1_Contains_m11511(__this, ___item, method) (( bool (*) (List_1_t15 *, Log_t5 , const MethodInfo*))List_1_Contains_m11511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11512_gshared (List_1_t15 * __this, LogU5BU5D_t1981* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11512(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t15 *, LogU5BU5D_t1981*, int32_t, const MethodInfo*))List_1_CopyTo_m11512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m11513_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_Exists_m11513(__this, ___match, method) (( bool (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))List_1_Exists_m11513_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<RMX.Bugger/Log>::Find(System.Predicate`1<T>)
extern "C" Log_t5  List_1_Find_m11514_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_Find_m11514(__this, ___match, method) (( Log_t5  (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))List_1_Find_m11514_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11515_gshared (Object_t * __this /* static, unused */, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11515(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1988 *, const MethodInfo*))List_1_CheckMatch_m11515_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t15 * List_1_FindAll_m11516_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_FindAll_m11516(__this, ___match, method) (( List_1_t15 * (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))List_1_FindAll_m11516_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t15 * List_1_FindAllStackBits_m11517_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m11517(__this, ___match, method) (( List_1_t15 * (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))List_1_FindAllStackBits_m11517_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t15 * List_1_FindAllList_m11518_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m11518(__this, ___match, method) (( List_1_t15 * (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))List_1_FindAllList_m11518_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11519_gshared (List_1_t15 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11519(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t15 *, int32_t, int32_t, Predicate_1_t1988 *, const MethodInfo*))List_1_GetIndex_m11519_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::GetEnumerator()
extern "C" Enumerator_t159  List_1_GetEnumerator_m452_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m452(__this, method) (( Enumerator_t159  (*) (List_1_t15 *, const MethodInfo*))List_1_GetEnumerator_m452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11520_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method);
#define List_1_IndexOf_m11520(__this, ___item, method) (( int32_t (*) (List_1_t15 *, Log_t5 , const MethodInfo*))List_1_IndexOf_m11520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11521_gshared (List_1_t15 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11521(__this, ___start, ___delta, method) (( void (*) (List_1_t15 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11521_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11522_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11522(__this, ___index, method) (( void (*) (List_1_t15 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11522_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11523_gshared (List_1_t15 * __this, int32_t ___index, Log_t5  ___item, const MethodInfo* method);
#define List_1_Insert_m11523(__this, ___index, ___item, method) (( void (*) (List_1_t15 *, int32_t, Log_t5 , const MethodInfo*))List_1_Insert_m11523_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11524_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11524(__this, ___collection, method) (( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11524_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Remove(T)
extern "C" bool List_1_Remove_m11525_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method);
#define List_1_Remove_m11525(__this, ___item, method) (( bool (*) (List_1_t15 *, Log_t5 , const MethodInfo*))List_1_Remove_m11525_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11526_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11526(__this, ___match, method) (( int32_t (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))List_1_RemoveAll_m11526_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11527_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11527(__this, ___index, method) (( void (*) (List_1_t15 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11527_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Reverse()
extern "C" void List_1_Reverse_m11528_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_Reverse_m11528(__this, method) (( void (*) (List_1_t15 *, const MethodInfo*))List_1_Reverse_m11528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Sort()
extern "C" void List_1_Sort_m11529_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_Sort_m11529(__this, method) (( void (*) (List_1_t15 *, const MethodInfo*))List_1_Sort_m11529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11530_gshared (List_1_t15 * __this, Comparison_1_t1991 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11530(__this, ___comparison, method) (( void (*) (List_1_t15 *, Comparison_1_t1991 *, const MethodInfo*))List_1_Sort_m11530_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<RMX.Bugger/Log>::ToArray()
extern "C" LogU5BU5D_t1981* List_1_ToArray_m11531_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_ToArray_m11531(__this, method) (( LogU5BU5D_t1981* (*) (List_1_t15 *, const MethodInfo*))List_1_ToArray_m11531_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::TrimExcess()
extern "C" void List_1_TrimExcess_m11532_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11532(__this, method) (( void (*) (List_1_t15 *, const MethodInfo*))List_1_TrimExcess_m11532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11533_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11533(__this, method) (( int32_t (*) (List_1_t15 *, const MethodInfo*))List_1_get_Capacity_m11533_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11534_gshared (List_1_t15 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11534(__this, ___value, method) (( void (*) (List_1_t15 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11534_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Count()
extern "C" int32_t List_1_get_Count_m11535_gshared (List_1_t15 * __this, const MethodInfo* method);
#define List_1_get_Count_m11535(__this, method) (( int32_t (*) (List_1_t15 *, const MethodInfo*))List_1_get_Count_m11535_gshared)(__this, method)
// T System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Item(System.Int32)
extern "C" Log_t5  List_1_get_Item_m11536_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11536(__this, ___index, method) (( Log_t5  (*) (List_1_t15 *, int32_t, const MethodInfo*))List_1_get_Item_m11536_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11537_gshared (List_1_t15 * __this, int32_t ___index, Log_t5  ___value, const MethodInfo* method);
#define List_1_set_Item_m11537(__this, ___index, ___value, method) (( void (*) (List_1_t15 *, int32_t, Log_t5 , const MethodInfo*))List_1_set_Item_m11537_gshared)(__this, ___index, ___value, method)
