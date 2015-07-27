#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t332;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t2717;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t2170;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t2718;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t2719;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t2173;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2178;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t300;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m2289_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1__ctor_m2289(__this, method) (( void (*) (List_1_t332 *, const MethodInfo*))List_1__ctor_m2289_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14117_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14117(__this, ___collection, method) (( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))List_1__ctor_m14117_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14118_gshared (List_1_t332 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14118(__this, ___capacity, method) (( void (*) (List_1_t332 *, int32_t, const MethodInfo*))List_1__ctor_m14118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m14119_gshared (List_1_t332 * __this, RaycastResultU5BU5D_t2170* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m14119(__this, ___data, ___size, method) (( void (*) (List_1_t332 *, RaycastResultU5BU5D_t2170*, int32_t, const MethodInfo*))List_1__ctor_m14119_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m14120_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14120(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14120_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14121_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14121(__this, method) (( Object_t* (*) (List_1_t332 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14121_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14122_gshared (List_1_t332 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14122(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t332 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14122_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14123_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14123(__this, method) (( Object_t * (*) (List_1_t332 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14123_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14124_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14124(__this, ___item, method) (( int32_t (*) (List_1_t332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14124_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14125_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14125(__this, ___item, method) (( bool (*) (List_1_t332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14125_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14126_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14126(__this, ___item, method) (( int32_t (*) (List_1_t332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14127_gshared (List_1_t332 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14127(__this, ___index, ___item, method) (( void (*) (List_1_t332 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14128_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14128(__this, ___item, method) (( void (*) (List_1_t332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14128_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14129_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14129(__this, method) (( bool (*) (List_1_t332 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14129_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14130_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14130(__this, method) (( bool (*) (List_1_t332 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14130_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14131_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14131(__this, method) (( Object_t * (*) (List_1_t332 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14131_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14132_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14132(__this, method) (( bool (*) (List_1_t332 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14132_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14133_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14133(__this, method) (( bool (*) (List_1_t332 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14133_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14134_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14134(__this, ___index, method) (( Object_t * (*) (List_1_t332 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14134_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14135_gshared (List_1_t332 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14135(__this, ___index, ___value, method) (( void (*) (List_1_t332 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14135_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m14136_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method);
#define List_1_Add_m14136(__this, ___item, method) (( void (*) (List_1_t332 *, RaycastResult_t326 , const MethodInfo*))List_1_Add_m14136_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14137_gshared (List_1_t332 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14137(__this, ___newCount, method) (( void (*) (List_1_t332 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14137_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14138_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14138(__this, ___collection, method) (( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14138_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14139_gshared (List_1_t332 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14139(__this, ___enumerable, method) (( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14140_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14140(__this, ___collection, method) (( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))List_1_AddRange_m14140_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2173 * List_1_AsReadOnly_m14141_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14141(__this, method) (( ReadOnlyCollection_1_t2173 * (*) (List_1_t332 *, const MethodInfo*))List_1_AsReadOnly_m14141_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m14142_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_Clear_m14142(__this, method) (( void (*) (List_1_t332 *, const MethodInfo*))List_1_Clear_m14142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m14143_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method);
#define List_1_Contains_m14143(__this, ___item, method) (( bool (*) (List_1_t332 *, RaycastResult_t326 , const MethodInfo*))List_1_Contains_m14143_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14144_gshared (List_1_t332 * __this, RaycastResultU5BU5D_t2170* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14144(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t332 *, RaycastResultU5BU5D_t2170*, int32_t, const MethodInfo*))List_1_CopyTo_m14144_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m14145_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_Exists_m14145(__this, ___match, method) (( bool (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))List_1_Exists_m14145_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t326  List_1_Find_m14146_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_Find_m14146(__this, ___match, method) (( RaycastResult_t326  (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))List_1_Find_m14146_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14147_gshared (Object_t * __this /* static, unused */, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14147(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2178 *, const MethodInfo*))List_1_CheckMatch_m14147_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t332 * List_1_FindAll_m14148_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_FindAll_m14148(__this, ___match, method) (( List_1_t332 * (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))List_1_FindAll_m14148_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t332 * List_1_FindAllStackBits_m14149_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m14149(__this, ___match, method) (( List_1_t332 * (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))List_1_FindAllStackBits_m14149_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t332 * List_1_FindAllList_m14150_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m14150(__this, ___match, method) (( List_1_t332 * (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))List_1_FindAllList_m14150_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14151_gshared (List_1_t332 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14151(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t332 *, int32_t, int32_t, Predicate_1_t2178 *, const MethodInfo*))List_1_GetIndex_m14151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2172  List_1_GetEnumerator_m14152_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14152(__this, method) (( Enumerator_t2172  (*) (List_1_t332 *, const MethodInfo*))List_1_GetEnumerator_m14152_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14153_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14153(__this, ___item, method) (( int32_t (*) (List_1_t332 *, RaycastResult_t326 , const MethodInfo*))List_1_IndexOf_m14153_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14154_gshared (List_1_t332 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14154(__this, ___start, ___delta, method) (( void (*) (List_1_t332 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14154_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14155_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14155(__this, ___index, method) (( void (*) (List_1_t332 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14155_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14156_gshared (List_1_t332 * __this, int32_t ___index, RaycastResult_t326  ___item, const MethodInfo* method);
#define List_1_Insert_m14156(__this, ___index, ___item, method) (( void (*) (List_1_t332 *, int32_t, RaycastResult_t326 , const MethodInfo*))List_1_Insert_m14156_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14157_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14157(__this, ___collection, method) (( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14157_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m14158_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method);
#define List_1_Remove_m14158(__this, ___item, method) (( bool (*) (List_1_t332 *, RaycastResult_t326 , const MethodInfo*))List_1_Remove_m14158_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14159_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14159(__this, ___match, method) (( int32_t (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))List_1_RemoveAll_m14159_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14160_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14160(__this, ___index, method) (( void (*) (List_1_t332 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14160_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m14161_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_Reverse_m14161(__this, method) (( void (*) (List_1_t332 *, const MethodInfo*))List_1_Reverse_m14161_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m14162_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_Sort_m14162(__this, method) (( void (*) (List_1_t332 *, const MethodInfo*))List_1_Sort_m14162_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m2252_gshared (List_1_t332 * __this, Comparison_1_t300 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m2252(__this, ___comparison, method) (( void (*) (List_1_t332 *, Comparison_1_t300 *, const MethodInfo*))List_1_Sort_m2252_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t2170* List_1_ToArray_m14163_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_ToArray_m14163(__this, method) (( RaycastResultU5BU5D_t2170* (*) (List_1_t332 *, const MethodInfo*))List_1_ToArray_m14163_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m14164_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14164(__this, method) (( void (*) (List_1_t332 *, const MethodInfo*))List_1_TrimExcess_m14164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14165_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14165(__this, method) (( int32_t (*) (List_1_t332 *, const MethodInfo*))List_1_get_Capacity_m14165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14166_gshared (List_1_t332 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14166(__this, ___value, method) (( void (*) (List_1_t332 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14166_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m14167_gshared (List_1_t332 * __this, const MethodInfo* method);
#define List_1_get_Count_m14167(__this, method) (( int32_t (*) (List_1_t332 *, const MethodInfo*))List_1_get_Count_m14167_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t326  List_1_get_Item_m14168_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14168(__this, ___index, method) (( RaycastResult_t326  (*) (List_1_t332 *, int32_t, const MethodInfo*))List_1_get_Item_m14168_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14169_gshared (List_1_t332 * __this, int32_t ___index, RaycastResult_t326  ___value, const MethodInfo* method);
#define List_1_set_Item_m14169(__this, ___index, ___value, method) (( void (*) (List_1_t332 *, int32_t, RaycastResult_t326 , const MethodInfo*))List_1_set_Item_m14169_gshared)(__this, ___index, ___value, method)
