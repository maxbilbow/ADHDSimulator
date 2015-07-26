#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t775;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t769;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t2922;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t2515;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t2923;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t2924;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t2517;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t873;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t2519;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m4131(__this, method) (( void (*) (List_1_t775 *, const MethodInfo*))List_1__ctor_m4060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19310(__this, ___collection, method) (( void (*) (List_1_t775 *, Object_t*, const MethodInfo*))List_1__ctor_m11138_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m19311(__this, ___capacity, method) (( void (*) (List_1_t775 *, int32_t, const MethodInfo*))List_1__ctor_m11140_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(T[],System.Int32)
#define List_1__ctor_m19312(__this, ___data, ___size, method) (( void (*) (List_1_t775 *, BaseInvokableCallU5BU5D_t2515*, int32_t, const MethodInfo*))List_1__ctor_m11142_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m19313(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19314(__this, method) (( Object_t* (*) (List_1_t775 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19315(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t775 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19316(__this, method) (( Object_t * (*) (List_1_t775 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19317(__this, ___item, method) (( int32_t (*) (List_1_t775 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19318(__this, ___item, method) (( bool (*) (List_1_t775 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11154_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19319(__this, ___item, method) (( int32_t (*) (List_1_t775 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19320(__this, ___index, ___item, method) (( void (*) (List_1_t775 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19321(__this, ___item, method) (( void (*) (List_1_t775 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11160_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19322(__this, method) (( bool (*) (List_1_t775 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19323(__this, method) (( bool (*) (List_1_t775 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11164_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19324(__this, method) (( Object_t * (*) (List_1_t775 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19325(__this, method) (( bool (*) (List_1_t775 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19326(__this, method) (( bool (*) (List_1_t775 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11170_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19327(__this, ___index, method) (( Object_t * (*) (List_1_t775 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19328(__this, ___index, ___value, method) (( void (*) (List_1_t775 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11174_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m19329(__this, ___item, method) (( void (*) (List_1_t775 *, BaseInvokableCall_t769 *, const MethodInfo*))List_1_Add_m11176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19330(__this, ___newCount, method) (( void (*) (List_1_t775 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11178_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19331(__this, ___collection, method) (( void (*) (List_1_t775 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11180_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19332(__this, ___enumerable, method) (( void (*) (List_1_t775 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11182_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m4134(__this, ___collection, method) (( void (*) (List_1_t775 *, Object_t*, const MethodInfo*))List_1_AddRange_m11184_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m19333(__this, method) (( ReadOnlyCollection_1_t2517 * (*) (List_1_t775 *, const MethodInfo*))List_1_AsReadOnly_m11186_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m19334(__this, method) (( void (*) (List_1_t775 *, const MethodInfo*))List_1_Clear_m11188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m19335(__this, ___item, method) (( bool (*) (List_1_t775 *, BaseInvokableCall_t769 *, const MethodInfo*))List_1_Contains_m11190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19336(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t775 *, BaseInvokableCallU5BU5D_t2515*, int32_t, const MethodInfo*))List_1_CopyTo_m11192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m19337(__this, ___match, method) (( bool (*) (List_1_t775 *, Predicate_1_t873 *, const MethodInfo*))List_1_Exists_m11193_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m19338(__this, ___match, method) (( BaseInvokableCall_t769 * (*) (List_1_t775 *, Predicate_1_t873 *, const MethodInfo*))List_1_Find_m11195_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19339(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t873 *, const MethodInfo*))List_1_CheckMatch_m11197_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m19340(__this, ___match, method) (( List_1_t775 * (*) (List_1_t775 *, Predicate_1_t873 *, const MethodInfo*))List_1_FindAll_m11199_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m19341(__this, ___match, method) (( List_1_t775 * (*) (List_1_t775 *, Predicate_1_t873 *, const MethodInfo*))List_1_FindAllStackBits_m11201_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m19342(__this, ___match, method) (( List_1_t775 * (*) (List_1_t775 *, Predicate_1_t873 *, const MethodInfo*))List_1_FindAllList_m11203_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19343(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t775 *, int32_t, int32_t, Predicate_1_t873 *, const MethodInfo*))List_1_GetIndex_m11205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m19344(__this, method) (( Enumerator_t2518  (*) (List_1_t775 *, const MethodInfo*))List_1_GetEnumerator_m11206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m19345(__this, ___item, method) (( int32_t (*) (List_1_t775 *, BaseInvokableCall_t769 *, const MethodInfo*))List_1_IndexOf_m11208_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19346(__this, ___start, ___delta, method) (( void (*) (List_1_t775 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11210_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19347(__this, ___index, method) (( void (*) (List_1_t775 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11212_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m19348(__this, ___index, ___item, method) (( void (*) (List_1_t775 *, int32_t, BaseInvokableCall_t769 *, const MethodInfo*))List_1_Insert_m11214_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19349(__this, ___collection, method) (( void (*) (List_1_t775 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11216_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m19350(__this, ___item, method) (( bool (*) (List_1_t775 *, BaseInvokableCall_t769 *, const MethodInfo*))List_1_Remove_m11218_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m4133(__this, ___match, method) (( int32_t (*) (List_1_t775 *, Predicate_1_t873 *, const MethodInfo*))List_1_RemoveAll_m11220_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19351(__this, ___index, method) (( void (*) (List_1_t775 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11222_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m19352(__this, method) (( void (*) (List_1_t775 *, const MethodInfo*))List_1_Reverse_m11224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m19353(__this, method) (( void (*) (List_1_t775 *, const MethodInfo*))List_1_Sort_m11226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19354(__this, ___comparison, method) (( void (*) (List_1_t775 *, Comparison_1_t2519 *, const MethodInfo*))List_1_Sort_m11228_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m19355(__this, method) (( BaseInvokableCallU5BU5D_t2515* (*) (List_1_t775 *, const MethodInfo*))List_1_ToArray_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m19356(__this, method) (( void (*) (List_1_t775 *, const MethodInfo*))List_1_TrimExcess_m11231_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m19357(__this, method) (( int32_t (*) (List_1_t775 *, const MethodInfo*))List_1_get_Capacity_m11233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19358(__this, ___value, method) (( void (*) (List_1_t775 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11235_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m19359(__this, method) (( int32_t (*) (List_1_t775 *, const MethodInfo*))List_1_get_Count_m11237_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m19360(__this, ___index, method) (( BaseInvokableCall_t769 * (*) (List_1_t775 *, int32_t, const MethodInfo*))List_1_get_Item_m11239_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m19361(__this, ___index, ___value, method) (( void (*) (List_1_t775 *, int32_t, BaseInvokableCall_t769 *, const MethodInfo*))List_1_set_Item_m11241_gshared)(__this, ___index, ___value, method)
