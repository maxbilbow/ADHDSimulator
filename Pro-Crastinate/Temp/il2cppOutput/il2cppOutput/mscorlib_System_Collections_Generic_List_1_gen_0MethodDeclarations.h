#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<RMX.Bugger/Log>
struct List_1_t14;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<RMX.Bugger/Log>
struct IEnumerable_1_t2635;
// RMX.Bugger/Log[]
struct LogU5BU5D_t1951;
// System.Collections.Generic.IEnumerator`1<RMX.Bugger/Log>
struct IEnumerator_1_t2636;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<RMX.Bugger/Log>
struct ICollection_1_t2637;
// System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>
struct ReadOnlyCollection_1_t1954;
// System.Predicate`1<RMX.Bugger/Log>
struct Predicate_1_t1958;
// System.Comparison`1<RMX.Bugger/Log>
struct Comparison_1_t1961;
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor()
extern "C" void List_1__ctor_m444_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1__ctor_m444(__this, method) (( void (*) (List_1_t14 *, const MethodInfo*))List_1__ctor_m444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11403_gshared (List_1_t14 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11403(__this, ___collection, method) (( void (*) (List_1_t14 *, Object_t*, const MethodInfo*))List_1__ctor_m11403_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11404_gshared (List_1_t14 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11404(__this, ___capacity, method) (( void (*) (List_1_t14 *, int32_t, const MethodInfo*))List_1__ctor_m11404_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m11405_gshared (List_1_t14 * __this, LogU5BU5D_t1951* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m11405(__this, ___data, ___size, method) (( void (*) (List_1_t14 *, LogU5BU5D_t1951*, int32_t, const MethodInfo*))List_1__ctor_m11405_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.cctor()
extern "C" void List_1__cctor_m11406_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11406(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11406_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11407_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11407(__this, method) (( Object_t* (*) (List_1_t14 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11407_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11408_gshared (List_1_t14 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11408(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t14 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11408_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11409_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11409(__this, method) (( Object_t * (*) (List_1_t14 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11410_gshared (List_1_t14 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11410(__this, ___item, method) (( int32_t (*) (List_1_t14 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11410_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11411_gshared (List_1_t14 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11411(__this, ___item, method) (( bool (*) (List_1_t14 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11411_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11412_gshared (List_1_t14 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11412(__this, ___item, method) (( int32_t (*) (List_1_t14 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11413_gshared (List_1_t14 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11413(__this, ___index, ___item, method) (( void (*) (List_1_t14 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11413_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11414_gshared (List_1_t14 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11414(__this, ___item, method) (( void (*) (List_1_t14 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11414_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11415_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11415(__this, method) (( bool (*) (List_1_t14 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11416_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11416(__this, method) (( bool (*) (List_1_t14 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11416_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11417_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11417(__this, method) (( Object_t * (*) (List_1_t14 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11417_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11418_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11418(__this, method) (( bool (*) (List_1_t14 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11419_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11419(__this, method) (( bool (*) (List_1_t14 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11419_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11420_gshared (List_1_t14 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11420(__this, ___index, method) (( Object_t * (*) (List_1_t14 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11421_gshared (List_1_t14 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11421(__this, ___index, ___value, method) (( void (*) (List_1_t14 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11421_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(T)
extern "C" void List_1_Add_m11422_gshared (List_1_t14 * __this, Log_t6  ___item, const MethodInfo* method);
#define List_1_Add_m11422(__this, ___item, method) (( void (*) (List_1_t14 *, Log_t6 , const MethodInfo*))List_1_Add_m11422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11423_gshared (List_1_t14 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11423(__this, ___newCount, method) (( void (*) (List_1_t14 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11423_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11424_gshared (List_1_t14 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11424(__this, ___collection, method) (( void (*) (List_1_t14 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11425_gshared (List_1_t14 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11425(__this, ___enumerable, method) (( void (*) (List_1_t14 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11425_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11426_gshared (List_1_t14 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11426(__this, ___collection, method) (( void (*) (List_1_t14 *, Object_t*, const MethodInfo*))List_1_AddRange_m11426_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1954 * List_1_AsReadOnly_m11427_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11427(__this, method) (( ReadOnlyCollection_1_t1954 * (*) (List_1_t14 *, const MethodInfo*))List_1_AsReadOnly_m11427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Clear()
extern "C" void List_1_Clear_m11428_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_Clear_m11428(__this, method) (( void (*) (List_1_t14 *, const MethodInfo*))List_1_Clear_m11428_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Contains(T)
extern "C" bool List_1_Contains_m11429_gshared (List_1_t14 * __this, Log_t6  ___item, const MethodInfo* method);
#define List_1_Contains_m11429(__this, ___item, method) (( bool (*) (List_1_t14 *, Log_t6 , const MethodInfo*))List_1_Contains_m11429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11430_gshared (List_1_t14 * __this, LogU5BU5D_t1951* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11430(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t14 *, LogU5BU5D_t1951*, int32_t, const MethodInfo*))List_1_CopyTo_m11430_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m11431_gshared (List_1_t14 * __this, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_Exists_m11431(__this, ___match, method) (( bool (*) (List_1_t14 *, Predicate_1_t1958 *, const MethodInfo*))List_1_Exists_m11431_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<RMX.Bugger/Log>::Find(System.Predicate`1<T>)
extern "C" Log_t6  List_1_Find_m11432_gshared (List_1_t14 * __this, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_Find_m11432(__this, ___match, method) (( Log_t6  (*) (List_1_t14 *, Predicate_1_t1958 *, const MethodInfo*))List_1_Find_m11432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11433_gshared (Object_t * __this /* static, unused */, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11433(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1958 *, const MethodInfo*))List_1_CheckMatch_m11433_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t14 * List_1_FindAll_m11434_gshared (List_1_t14 * __this, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_FindAll_m11434(__this, ___match, method) (( List_1_t14 * (*) (List_1_t14 *, Predicate_1_t1958 *, const MethodInfo*))List_1_FindAll_m11434_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t14 * List_1_FindAllStackBits_m11435_gshared (List_1_t14 * __this, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m11435(__this, ___match, method) (( List_1_t14 * (*) (List_1_t14 *, Predicate_1_t1958 *, const MethodInfo*))List_1_FindAllStackBits_m11435_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t14 * List_1_FindAllList_m11436_gshared (List_1_t14 * __this, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m11436(__this, ___match, method) (( List_1_t14 * (*) (List_1_t14 *, Predicate_1_t1958 *, const MethodInfo*))List_1_FindAllList_m11436_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11437_gshared (List_1_t14 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11437(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t14 *, int32_t, int32_t, Predicate_1_t1958 *, const MethodInfo*))List_1_GetIndex_m11437_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::GetEnumerator()
extern "C" Enumerator_t152  List_1_GetEnumerator_m445_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m445(__this, method) (( Enumerator_t152  (*) (List_1_t14 *, const MethodInfo*))List_1_GetEnumerator_m445_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11438_gshared (List_1_t14 * __this, Log_t6  ___item, const MethodInfo* method);
#define List_1_IndexOf_m11438(__this, ___item, method) (( int32_t (*) (List_1_t14 *, Log_t6 , const MethodInfo*))List_1_IndexOf_m11438_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11439_gshared (List_1_t14 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11439(__this, ___start, ___delta, method) (( void (*) (List_1_t14 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11439_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11440_gshared (List_1_t14 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11440(__this, ___index, method) (( void (*) (List_1_t14 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11440_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11441_gshared (List_1_t14 * __this, int32_t ___index, Log_t6  ___item, const MethodInfo* method);
#define List_1_Insert_m11441(__this, ___index, ___item, method) (( void (*) (List_1_t14 *, int32_t, Log_t6 , const MethodInfo*))List_1_Insert_m11441_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11442_gshared (List_1_t14 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11442(__this, ___collection, method) (( void (*) (List_1_t14 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11442_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Remove(T)
extern "C" bool List_1_Remove_m11443_gshared (List_1_t14 * __this, Log_t6  ___item, const MethodInfo* method);
#define List_1_Remove_m11443(__this, ___item, method) (( bool (*) (List_1_t14 *, Log_t6 , const MethodInfo*))List_1_Remove_m11443_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11444_gshared (List_1_t14 * __this, Predicate_1_t1958 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11444(__this, ___match, method) (( int32_t (*) (List_1_t14 *, Predicate_1_t1958 *, const MethodInfo*))List_1_RemoveAll_m11444_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11445_gshared (List_1_t14 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11445(__this, ___index, method) (( void (*) (List_1_t14 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Reverse()
extern "C" void List_1_Reverse_m11446_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_Reverse_m11446(__this, method) (( void (*) (List_1_t14 *, const MethodInfo*))List_1_Reverse_m11446_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Sort()
extern "C" void List_1_Sort_m11447_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_Sort_m11447(__this, method) (( void (*) (List_1_t14 *, const MethodInfo*))List_1_Sort_m11447_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11448_gshared (List_1_t14 * __this, Comparison_1_t1961 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11448(__this, ___comparison, method) (( void (*) (List_1_t14 *, Comparison_1_t1961 *, const MethodInfo*))List_1_Sort_m11448_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<RMX.Bugger/Log>::ToArray()
extern "C" LogU5BU5D_t1951* List_1_ToArray_m11449_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_ToArray_m11449(__this, method) (( LogU5BU5D_t1951* (*) (List_1_t14 *, const MethodInfo*))List_1_ToArray_m11449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::TrimExcess()
extern "C" void List_1_TrimExcess_m11450_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11450(__this, method) (( void (*) (List_1_t14 *, const MethodInfo*))List_1_TrimExcess_m11450_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11451_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11451(__this, method) (( int32_t (*) (List_1_t14 *, const MethodInfo*))List_1_get_Capacity_m11451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11452_gshared (List_1_t14 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11452(__this, ___value, method) (( void (*) (List_1_t14 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11452_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Count()
extern "C" int32_t List_1_get_Count_m11453_gshared (List_1_t14 * __this, const MethodInfo* method);
#define List_1_get_Count_m11453(__this, method) (( int32_t (*) (List_1_t14 *, const MethodInfo*))List_1_get_Count_m11453_gshared)(__this, method)
// T System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Item(System.Int32)
extern "C" Log_t6  List_1_get_Item_m11454_gshared (List_1_t14 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11454(__this, ___index, method) (( Log_t6  (*) (List_1_t14 *, int32_t, const MethodInfo*))List_1_get_Item_m11454_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11455_gshared (List_1_t14 * __this, int32_t ___index, Log_t6  ___value, const MethodInfo* method);
#define List_1_set_Item_m11455(__this, ___index, ___value, method) (( void (*) (List_1_t14 *, int32_t, Log_t6 , const MethodInfo*))List_1_set_Item_m11455_gshared)(__this, ___index, ___value, method)
