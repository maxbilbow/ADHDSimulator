#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2370;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2362;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t2850;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Int64[]
struct Int64U5BU5D_t1883;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m17629_gshared (ValueCollection_t2370 * __this, Dictionary_2_t2362 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m17629(__this, ___dictionary, method) (( void (*) (ValueCollection_t2370 *, Dictionary_2_t2362 *, const MethodInfo*))ValueCollection__ctor_m17629_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17630_gshared (ValueCollection_t2370 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17630(__this, ___item, method) (( void (*) (ValueCollection_t2370 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17631_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17631(__this, method) (( void (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17631_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17632_gshared (ValueCollection_t2370 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17632(__this, ___item, method) (( bool (*) (ValueCollection_t2370 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17632_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17633_gshared (ValueCollection_t2370 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17633(__this, ___item, method) (( bool (*) (ValueCollection_t2370 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17633_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17634_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17634(__this, method) (( Object_t* (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17634_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m17635_gshared (ValueCollection_t2370 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m17635(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2370 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17635_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17636_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17636(__this, method) (( Object_t * (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17637_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17637(__this, method) (( bool (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17637_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17638_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17638(__this, method) (( bool (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17638_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m17639_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m17639(__this, method) (( Object_t * (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m17640_gshared (ValueCollection_t2370 * __this, Int64U5BU5D_t1883* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m17640(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2370 *, Int64U5BU5D_t1883*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17640_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2371  ValueCollection_GetEnumerator_m17641_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m17641(__this, method) (( Enumerator_t2371  (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_GetEnumerator_m17641_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m17642_gshared (ValueCollection_t2370 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m17642(__this, method) (( int32_t (*) (ValueCollection_t2370 *, const MethodInfo*))ValueCollection_get_Count_m17642_gshared)(__this, method)
