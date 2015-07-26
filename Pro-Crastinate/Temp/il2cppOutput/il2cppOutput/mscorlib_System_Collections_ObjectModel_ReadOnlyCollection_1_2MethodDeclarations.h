#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>
struct ReadOnlyCollection_1_t1966;
// System.Collections.Generic.List`1<System.String>
struct List_1_t13;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.List`1<System.String>>
struct IList_1_t1965;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.List`1<System.String>[]
struct List_1U5BU5D_t1964;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.String>>
struct IEnumerator_1_t2639;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m11639(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t1966 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m11253_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11640(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t1966 *, List_1_t13 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11254_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11641(__this, method) (( void (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11255_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11642(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t1966 *, int32_t, List_1_t13 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11256_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11643(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t1966 *, List_1_t13 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11257_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11644(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1966 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11258_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11645(__this, ___index, method) (( List_1_t13 * (*) (ReadOnlyCollection_1_t1966 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11259_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11646(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1966 *, int32_t, List_1_t13 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11260_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11647(__this, method) (( bool (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11261_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11648(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1966 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11262_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11649(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11263_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m11650(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1966 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11264_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m11651(__this, method) (( void (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11265_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m11652(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1966 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11266_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11653(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1966 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11267_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m11654(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1966 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m11268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m11655(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t1966 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m11269_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11656(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1966 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11270_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11657(__this, method) (( bool (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11271_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11658(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11272_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11659(__this, method) (( bool (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11273_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11660(__this, method) (( bool (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11274_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m11661(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1966 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m11275_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m11662(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1966 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m11276_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m11663(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1966 *, List_1_t13 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m11277_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m11664(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1966 *, List_1U5BU5D_t1964*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m11278_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m11665(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m11279_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m11666(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1966 *, List_1_t13 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m11280_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m11667(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t1966 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m11281_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.List`1<System.String>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m11668(__this, ___index, method) (( List_1_t13 * (*) (ReadOnlyCollection_1_t1966 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m11282_gshared)(__this, ___index, method)
