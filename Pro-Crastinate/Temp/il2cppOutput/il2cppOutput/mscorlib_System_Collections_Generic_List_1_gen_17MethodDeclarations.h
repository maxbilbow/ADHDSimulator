﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t397;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t2737;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t395;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2736;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t539;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2254;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2255;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2257;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2474_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1__ctor_m2474(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1__ctor_m2474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15378_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15378(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1__ctor_m15378_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4059_gshared (List_1_t397 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4059(__this, ___capacity, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1__ctor_m4059_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m15379_gshared (List_1_t397 * __this, UIVertexU5BU5D_t395* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m15379(__this, ___data, ___size, method) (( void (*) (List_1_t397 *, UIVertexU5BU5D_t395*, int32_t, const MethodInfo*))List_1__ctor_m15379_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m15380_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15380(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15380_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15381_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15381(__this, method) (( Object_t* (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15381_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15382_gshared (List_1_t397 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15382(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t397 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15382_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15383_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15383(__this, method) (( Object_t * (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15383_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15384_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15384(__this, ___item, method) (( int32_t (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15384_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15385_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15385(__this, ___item, method) (( bool (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15385_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15386_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15386(__this, ___item, method) (( int32_t (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15386_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15387_gshared (List_1_t397 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15387(__this, ___index, ___item, method) (( void (*) (List_1_t397 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15387_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15388_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15388(__this, ___item, method) (( void (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15388_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15389_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15389(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15389_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15390_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15390(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15390_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15391_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15391(__this, method) (( Object_t * (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15391_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15392_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15392(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15392_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15393_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15393(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15393_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15394_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15394(__this, ___index, method) (( Object_t * (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15394_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15395_gshared (List_1_t397 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15395(__this, ___index, ___value, method) (( void (*) (List_1_t397 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15395_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m15396_gshared (List_1_t397 * __this, UIVertex_t401  ___item, const MethodInfo* method);
#define List_1_Add_m15396(__this, ___item, method) (( void (*) (List_1_t397 *, UIVertex_t401 , const MethodInfo*))List_1_Add_m15396_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15397_gshared (List_1_t397 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15397(__this, ___newCount, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15397_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15398_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15398(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15398_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15399_gshared (List_1_t397 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15399(__this, ___enumerable, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15399_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15400_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15400(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_AddRange_m15400_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2254 * List_1_AsReadOnly_m15401_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15401(__this, method) (( ReadOnlyCollection_1_t2254 * (*) (List_1_t397 *, const MethodInfo*))List_1_AsReadOnly_m15401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m15402_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_Clear_m15402(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_Clear_m15402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m15403_gshared (List_1_t397 * __this, UIVertex_t401  ___item, const MethodInfo* method);
#define List_1_Contains_m15403(__this, ___item, method) (( bool (*) (List_1_t397 *, UIVertex_t401 , const MethodInfo*))List_1_Contains_m15403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15404_gshared (List_1_t397 * __this, UIVertexU5BU5D_t395* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15404(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t397 *, UIVertexU5BU5D_t395*, int32_t, const MethodInfo*))List_1_CopyTo_m15404_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Exists(System.Predicate`1<T>)
extern "C" bool List_1_Exists_m15405_gshared (List_1_t397 * __this, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_Exists_m15405(__this, ___match, method) (( bool (*) (List_1_t397 *, Predicate_1_t2255 *, const MethodInfo*))List_1_Exists_m15405_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t401  List_1_Find_m15406_gshared (List_1_t397 * __this, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_Find_m15406(__this, ___match, method) (( UIVertex_t401  (*) (List_1_t397 *, Predicate_1_t2255 *, const MethodInfo*))List_1_Find_m15406_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15407_gshared (Object_t * __this /* static, unused */, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15407(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2255 *, const MethodInfo*))List_1_CheckMatch_m15407_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t397 * List_1_FindAll_m15408_gshared (List_1_t397 * __this, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_FindAll_m15408(__this, ___match, method) (( List_1_t397 * (*) (List_1_t397 *, Predicate_1_t2255 *, const MethodInfo*))List_1_FindAll_m15408_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t397 * List_1_FindAllStackBits_m15409_gshared (List_1_t397 * __this, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m15409(__this, ___match, method) (( List_1_t397 * (*) (List_1_t397 *, Predicate_1_t2255 *, const MethodInfo*))List_1_FindAllStackBits_m15409_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t397 * List_1_FindAllList_m15410_gshared (List_1_t397 * __this, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m15410(__this, ___match, method) (( List_1_t397 * (*) (List_1_t397 *, Predicate_1_t2255 *, const MethodInfo*))List_1_FindAllList_m15410_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15411_gshared (List_1_t397 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15411(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t397 *, int32_t, int32_t, Predicate_1_t2255 *, const MethodInfo*))List_1_GetIndex_m15411_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2256  List_1_GetEnumerator_m15412_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15412(__this, method) (( Enumerator_t2256  (*) (List_1_t397 *, const MethodInfo*))List_1_GetEnumerator_m15412_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15413_gshared (List_1_t397 * __this, UIVertex_t401  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15413(__this, ___item, method) (( int32_t (*) (List_1_t397 *, UIVertex_t401 , const MethodInfo*))List_1_IndexOf_m15413_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15414_gshared (List_1_t397 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15414(__this, ___start, ___delta, method) (( void (*) (List_1_t397 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15414_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15415_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15415(__this, ___index, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15415_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15416_gshared (List_1_t397 * __this, int32_t ___index, UIVertex_t401  ___item, const MethodInfo* method);
#define List_1_Insert_m15416(__this, ___index, ___item, method) (( void (*) (List_1_t397 *, int32_t, UIVertex_t401 , const MethodInfo*))List_1_Insert_m15416_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15417_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15417(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15417_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m15418_gshared (List_1_t397 * __this, UIVertex_t401  ___item, const MethodInfo* method);
#define List_1_Remove_m15418(__this, ___item, method) (( bool (*) (List_1_t397 *, UIVertex_t401 , const MethodInfo*))List_1_Remove_m15418_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15419_gshared (List_1_t397 * __this, Predicate_1_t2255 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15419(__this, ___match, method) (( int32_t (*) (List_1_t397 *, Predicate_1_t2255 *, const MethodInfo*))List_1_RemoveAll_m15419_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15420_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15420(__this, ___index, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m15421_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_Reverse_m15421(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_Reverse_m15421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m15422_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_Sort_m15422(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_Sort_m15422_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15423_gshared (List_1_t397 * __this, Comparison_1_t2257 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15423(__this, ___comparison, method) (( void (*) (List_1_t397 *, Comparison_1_t2257 *, const MethodInfo*))List_1_Sort_m15423_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t395* List_1_ToArray_m2536_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_ToArray_m2536(__this, method) (( UIVertexU5BU5D_t395* (*) (List_1_t397 *, const MethodInfo*))List_1_ToArray_m2536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m15424_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15424(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_TrimExcess_m15424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2409_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m2409(__this, method) (( int32_t (*) (List_1_t397 *, const MethodInfo*))List_1_get_Capacity_m2409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2410_gshared (List_1_t397 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m2410(__this, ___value, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_set_Capacity_m2410_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m15425_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_get_Count_m15425(__this, method) (( int32_t (*) (List_1_t397 *, const MethodInfo*))List_1_get_Count_m15425_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t401  List_1_get_Item_m15426_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15426(__this, ___index, method) (( UIVertex_t401  (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_get_Item_m15426_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15427_gshared (List_1_t397 * __this, int32_t ___index, UIVertex_t401  ___value, const MethodInfo* method);
#define List_1_set_Item_m15427(__this, ___index, ___value, method) (( void (*) (List_1_t397 *, int32_t, UIVertex_t401 , const MethodInfo*))List_1_set_Item_m15427_gshared)(__this, ___index, ___value, method)
