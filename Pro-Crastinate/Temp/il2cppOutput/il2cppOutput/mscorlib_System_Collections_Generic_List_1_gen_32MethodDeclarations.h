#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t673;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2763;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t801;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2764;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t533;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2401;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2405;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2408;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m17592_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1__ctor_m17592(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1__ctor_m17592_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17593_gshared (List_1_t673 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17593(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1__ctor_m17593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4061_gshared (List_1_t673 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4061(__this, ___capacity, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1__ctor_m4061_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17594_gshared (List_1_t673 * __this, UILineInfoU5BU5D_t801* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17594(__this, ___data, ___size, method) (( void (*) (List_1_t673 *, UILineInfoU5BU5D_t801*, int32_t, const MethodInfo*))List_1__ctor_m17594_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m17595_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17595(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17595_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17596_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17596(__this, method) (( Object_t* (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17596_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17597_gshared (List_1_t673 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17597(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t673 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17597_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17598_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17598(__this, method) (( Object_t * (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17598_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17599_gshared (List_1_t673 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17599(__this, ___item, method) (( int32_t (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17599_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17600_gshared (List_1_t673 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17600(__this, ___item, method) (( bool (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17600_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17601_gshared (List_1_t673 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17601(__this, ___item, method) (( int32_t (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17601_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17602_gshared (List_1_t673 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17602(__this, ___index, ___item, method) (( void (*) (List_1_t673 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17602_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17603_gshared (List_1_t673 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17603(__this, ___item, method) (( void (*) (List_1_t673 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17603_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17604_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17604(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17605_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17605(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17605_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17606_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17606(__this, method) (( Object_t * (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17607_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17607(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17608_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17608(__this, method) (( bool (*) (List_1_t673 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17608_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17609_gshared (List_1_t673 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17609(__this, ___index, method) (( Object_t * (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17609_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17610_gshared (List_1_t673 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17610(__this, ___index, ___value, method) (( void (*) (List_1_t673 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17610_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m17611_gshared (List_1_t673 * __this, UILineInfo_t529  ___item, const MethodInfo* method);
#define List_1_Add_m17611(__this, ___item, method) (( void (*) (List_1_t673 *, UILineInfo_t529 , const MethodInfo*))List_1_Add_m17611_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17612_gshared (List_1_t673 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17612(__this, ___newCount, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17612_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17613_gshared (List_1_t673 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17613(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17613_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17614_gshared (List_1_t673 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17614(__this, ___enumerable, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17614_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17615_gshared (List_1_t673 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17615(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_AddRange_m17615_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2401 * List_1_AsReadOnly_m17616_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17616(__this, method) (( ReadOnlyCollection_1_t2401 * (*) (List_1_t673 *, const MethodInfo*))List_1_AsReadOnly_m17616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m17617_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_Clear_m17617(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_Clear_m17617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m17618_gshared (List_1_t673 * __this, UILineInfo_t529  ___item, const MethodInfo* method);
#define List_1_Contains_m17618(__this, ___item, method) (( bool (*) (List_1_t673 *, UILineInfo_t529 , const MethodInfo*))List_1_Contains_m17618_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17619_gshared (List_1_t673 * __this, UILineInfoU5BU5D_t801* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17619(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t673 *, UILineInfoU5BU5D_t801*, int32_t, const MethodInfo*))List_1_CopyTo_m17619_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m17620_gshared (List_1_t673 * __this, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_Exists_m17620(__this, ___match, method) (( bool (*) (List_1_t673 *, Predicate_1_t2405 *, const MethodInfo*))List_1_Exists_m17620_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t529  List_1_Find_m17621_gshared (List_1_t673 * __this, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_Find_m17621(__this, ___match, method) (( UILineInfo_t529  (*) (List_1_t673 *, Predicate_1_t2405 *, const MethodInfo*))List_1_Find_m17621_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17622_gshared (Object_t * __this /* static, unused */, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17622(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2405 *, const MethodInfo*))List_1_CheckMatch_m17622_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t673 * List_1_FindAll_m17623_gshared (List_1_t673 * __this, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17623(__this, ___match, method) (( List_1_t673 * (*) (List_1_t673 *, Predicate_1_t2405 *, const MethodInfo*))List_1_FindAll_m17623_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t673 * List_1_FindAllStackBits_m17624_gshared (List_1_t673 * __this, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17624(__this, ___match, method) (( List_1_t673 * (*) (List_1_t673 *, Predicate_1_t2405 *, const MethodInfo*))List_1_FindAllStackBits_m17624_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t673 * List_1_FindAllList_m17625_gshared (List_1_t673 * __this, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17625(__this, ___match, method) (( List_1_t673 * (*) (List_1_t673 *, Predicate_1_t2405 *, const MethodInfo*))List_1_FindAllList_m17625_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17626_gshared (List_1_t673 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17626(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t673 *, int32_t, int32_t, Predicate_1_t2405 *, const MethodInfo*))List_1_GetIndex_m17626_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2400  List_1_GetEnumerator_m17627_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17627(__this, method) (( Enumerator_t2400  (*) (List_1_t673 *, const MethodInfo*))List_1_GetEnumerator_m17627_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17628_gshared (List_1_t673 * __this, UILineInfo_t529  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17628(__this, ___item, method) (( int32_t (*) (List_1_t673 *, UILineInfo_t529 , const MethodInfo*))List_1_IndexOf_m17628_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17629_gshared (List_1_t673 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17629(__this, ___start, ___delta, method) (( void (*) (List_1_t673 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17629_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17630_gshared (List_1_t673 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17630(__this, ___index, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17630_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17631_gshared (List_1_t673 * __this, int32_t ___index, UILineInfo_t529  ___item, const MethodInfo* method);
#define List_1_Insert_m17631(__this, ___index, ___item, method) (( void (*) (List_1_t673 *, int32_t, UILineInfo_t529 , const MethodInfo*))List_1_Insert_m17631_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17632_gshared (List_1_t673 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17632(__this, ___collection, method) (( void (*) (List_1_t673 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17632_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m17633_gshared (List_1_t673 * __this, UILineInfo_t529  ___item, const MethodInfo* method);
#define List_1_Remove_m17633(__this, ___item, method) (( bool (*) (List_1_t673 *, UILineInfo_t529 , const MethodInfo*))List_1_Remove_m17633_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17634_gshared (List_1_t673 * __this, Predicate_1_t2405 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17634(__this, ___match, method) (( int32_t (*) (List_1_t673 *, Predicate_1_t2405 *, const MethodInfo*))List_1_RemoveAll_m17634_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17635_gshared (List_1_t673 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17635(__this, ___index, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17635_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m17636_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_Reverse_m17636(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_Reverse_m17636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m17637_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_Sort_m17637(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_Sort_m17637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17638_gshared (List_1_t673 * __this, Comparison_1_t2408 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17638(__this, ___comparison, method) (( void (*) (List_1_t673 *, Comparison_1_t2408 *, const MethodInfo*))List_1_Sort_m17638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t801* List_1_ToArray_m17639_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_ToArray_m17639(__this, method) (( UILineInfoU5BU5D_t801* (*) (List_1_t673 *, const MethodInfo*))List_1_ToArray_m17639_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m17640_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17640(__this, method) (( void (*) (List_1_t673 *, const MethodInfo*))List_1_TrimExcess_m17640_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17641_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17641(__this, method) (( int32_t (*) (List_1_t673 *, const MethodInfo*))List_1_get_Capacity_m17641_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17642_gshared (List_1_t673 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17642(__this, ___value, method) (( void (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17642_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m17643_gshared (List_1_t673 * __this, const MethodInfo* method);
#define List_1_get_Count_m17643(__this, method) (( int32_t (*) (List_1_t673 *, const MethodInfo*))List_1_get_Count_m17643_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t529  List_1_get_Item_m17644_gshared (List_1_t673 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17644(__this, ___index, method) (( UILineInfo_t529  (*) (List_1_t673 *, int32_t, const MethodInfo*))List_1_get_Item_m17644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17645_gshared (List_1_t673 * __this, int32_t ___index, UILineInfo_t529  ___value, const MethodInfo* method);
#define List_1_set_Item_m17645(__this, ___index, ___value, method) (( void (*) (List_1_t673 *, int32_t, UILineInfo_t529 , const MethodInfo*))List_1_set_Item_m17645_gshared)(__this, ___index, ___value, method)
