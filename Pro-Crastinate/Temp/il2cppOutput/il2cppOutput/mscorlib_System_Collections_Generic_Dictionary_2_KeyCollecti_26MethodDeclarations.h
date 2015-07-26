#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t2379;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t671;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2634;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.String[]
struct StringU5BU5D_t31;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_57.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_24MethodDeclarations.h"
#define KeyCollection__ctor_m17687(__this, ___dictionary, method) (( void (*) (KeyCollection_t2379 *, Dictionary_2_t671 *, const MethodInfo*))KeyCollection__ctor_m17594_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17688(__this, ___item, method) (( void (*) (KeyCollection_t2379 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17595_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17689(__this, method) (( void (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17596_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17690(__this, ___item, method) (( bool (*) (KeyCollection_t2379 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17597_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17691(__this, ___item, method) (( bool (*) (KeyCollection_t2379 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17598_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17692(__this, method) (( Object_t* (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17599_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m17693(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2379 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m17600_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17694(__this, method) (( Object_t * (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17601_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17695(__this, method) (( bool (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17602_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17696(__this, method) (( bool (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m17697(__this, method) (( Object_t * (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m17604_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m17698(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2379 *, StringU5BU5D_t31*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m17605_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::GetEnumerator()
#define KeyCollection_GetEnumerator_m17699(__this, method) (( Enumerator_t2851  (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_GetEnumerator_m17606_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::get_Count()
#define KeyCollection_get_Count_m17700(__this, method) (( int32_t (*) (KeyCollection_t2379 *, const MethodInfo*))KeyCollection_get_Count_m17607_gshared)(__this, method)
