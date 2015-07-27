#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1967;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2006;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1966;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11366_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11366(__this, method) (( void (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1__ctor_m11366_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11367_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11367(__this, method) (( bool (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11367_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11368_gshared (Collection_1_t1967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11368(__this, ___array, ___index, method) (( void (*) (Collection_1_t1967 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11368_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11369_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11369(__this, method) (( Object_t * (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11369_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11370_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11370(__this, ___value, method) (( int32_t (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11370_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11371_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11371(__this, ___value, method) (( bool (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11371_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11372_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11372(__this, ___value, method) (( int32_t (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11372_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11373_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11373(__this, ___index, ___value, method) (( void (*) (Collection_1_t1967 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11373_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11374_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11374(__this, ___value, method) (( void (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11374_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11375_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11375(__this, method) (( bool (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11375_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11376_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11376(__this, method) (( Object_t * (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11376_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11377_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11377(__this, method) (( bool (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11377_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11378_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11378(__this, method) (( bool (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11378_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11379_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11379(__this, ___index, method) (( Object_t * (*) (Collection_1_t1967 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11379_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11380_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11380(__this, ___index, ___value, method) (( void (*) (Collection_1_t1967 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11380_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11381_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11381(__this, ___item, method) (( void (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_Add_m11381_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11382_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11382(__this, method) (( void (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_Clear_m11382_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11383_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11383(__this, method) (( void (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_ClearItems_m11383_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11384_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11384(__this, ___item, method) (( bool (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11384_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11385_gshared (Collection_1_t1967 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11385(__this, ___array, ___index, method) (( void (*) (Collection_1_t1967 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11385_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11386_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11386(__this, method) (( Object_t* (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_GetEnumerator_m11386_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11387_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11387(__this, ___item, method) (( int32_t (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11387_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11388_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11388(__this, ___index, ___item, method) (( void (*) (Collection_1_t1967 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11388_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11389_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11389(__this, ___index, ___item, method) (( void (*) (Collection_1_t1967 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11389_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11390_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11390(__this, ___item, method) (( bool (*) (Collection_1_t1967 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11390_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11391_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11391(__this, ___index, method) (( void (*) (Collection_1_t1967 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11391_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11392_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11392(__this, ___index, method) (( void (*) (Collection_1_t1967 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11392_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11393_gshared (Collection_1_t1967 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11393(__this, method) (( int32_t (*) (Collection_1_t1967 *, const MethodInfo*))Collection_1_get_Count_m11393_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11394_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11394(__this, ___index, method) (( Object_t * (*) (Collection_1_t1967 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11394_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11395_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11395(__this, ___index, ___value, method) (( void (*) (Collection_1_t1967 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11395_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11396_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11396(__this, ___index, ___item, method) (( void (*) (Collection_1_t1967 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11396_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11397_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11397(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11397_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11398_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11398(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11398_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11399_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11399(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11399_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11400_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11400(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11400_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11401_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11401(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11401_gshared)(__this /* static, unused */, ___list, method)
