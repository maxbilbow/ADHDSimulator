#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t664;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2838;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t791;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2839;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2840;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2343;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2347;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2350;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m17185_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1__ctor_m17185(__this, method) (( void (*) (List_1_t664 *, const MethodInfo*))List_1__ctor_m17185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17186_gshared (List_1_t664 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17186(__this, ___collection, method) (( void (*) (List_1_t664 *, Object_t*, const MethodInfo*))List_1__ctor_m17186_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4037_gshared (List_1_t664 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4037(__this, ___capacity, method) (( void (*) (List_1_t664 *, int32_t, const MethodInfo*))List_1__ctor_m4037_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17187_gshared (List_1_t664 * __this, UICharInfoU5BU5D_t791* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17187(__this, ___data, ___size, method) (( void (*) (List_1_t664 *, UICharInfoU5BU5D_t791*, int32_t, const MethodInfo*))List_1__ctor_m17187_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m17188_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17188(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17188_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17189_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17189(__this, method) (( Object_t* (*) (List_1_t664 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17190_gshared (List_1_t664 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17190(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t664 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17190_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17191_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17191(__this, method) (( Object_t * (*) (List_1_t664 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17191_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17192_gshared (List_1_t664 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17192(__this, ___item, method) (( int32_t (*) (List_1_t664 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17192_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17193_gshared (List_1_t664 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17193(__this, ___item, method) (( bool (*) (List_1_t664 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17193_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17194_gshared (List_1_t664 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17194(__this, ___item, method) (( int32_t (*) (List_1_t664 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17194_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17195_gshared (List_1_t664 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17195(__this, ___index, ___item, method) (( void (*) (List_1_t664 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17195_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17196_gshared (List_1_t664 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17196(__this, ___item, method) (( void (*) (List_1_t664 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17196_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17197_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17197(__this, method) (( bool (*) (List_1_t664 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17197_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17198_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17198(__this, method) (( bool (*) (List_1_t664 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17198_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17199_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17199(__this, method) (( Object_t * (*) (List_1_t664 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17199_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17200_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17200(__this, method) (( bool (*) (List_1_t664 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17200_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17201_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17201(__this, method) (( bool (*) (List_1_t664 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17201_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17202_gshared (List_1_t664 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17202(__this, ___index, method) (( Object_t * (*) (List_1_t664 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17202_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17203_gshared (List_1_t664 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17203(__this, ___index, ___value, method) (( void (*) (List_1_t664 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17203_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m17204_gshared (List_1_t664 * __this, UICharInfo_t524  ___item, const MethodInfo* method);
#define List_1_Add_m17204(__this, ___item, method) (( void (*) (List_1_t664 *, UICharInfo_t524 , const MethodInfo*))List_1_Add_m17204_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17205_gshared (List_1_t664 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17205(__this, ___newCount, method) (( void (*) (List_1_t664 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17205_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17206_gshared (List_1_t664 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17206(__this, ___collection, method) (( void (*) (List_1_t664 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17206_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17207_gshared (List_1_t664 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17207(__this, ___enumerable, method) (( void (*) (List_1_t664 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17207_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17208_gshared (List_1_t664 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17208(__this, ___collection, method) (( void (*) (List_1_t664 *, Object_t*, const MethodInfo*))List_1_AddRange_m17208_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2343 * List_1_AsReadOnly_m17209_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17209(__this, method) (( ReadOnlyCollection_1_t2343 * (*) (List_1_t664 *, const MethodInfo*))List_1_AsReadOnly_m17209_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m17210_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_Clear_m17210(__this, method) (( void (*) (List_1_t664 *, const MethodInfo*))List_1_Clear_m17210_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m17211_gshared (List_1_t664 * __this, UICharInfo_t524  ___item, const MethodInfo* method);
#define List_1_Contains_m17211(__this, ___item, method) (( bool (*) (List_1_t664 *, UICharInfo_t524 , const MethodInfo*))List_1_Contains_m17211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17212_gshared (List_1_t664 * __this, UICharInfoU5BU5D_t791* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17212(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t664 *, UICharInfoU5BU5D_t791*, int32_t, const MethodInfo*))List_1_CopyTo_m17212_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m17213_gshared (List_1_t664 * __this, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_Exists_m17213(__this, ___match, method) (( bool (*) (List_1_t664 *, Predicate_1_t2347 *, const MethodInfo*))List_1_Exists_m17213_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t524  List_1_Find_m17214_gshared (List_1_t664 * __this, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_Find_m17214(__this, ___match, method) (( UICharInfo_t524  (*) (List_1_t664 *, Predicate_1_t2347 *, const MethodInfo*))List_1_Find_m17214_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17215_gshared (Object_t * __this /* static, unused */, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17215(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2347 *, const MethodInfo*))List_1_CheckMatch_m17215_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t664 * List_1_FindAll_m17216_gshared (List_1_t664 * __this, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17216(__this, ___match, method) (( List_1_t664 * (*) (List_1_t664 *, Predicate_1_t2347 *, const MethodInfo*))List_1_FindAll_m17216_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t664 * List_1_FindAllStackBits_m17217_gshared (List_1_t664 * __this, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17217(__this, ___match, method) (( List_1_t664 * (*) (List_1_t664 *, Predicate_1_t2347 *, const MethodInfo*))List_1_FindAllStackBits_m17217_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t664 * List_1_FindAllList_m17218_gshared (List_1_t664 * __this, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17218(__this, ___match, method) (( List_1_t664 * (*) (List_1_t664 *, Predicate_1_t2347 *, const MethodInfo*))List_1_FindAllList_m17218_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17219_gshared (List_1_t664 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17219(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t664 *, int32_t, int32_t, Predicate_1_t2347 *, const MethodInfo*))List_1_GetIndex_m17219_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2342  List_1_GetEnumerator_m17220_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17220(__this, method) (( Enumerator_t2342  (*) (List_1_t664 *, const MethodInfo*))List_1_GetEnumerator_m17220_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17221_gshared (List_1_t664 * __this, UICharInfo_t524  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17221(__this, ___item, method) (( int32_t (*) (List_1_t664 *, UICharInfo_t524 , const MethodInfo*))List_1_IndexOf_m17221_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17222_gshared (List_1_t664 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17222(__this, ___start, ___delta, method) (( void (*) (List_1_t664 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17222_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17223_gshared (List_1_t664 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17223(__this, ___index, method) (( void (*) (List_1_t664 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17224_gshared (List_1_t664 * __this, int32_t ___index, UICharInfo_t524  ___item, const MethodInfo* method);
#define List_1_Insert_m17224(__this, ___index, ___item, method) (( void (*) (List_1_t664 *, int32_t, UICharInfo_t524 , const MethodInfo*))List_1_Insert_m17224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17225_gshared (List_1_t664 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17225(__this, ___collection, method) (( void (*) (List_1_t664 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17225_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m17226_gshared (List_1_t664 * __this, UICharInfo_t524  ___item, const MethodInfo* method);
#define List_1_Remove_m17226(__this, ___item, method) (( bool (*) (List_1_t664 *, UICharInfo_t524 , const MethodInfo*))List_1_Remove_m17226_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17227_gshared (List_1_t664 * __this, Predicate_1_t2347 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17227(__this, ___match, method) (( int32_t (*) (List_1_t664 *, Predicate_1_t2347 *, const MethodInfo*))List_1_RemoveAll_m17227_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17228_gshared (List_1_t664 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17228(__this, ___index, method) (( void (*) (List_1_t664 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17228_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m17229_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_Reverse_m17229(__this, method) (( void (*) (List_1_t664 *, const MethodInfo*))List_1_Reverse_m17229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m17230_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_Sort_m17230(__this, method) (( void (*) (List_1_t664 *, const MethodInfo*))List_1_Sort_m17230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17231_gshared (List_1_t664 * __this, Comparison_1_t2350 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17231(__this, ___comparison, method) (( void (*) (List_1_t664 *, Comparison_1_t2350 *, const MethodInfo*))List_1_Sort_m17231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t791* List_1_ToArray_m17232_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_ToArray_m17232(__this, method) (( UICharInfoU5BU5D_t791* (*) (List_1_t664 *, const MethodInfo*))List_1_ToArray_m17232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m17233_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17233(__this, method) (( void (*) (List_1_t664 *, const MethodInfo*))List_1_TrimExcess_m17233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17234_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17234(__this, method) (( int32_t (*) (List_1_t664 *, const MethodInfo*))List_1_get_Capacity_m17234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17235_gshared (List_1_t664 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17235(__this, ___value, method) (( void (*) (List_1_t664 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17235_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m17236_gshared (List_1_t664 * __this, const MethodInfo* method);
#define List_1_get_Count_m17236(__this, method) (( int32_t (*) (List_1_t664 *, const MethodInfo*))List_1_get_Count_m17236_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t524  List_1_get_Item_m17237_gshared (List_1_t664 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17237(__this, ___index, method) (( UICharInfo_t524  (*) (List_1_t664 *, int32_t, const MethodInfo*))List_1_get_Item_m17237_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17238_gshared (List_1_t664 * __this, int32_t ___index, UICharInfo_t524  ___value, const MethodInfo* method);
#define List_1_set_Item_m17238(__this, ___index, ___value, method) (( void (*) (List_1_t664 *, int32_t, UICharInfo_t524 , const MethodInfo*))List_1_set_Item_m17238_gshared)(__this, ___index, ___value, method)
