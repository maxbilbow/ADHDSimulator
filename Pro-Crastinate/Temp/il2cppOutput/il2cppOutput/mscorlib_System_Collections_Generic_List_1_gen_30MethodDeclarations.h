#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t665;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2841;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t792;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2842;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t526;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2352;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2356;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2359;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m17330_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1__ctor_m17330(__this, method) (( void (*) (List_1_t665 *, const MethodInfo*))List_1__ctor_m17330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17331_gshared (List_1_t665 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17331(__this, ___collection, method) (( void (*) (List_1_t665 *, Object_t*, const MethodInfo*))List_1__ctor_m17331_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4035_gshared (List_1_t665 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4035(__this, ___capacity, method) (( void (*) (List_1_t665 *, int32_t, const MethodInfo*))List_1__ctor_m4035_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17332_gshared (List_1_t665 * __this, UILineInfoU5BU5D_t792* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17332(__this, ___data, ___size, method) (( void (*) (List_1_t665 *, UILineInfoU5BU5D_t792*, int32_t, const MethodInfo*))List_1__ctor_m17332_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m17333_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17333(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17333_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17334_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17334(__this, method) (( Object_t* (*) (List_1_t665 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17335_gshared (List_1_t665 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17335(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t665 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17336_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17336(__this, method) (( Object_t * (*) (List_1_t665 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17336_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17337_gshared (List_1_t665 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17337(__this, ___item, method) (( int32_t (*) (List_1_t665 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17337_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17338_gshared (List_1_t665 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17338(__this, ___item, method) (( bool (*) (List_1_t665 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17338_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17339_gshared (List_1_t665 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17339(__this, ___item, method) (( int32_t (*) (List_1_t665 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17339_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17340_gshared (List_1_t665 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17340(__this, ___index, ___item, method) (( void (*) (List_1_t665 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17340_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17341_gshared (List_1_t665 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17341(__this, ___item, method) (( void (*) (List_1_t665 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17341_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17342_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17342(__this, method) (( bool (*) (List_1_t665 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17343_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17343(__this, method) (( bool (*) (List_1_t665 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17344_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17344(__this, method) (( Object_t * (*) (List_1_t665 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17345_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17345(__this, method) (( bool (*) (List_1_t665 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17346_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17346(__this, method) (( bool (*) (List_1_t665 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17347_gshared (List_1_t665 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17347(__this, ___index, method) (( Object_t * (*) (List_1_t665 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17348_gshared (List_1_t665 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17348(__this, ___index, ___value, method) (( void (*) (List_1_t665 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m17349_gshared (List_1_t665 * __this, UILineInfo_t522  ___item, const MethodInfo* method);
#define List_1_Add_m17349(__this, ___item, method) (( void (*) (List_1_t665 *, UILineInfo_t522 , const MethodInfo*))List_1_Add_m17349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17350_gshared (List_1_t665 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17350(__this, ___newCount, method) (( void (*) (List_1_t665 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17350_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17351_gshared (List_1_t665 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17351(__this, ___collection, method) (( void (*) (List_1_t665 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17351_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17352_gshared (List_1_t665 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17352(__this, ___enumerable, method) (( void (*) (List_1_t665 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17352_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17353_gshared (List_1_t665 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17353(__this, ___collection, method) (( void (*) (List_1_t665 *, Object_t*, const MethodInfo*))List_1_AddRange_m17353_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2352 * List_1_AsReadOnly_m17354_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17354(__this, method) (( ReadOnlyCollection_1_t2352 * (*) (List_1_t665 *, const MethodInfo*))List_1_AsReadOnly_m17354_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m17355_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_Clear_m17355(__this, method) (( void (*) (List_1_t665 *, const MethodInfo*))List_1_Clear_m17355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m17356_gshared (List_1_t665 * __this, UILineInfo_t522  ___item, const MethodInfo* method);
#define List_1_Contains_m17356(__this, ___item, method) (( bool (*) (List_1_t665 *, UILineInfo_t522 , const MethodInfo*))List_1_Contains_m17356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17357_gshared (List_1_t665 * __this, UILineInfoU5BU5D_t792* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17357(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t665 *, UILineInfoU5BU5D_t792*, int32_t, const MethodInfo*))List_1_CopyTo_m17357_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m17358_gshared (List_1_t665 * __this, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_Exists_m17358(__this, ___match, method) (( bool (*) (List_1_t665 *, Predicate_1_t2356 *, const MethodInfo*))List_1_Exists_m17358_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t522  List_1_Find_m17359_gshared (List_1_t665 * __this, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_Find_m17359(__this, ___match, method) (( UILineInfo_t522  (*) (List_1_t665 *, Predicate_1_t2356 *, const MethodInfo*))List_1_Find_m17359_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17360_gshared (Object_t * __this /* static, unused */, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17360(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2356 *, const MethodInfo*))List_1_CheckMatch_m17360_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t665 * List_1_FindAll_m17361_gshared (List_1_t665 * __this, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17361(__this, ___match, method) (( List_1_t665 * (*) (List_1_t665 *, Predicate_1_t2356 *, const MethodInfo*))List_1_FindAll_m17361_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t665 * List_1_FindAllStackBits_m17362_gshared (List_1_t665 * __this, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17362(__this, ___match, method) (( List_1_t665 * (*) (List_1_t665 *, Predicate_1_t2356 *, const MethodInfo*))List_1_FindAllStackBits_m17362_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t665 * List_1_FindAllList_m17363_gshared (List_1_t665 * __this, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17363(__this, ___match, method) (( List_1_t665 * (*) (List_1_t665 *, Predicate_1_t2356 *, const MethodInfo*))List_1_FindAllList_m17363_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17364_gshared (List_1_t665 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17364(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t665 *, int32_t, int32_t, Predicate_1_t2356 *, const MethodInfo*))List_1_GetIndex_m17364_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2351  List_1_GetEnumerator_m17365_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17365(__this, method) (( Enumerator_t2351  (*) (List_1_t665 *, const MethodInfo*))List_1_GetEnumerator_m17365_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17366_gshared (List_1_t665 * __this, UILineInfo_t522  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17366(__this, ___item, method) (( int32_t (*) (List_1_t665 *, UILineInfo_t522 , const MethodInfo*))List_1_IndexOf_m17366_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17367_gshared (List_1_t665 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17367(__this, ___start, ___delta, method) (( void (*) (List_1_t665 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17367_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17368_gshared (List_1_t665 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17368(__this, ___index, method) (( void (*) (List_1_t665 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17368_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17369_gshared (List_1_t665 * __this, int32_t ___index, UILineInfo_t522  ___item, const MethodInfo* method);
#define List_1_Insert_m17369(__this, ___index, ___item, method) (( void (*) (List_1_t665 *, int32_t, UILineInfo_t522 , const MethodInfo*))List_1_Insert_m17369_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17370_gshared (List_1_t665 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17370(__this, ___collection, method) (( void (*) (List_1_t665 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17370_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m17371_gshared (List_1_t665 * __this, UILineInfo_t522  ___item, const MethodInfo* method);
#define List_1_Remove_m17371(__this, ___item, method) (( bool (*) (List_1_t665 *, UILineInfo_t522 , const MethodInfo*))List_1_Remove_m17371_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17372_gshared (List_1_t665 * __this, Predicate_1_t2356 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17372(__this, ___match, method) (( int32_t (*) (List_1_t665 *, Predicate_1_t2356 *, const MethodInfo*))List_1_RemoveAll_m17372_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17373_gshared (List_1_t665 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17373(__this, ___index, method) (( void (*) (List_1_t665 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17373_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m17374_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_Reverse_m17374(__this, method) (( void (*) (List_1_t665 *, const MethodInfo*))List_1_Reverse_m17374_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m17375_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_Sort_m17375(__this, method) (( void (*) (List_1_t665 *, const MethodInfo*))List_1_Sort_m17375_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17376_gshared (List_1_t665 * __this, Comparison_1_t2359 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17376(__this, ___comparison, method) (( void (*) (List_1_t665 *, Comparison_1_t2359 *, const MethodInfo*))List_1_Sort_m17376_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t792* List_1_ToArray_m17377_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_ToArray_m17377(__this, method) (( UILineInfoU5BU5D_t792* (*) (List_1_t665 *, const MethodInfo*))List_1_ToArray_m17377_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m17378_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17378(__this, method) (( void (*) (List_1_t665 *, const MethodInfo*))List_1_TrimExcess_m17378_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17379_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17379(__this, method) (( int32_t (*) (List_1_t665 *, const MethodInfo*))List_1_get_Capacity_m17379_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17380_gshared (List_1_t665 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17380(__this, ___value, method) (( void (*) (List_1_t665 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17380_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m17381_gshared (List_1_t665 * __this, const MethodInfo* method);
#define List_1_get_Count_m17381(__this, method) (( int32_t (*) (List_1_t665 *, const MethodInfo*))List_1_get_Count_m17381_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t522  List_1_get_Item_m17382_gshared (List_1_t665 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17382(__this, ___index, method) (( UILineInfo_t522  (*) (List_1_t665 *, int32_t, const MethodInfo*))List_1_get_Item_m17382_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17383_gshared (List_1_t665 * __this, int32_t ___index, UILineInfo_t522  ___value, const MethodInfo* method);
#define List_1_set_Item_m17383(__this, ___index, ___value, method) (( void (*) (List_1_t665 *, int32_t, UILineInfo_t522 , const MethodInfo*))List_1_set_Item_m17383_gshared)(__this, ___index, ___value, method)
