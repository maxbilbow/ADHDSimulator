#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t325;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t2716;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t2121;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t2717;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t2718;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t2125;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2129;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t292;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m2277_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1__ctor_m2277(__this, method) (( void (*) (List_1_t325 *, const MethodInfo*))List_1__ctor_m2277_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13857_gshared (List_1_t325 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13857(__this, ___collection, method) (( void (*) (List_1_t325 *, Object_t*, const MethodInfo*))List_1__ctor_m13857_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13858_gshared (List_1_t325 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13858(__this, ___capacity, method) (( void (*) (List_1_t325 *, int32_t, const MethodInfo*))List_1__ctor_m13858_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m13859_gshared (List_1_t325 * __this, RaycastResultU5BU5D_t2121* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m13859(__this, ___data, ___size, method) (( void (*) (List_1_t325 *, RaycastResultU5BU5D_t2121*, int32_t, const MethodInfo*))List_1__ctor_m13859_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m13860_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13860(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13860_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13861_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13861(__this, method) (( Object_t* (*) (List_1_t325 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13862_gshared (List_1_t325 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13862(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t325 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13862_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13863_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13863(__this, method) (( Object_t * (*) (List_1_t325 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13863_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13864_gshared (List_1_t325 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13864(__this, ___item, method) (( int32_t (*) (List_1_t325 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13865_gshared (List_1_t325 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13865(__this, ___item, method) (( bool (*) (List_1_t325 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13865_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13866_gshared (List_1_t325 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13866(__this, ___item, method) (( int32_t (*) (List_1_t325 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13866_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13867_gshared (List_1_t325 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13867(__this, ___index, ___item, method) (( void (*) (List_1_t325 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13867_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13868_gshared (List_1_t325 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13868(__this, ___item, method) (( void (*) (List_1_t325 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13868_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13869_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13869(__this, method) (( bool (*) (List_1_t325 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13870_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13870(__this, method) (( bool (*) (List_1_t325 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13870_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13871_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13871(__this, method) (( Object_t * (*) (List_1_t325 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13872_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13872(__this, method) (( bool (*) (List_1_t325 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13873_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13873(__this, method) (( bool (*) (List_1_t325 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13873_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13874_gshared (List_1_t325 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13874(__this, ___index, method) (( Object_t * (*) (List_1_t325 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13874_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13875_gshared (List_1_t325 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13875(__this, ___index, ___value, method) (( void (*) (List_1_t325 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13875_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m13876_gshared (List_1_t325 * __this, RaycastResult_t320  ___item, const MethodInfo* method);
#define List_1_Add_m13876(__this, ___item, method) (( void (*) (List_1_t325 *, RaycastResult_t320 , const MethodInfo*))List_1_Add_m13876_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13877_gshared (List_1_t325 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13877(__this, ___newCount, method) (( void (*) (List_1_t325 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13877_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13878_gshared (List_1_t325 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13878(__this, ___collection, method) (( void (*) (List_1_t325 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13878_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13879_gshared (List_1_t325 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13879(__this, ___enumerable, method) (( void (*) (List_1_t325 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13879_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13880_gshared (List_1_t325 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13880(__this, ___collection, method) (( void (*) (List_1_t325 *, Object_t*, const MethodInfo*))List_1_AddRange_m13880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2125 * List_1_AsReadOnly_m13881_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13881(__this, method) (( ReadOnlyCollection_1_t2125 * (*) (List_1_t325 *, const MethodInfo*))List_1_AsReadOnly_m13881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m13882_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_Clear_m13882(__this, method) (( void (*) (List_1_t325 *, const MethodInfo*))List_1_Clear_m13882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m13883_gshared (List_1_t325 * __this, RaycastResult_t320  ___item, const MethodInfo* method);
#define List_1_Contains_m13883(__this, ___item, method) (( bool (*) (List_1_t325 *, RaycastResult_t320 , const MethodInfo*))List_1_Contains_m13883_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13884_gshared (List_1_t325 * __this, RaycastResultU5BU5D_t2121* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13884(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t325 *, RaycastResultU5BU5D_t2121*, int32_t, const MethodInfo*))List_1_CopyTo_m13884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m13885_gshared (List_1_t325 * __this, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_Exists_m13885(__this, ___match, method) (( bool (*) (List_1_t325 *, Predicate_1_t2129 *, const MethodInfo*))List_1_Exists_m13885_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t320  List_1_Find_m13886_gshared (List_1_t325 * __this, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_Find_m13886(__this, ___match, method) (( RaycastResult_t320  (*) (List_1_t325 *, Predicate_1_t2129 *, const MethodInfo*))List_1_Find_m13886_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13887_gshared (Object_t * __this /* static, unused */, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13887(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2129 *, const MethodInfo*))List_1_CheckMatch_m13887_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t325 * List_1_FindAll_m13888_gshared (List_1_t325 * __this, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_FindAll_m13888(__this, ___match, method) (( List_1_t325 * (*) (List_1_t325 *, Predicate_1_t2129 *, const MethodInfo*))List_1_FindAll_m13888_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t325 * List_1_FindAllStackBits_m13889_gshared (List_1_t325 * __this, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m13889(__this, ___match, method) (( List_1_t325 * (*) (List_1_t325 *, Predicate_1_t2129 *, const MethodInfo*))List_1_FindAllStackBits_m13889_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t325 * List_1_FindAllList_m13890_gshared (List_1_t325 * __this, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m13890(__this, ___match, method) (( List_1_t325 * (*) (List_1_t325 *, Predicate_1_t2129 *, const MethodInfo*))List_1_FindAllList_m13890_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13891_gshared (List_1_t325 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13891(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t325 *, int32_t, int32_t, Predicate_1_t2129 *, const MethodInfo*))List_1_GetIndex_m13891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2123  List_1_GetEnumerator_m13892_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13892(__this, method) (( Enumerator_t2123  (*) (List_1_t325 *, const MethodInfo*))List_1_GetEnumerator_m13892_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13893_gshared (List_1_t325 * __this, RaycastResult_t320  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13893(__this, ___item, method) (( int32_t (*) (List_1_t325 *, RaycastResult_t320 , const MethodInfo*))List_1_IndexOf_m13893_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13894_gshared (List_1_t325 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13894(__this, ___start, ___delta, method) (( void (*) (List_1_t325 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13894_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13895_gshared (List_1_t325 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13895(__this, ___index, method) (( void (*) (List_1_t325 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13895_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13896_gshared (List_1_t325 * __this, int32_t ___index, RaycastResult_t320  ___item, const MethodInfo* method);
#define List_1_Insert_m13896(__this, ___index, ___item, method) (( void (*) (List_1_t325 *, int32_t, RaycastResult_t320 , const MethodInfo*))List_1_Insert_m13896_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13897_gshared (List_1_t325 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13897(__this, ___collection, method) (( void (*) (List_1_t325 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13897_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m13898_gshared (List_1_t325 * __this, RaycastResult_t320  ___item, const MethodInfo* method);
#define List_1_Remove_m13898(__this, ___item, method) (( bool (*) (List_1_t325 *, RaycastResult_t320 , const MethodInfo*))List_1_Remove_m13898_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13899_gshared (List_1_t325 * __this, Predicate_1_t2129 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13899(__this, ___match, method) (( int32_t (*) (List_1_t325 *, Predicate_1_t2129 *, const MethodInfo*))List_1_RemoveAll_m13899_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13900_gshared (List_1_t325 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13900(__this, ___index, method) (( void (*) (List_1_t325 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13900_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m13901_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_Reverse_m13901(__this, method) (( void (*) (List_1_t325 *, const MethodInfo*))List_1_Reverse_m13901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m13902_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_Sort_m13902(__this, method) (( void (*) (List_1_t325 *, const MethodInfo*))List_1_Sort_m13902_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m2239_gshared (List_1_t325 * __this, Comparison_1_t292 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m2239(__this, ___comparison, method) (( void (*) (List_1_t325 *, Comparison_1_t292 *, const MethodInfo*))List_1_Sort_m2239_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t2121* List_1_ToArray_m13903_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_ToArray_m13903(__this, method) (( RaycastResultU5BU5D_t2121* (*) (List_1_t325 *, const MethodInfo*))List_1_ToArray_m13903_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m13904_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13904(__this, method) (( void (*) (List_1_t325 *, const MethodInfo*))List_1_TrimExcess_m13904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13905_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13905(__this, method) (( int32_t (*) (List_1_t325 *, const MethodInfo*))List_1_get_Capacity_m13905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13906_gshared (List_1_t325 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13906(__this, ___value, method) (( void (*) (List_1_t325 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m13907_gshared (List_1_t325 * __this, const MethodInfo* method);
#define List_1_get_Count_m13907(__this, method) (( int32_t (*) (List_1_t325 *, const MethodInfo*))List_1_get_Count_m13907_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t320  List_1_get_Item_m13908_gshared (List_1_t325 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13908(__this, ___index, method) (( RaycastResult_t320  (*) (List_1_t325 *, int32_t, const MethodInfo*))List_1_get_Item_m13908_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13909_gshared (List_1_t325 * __this, int32_t ___index, RaycastResult_t320  ___value, const MethodInfo* method);
#define List_1_set_Item_m13909(__this, ___index, ___value, method) (( void (*) (List_1_t325 *, int32_t, RaycastResult_t320 , const MethodInfo*))List_1_set_Item_m13909_gshared)(__this, ___index, ___value, method)
