#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t672;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2760;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t800;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2761;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2762;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2392;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2396;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2399;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m17444_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1__ctor_m17444(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1__ctor_m17444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17445_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17445(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1__ctor_m17445_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4060_gshared (List_1_t672 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4060(__this, ___capacity, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17446_gshared (List_1_t672 * __this, UICharInfoU5BU5D_t800* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17446(__this, ___data, ___size, method) (( void (*) (List_1_t672 *, UICharInfoU5BU5D_t800*, int32_t, const MethodInfo*))List_1__ctor_m17446_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m17447_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17447(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17447_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17448_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17448(__this, method) (( Object_t* (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17449_gshared (List_1_t672 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17449(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t672 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17449_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17450_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17450(__this, method) (( Object_t * (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17450_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17451_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17451(__this, ___item, method) (( int32_t (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17451_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17452_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17452(__this, ___item, method) (( bool (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17452_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17453_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17453(__this, ___item, method) (( int32_t (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17453_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17454_gshared (List_1_t672 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17454(__this, ___index, ___item, method) (( void (*) (List_1_t672 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17454_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17455_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17455(__this, ___item, method) (( void (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17455_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17456_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17456(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17456_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17457_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17457(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17457_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17458_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17458(__this, method) (( Object_t * (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17458_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17459_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17459(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17459_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17460_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17460(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17460_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17461_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17461(__this, ___index, method) (( Object_t * (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17461_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17462_gshared (List_1_t672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17462(__this, ___index, ___value, method) (( void (*) (List_1_t672 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17462_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m17463_gshared (List_1_t672 * __this, UICharInfo_t531  ___item, const MethodInfo* method);
#define List_1_Add_m17463(__this, ___item, method) (( void (*) (List_1_t672 *, UICharInfo_t531 , const MethodInfo*))List_1_Add_m17463_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17464_gshared (List_1_t672 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17464(__this, ___newCount, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17464_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17465_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17465(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17465_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17466_gshared (List_1_t672 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17466(__this, ___enumerable, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17466_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17467_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17467(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_AddRange_m17467_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2392 * List_1_AsReadOnly_m17468_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17468(__this, method) (( ReadOnlyCollection_1_t2392 * (*) (List_1_t672 *, const MethodInfo*))List_1_AsReadOnly_m17468_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m17469_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_Clear_m17469(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_Clear_m17469_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m17470_gshared (List_1_t672 * __this, UICharInfo_t531  ___item, const MethodInfo* method);
#define List_1_Contains_m17470(__this, ___item, method) (( bool (*) (List_1_t672 *, UICharInfo_t531 , const MethodInfo*))List_1_Contains_m17470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17471_gshared (List_1_t672 * __this, UICharInfoU5BU5D_t800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17471(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t672 *, UICharInfoU5BU5D_t800*, int32_t, const MethodInfo*))List_1_CopyTo_m17471_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m17472_gshared (List_1_t672 * __this, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_Exists_m17472(__this, ___match, method) (( bool (*) (List_1_t672 *, Predicate_1_t2396 *, const MethodInfo*))List_1_Exists_m17472_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t531  List_1_Find_m17473_gshared (List_1_t672 * __this, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_Find_m17473(__this, ___match, method) (( UICharInfo_t531  (*) (List_1_t672 *, Predicate_1_t2396 *, const MethodInfo*))List_1_Find_m17473_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17474_gshared (Object_t * __this /* static, unused */, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17474(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2396 *, const MethodInfo*))List_1_CheckMatch_m17474_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t672 * List_1_FindAll_m17475_gshared (List_1_t672 * __this, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17475(__this, ___match, method) (( List_1_t672 * (*) (List_1_t672 *, Predicate_1_t2396 *, const MethodInfo*))List_1_FindAll_m17475_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t672 * List_1_FindAllStackBits_m17476_gshared (List_1_t672 * __this, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17476(__this, ___match, method) (( List_1_t672 * (*) (List_1_t672 *, Predicate_1_t2396 *, const MethodInfo*))List_1_FindAllStackBits_m17476_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t672 * List_1_FindAllList_m17477_gshared (List_1_t672 * __this, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17477(__this, ___match, method) (( List_1_t672 * (*) (List_1_t672 *, Predicate_1_t2396 *, const MethodInfo*))List_1_FindAllList_m17477_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17478_gshared (List_1_t672 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17478(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t672 *, int32_t, int32_t, Predicate_1_t2396 *, const MethodInfo*))List_1_GetIndex_m17478_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2391  List_1_GetEnumerator_m17479_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17479(__this, method) (( Enumerator_t2391  (*) (List_1_t672 *, const MethodInfo*))List_1_GetEnumerator_m17479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17480_gshared (List_1_t672 * __this, UICharInfo_t531  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17480(__this, ___item, method) (( int32_t (*) (List_1_t672 *, UICharInfo_t531 , const MethodInfo*))List_1_IndexOf_m17480_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17481_gshared (List_1_t672 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17481(__this, ___start, ___delta, method) (( void (*) (List_1_t672 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17481_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17482_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17482(__this, ___index, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17482_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17483_gshared (List_1_t672 * __this, int32_t ___index, UICharInfo_t531  ___item, const MethodInfo* method);
#define List_1_Insert_m17483(__this, ___index, ___item, method) (( void (*) (List_1_t672 *, int32_t, UICharInfo_t531 , const MethodInfo*))List_1_Insert_m17483_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17484_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17484(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17484_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m17485_gshared (List_1_t672 * __this, UICharInfo_t531  ___item, const MethodInfo* method);
#define List_1_Remove_m17485(__this, ___item, method) (( bool (*) (List_1_t672 *, UICharInfo_t531 , const MethodInfo*))List_1_Remove_m17485_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17486_gshared (List_1_t672 * __this, Predicate_1_t2396 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17486(__this, ___match, method) (( int32_t (*) (List_1_t672 *, Predicate_1_t2396 *, const MethodInfo*))List_1_RemoveAll_m17486_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17487_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17487(__this, ___index, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17487_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m17488_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_Reverse_m17488(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_Reverse_m17488_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m17489_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_Sort_m17489(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_Sort_m17489_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17490_gshared (List_1_t672 * __this, Comparison_1_t2399 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17490(__this, ___comparison, method) (( void (*) (List_1_t672 *, Comparison_1_t2399 *, const MethodInfo*))List_1_Sort_m17490_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t800* List_1_ToArray_m17491_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_ToArray_m17491(__this, method) (( UICharInfoU5BU5D_t800* (*) (List_1_t672 *, const MethodInfo*))List_1_ToArray_m17491_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m17492_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17492(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_TrimExcess_m17492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17493_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17493(__this, method) (( int32_t (*) (List_1_t672 *, const MethodInfo*))List_1_get_Capacity_m17493_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17494_gshared (List_1_t672 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17494(__this, ___value, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17494_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m17495_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_get_Count_m17495(__this, method) (( int32_t (*) (List_1_t672 *, const MethodInfo*))List_1_get_Count_m17495_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t531  List_1_get_Item_m17496_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17496(__this, ___index, method) (( UICharInfo_t531  (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_get_Item_m17496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17497_gshared (List_1_t672 * __this, int32_t ___index, UICharInfo_t531  ___value, const MethodInfo* method);
#define List_1_set_Item_m17497(__this, ___index, ___value, method) (( void (*) (List_1_t672 *, int32_t, UICharInfo_t531 , const MethodInfo*))List_1_set_Item_m17497_gshared)(__this, ___index, ___value, method)
