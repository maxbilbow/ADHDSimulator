#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t392;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t2763;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t389;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2762;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t532;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2205;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2206;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2208;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2469_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1__ctor_m2469(__this, method) (( void (*) (List_1_t392 *, const MethodInfo*))List_1__ctor_m2469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15104_gshared (List_1_t392 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15104(__this, ___collection, method) (( void (*) (List_1_t392 *, Object_t*, const MethodInfo*))List_1__ctor_m15104_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4033_gshared (List_1_t392 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4033(__this, ___capacity, method) (( void (*) (List_1_t392 *, int32_t, const MethodInfo*))List_1__ctor_m4033_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m15105_gshared (List_1_t392 * __this, UIVertexU5BU5D_t389* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m15105(__this, ___data, ___size, method) (( void (*) (List_1_t392 *, UIVertexU5BU5D_t389*, int32_t, const MethodInfo*))List_1__ctor_m15105_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m15106_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15106(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15106_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15107_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15107(__this, method) (( Object_t* (*) (List_1_t392 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15108_gshared (List_1_t392 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15108(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t392 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15108_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15109_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15109(__this, method) (( Object_t * (*) (List_1_t392 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15110_gshared (List_1_t392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15110(__this, ___item, method) (( int32_t (*) (List_1_t392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15110_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15111_gshared (List_1_t392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15111(__this, ___item, method) (( bool (*) (List_1_t392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15111_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15112_gshared (List_1_t392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15112(__this, ___item, method) (( int32_t (*) (List_1_t392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15113_gshared (List_1_t392 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15113(__this, ___index, ___item, method) (( void (*) (List_1_t392 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15113_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15114_gshared (List_1_t392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15114(__this, ___item, method) (( void (*) (List_1_t392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15115_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15115(__this, method) (( bool (*) (List_1_t392 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15116_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15116(__this, method) (( bool (*) (List_1_t392 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15116_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15117_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15117(__this, method) (( Object_t * (*) (List_1_t392 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15117_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15118_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15118(__this, method) (( bool (*) (List_1_t392 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15118_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15119_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15119(__this, method) (( bool (*) (List_1_t392 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15119_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15120_gshared (List_1_t392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15120(__this, ___index, method) (( Object_t * (*) (List_1_t392 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15121_gshared (List_1_t392 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15121(__this, ___index, ___value, method) (( void (*) (List_1_t392 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15121_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m15122_gshared (List_1_t392 * __this, UIVertex_t390  ___item, const MethodInfo* method);
#define List_1_Add_m15122(__this, ___item, method) (( void (*) (List_1_t392 *, UIVertex_t390 , const MethodInfo*))List_1_Add_m15122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15123_gshared (List_1_t392 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15123(__this, ___newCount, method) (( void (*) (List_1_t392 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15123_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15124_gshared (List_1_t392 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15124(__this, ___collection, method) (( void (*) (List_1_t392 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15124_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15125_gshared (List_1_t392 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15125(__this, ___enumerable, method) (( void (*) (List_1_t392 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15125_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15126_gshared (List_1_t392 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15126(__this, ___collection, method) (( void (*) (List_1_t392 *, Object_t*, const MethodInfo*))List_1_AddRange_m15126_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2205 * List_1_AsReadOnly_m15127_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15127(__this, method) (( ReadOnlyCollection_1_t2205 * (*) (List_1_t392 *, const MethodInfo*))List_1_AsReadOnly_m15127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m15128_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_Clear_m15128(__this, method) (( void (*) (List_1_t392 *, const MethodInfo*))List_1_Clear_m15128_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m15129_gshared (List_1_t392 * __this, UIVertex_t390  ___item, const MethodInfo* method);
#define List_1_Contains_m15129(__this, ___item, method) (( bool (*) (List_1_t392 *, UIVertex_t390 , const MethodInfo*))List_1_Contains_m15129_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15130_gshared (List_1_t392 * __this, UIVertexU5BU5D_t389* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15130(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t392 *, UIVertexU5BU5D_t389*, int32_t, const MethodInfo*))List_1_CopyTo_m15130_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m15131_gshared (List_1_t392 * __this, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_Exists_m15131(__this, ___match, method) (( bool (*) (List_1_t392 *, Predicate_1_t2206 *, const MethodInfo*))List_1_Exists_m15131_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t390  List_1_Find_m15132_gshared (List_1_t392 * __this, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_Find_m15132(__this, ___match, method) (( UIVertex_t390  (*) (List_1_t392 *, Predicate_1_t2206 *, const MethodInfo*))List_1_Find_m15132_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15133_gshared (Object_t * __this /* static, unused */, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15133(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2206 *, const MethodInfo*))List_1_CheckMatch_m15133_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t392 * List_1_FindAll_m15134_gshared (List_1_t392 * __this, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_FindAll_m15134(__this, ___match, method) (( List_1_t392 * (*) (List_1_t392 *, Predicate_1_t2206 *, const MethodInfo*))List_1_FindAll_m15134_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t392 * List_1_FindAllStackBits_m15135_gshared (List_1_t392 * __this, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m15135(__this, ___match, method) (( List_1_t392 * (*) (List_1_t392 *, Predicate_1_t2206 *, const MethodInfo*))List_1_FindAllStackBits_m15135_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t392 * List_1_FindAllList_m15136_gshared (List_1_t392 * __this, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m15136(__this, ___match, method) (( List_1_t392 * (*) (List_1_t392 *, Predicate_1_t2206 *, const MethodInfo*))List_1_FindAllList_m15136_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15137_gshared (List_1_t392 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15137(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t392 *, int32_t, int32_t, Predicate_1_t2206 *, const MethodInfo*))List_1_GetIndex_m15137_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2207  List_1_GetEnumerator_m15138_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15138(__this, method) (( Enumerator_t2207  (*) (List_1_t392 *, const MethodInfo*))List_1_GetEnumerator_m15138_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15139_gshared (List_1_t392 * __this, UIVertex_t390  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15139(__this, ___item, method) (( int32_t (*) (List_1_t392 *, UIVertex_t390 , const MethodInfo*))List_1_IndexOf_m15139_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15140_gshared (List_1_t392 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15140(__this, ___start, ___delta, method) (( void (*) (List_1_t392 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15140_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15141_gshared (List_1_t392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15141(__this, ___index, method) (( void (*) (List_1_t392 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15141_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15142_gshared (List_1_t392 * __this, int32_t ___index, UIVertex_t390  ___item, const MethodInfo* method);
#define List_1_Insert_m15142(__this, ___index, ___item, method) (( void (*) (List_1_t392 *, int32_t, UIVertex_t390 , const MethodInfo*))List_1_Insert_m15142_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15143_gshared (List_1_t392 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15143(__this, ___collection, method) (( void (*) (List_1_t392 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15143_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m15144_gshared (List_1_t392 * __this, UIVertex_t390  ___item, const MethodInfo* method);
#define List_1_Remove_m15144(__this, ___item, method) (( bool (*) (List_1_t392 *, UIVertex_t390 , const MethodInfo*))List_1_Remove_m15144_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15145_gshared (List_1_t392 * __this, Predicate_1_t2206 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15145(__this, ___match, method) (( int32_t (*) (List_1_t392 *, Predicate_1_t2206 *, const MethodInfo*))List_1_RemoveAll_m15145_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15146_gshared (List_1_t392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15146(__this, ___index, method) (( void (*) (List_1_t392 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15146_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m15147_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_Reverse_m15147(__this, method) (( void (*) (List_1_t392 *, const MethodInfo*))List_1_Reverse_m15147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m15148_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_Sort_m15148(__this, method) (( void (*) (List_1_t392 *, const MethodInfo*))List_1_Sort_m15148_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15149_gshared (List_1_t392 * __this, Comparison_1_t2208 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15149(__this, ___comparison, method) (( void (*) (List_1_t392 *, Comparison_1_t2208 *, const MethodInfo*))List_1_Sort_m15149_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t389* List_1_ToArray_m2518_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_ToArray_m2518(__this, method) (( UIVertexU5BU5D_t389* (*) (List_1_t392 *, const MethodInfo*))List_1_ToArray_m2518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m15150_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15150(__this, method) (( void (*) (List_1_t392 *, const MethodInfo*))List_1_TrimExcess_m15150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2392_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m2392(__this, method) (( int32_t (*) (List_1_t392 *, const MethodInfo*))List_1_get_Capacity_m2392_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2393_gshared (List_1_t392 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m2393(__this, ___value, method) (( void (*) (List_1_t392 *, int32_t, const MethodInfo*))List_1_set_Capacity_m2393_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m15151_gshared (List_1_t392 * __this, const MethodInfo* method);
#define List_1_get_Count_m15151(__this, method) (( int32_t (*) (List_1_t392 *, const MethodInfo*))List_1_get_Count_m15151_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t390  List_1_get_Item_m15152_gshared (List_1_t392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15152(__this, ___index, method) (( UIVertex_t390  (*) (List_1_t392 *, int32_t, const MethodInfo*))List_1_get_Item_m15152_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15153_gshared (List_1_t392 * __this, int32_t ___index, UIVertex_t390  ___value, const MethodInfo* method);
#define List_1_set_Item_m15153(__this, ___index, ___value, method) (( void (*) (List_1_t392 *, int32_t, UIVertex_t390 , const MethodInfo*))List_1_set_Item_m15153_gshared)(__this, ___index, ___value, method)
