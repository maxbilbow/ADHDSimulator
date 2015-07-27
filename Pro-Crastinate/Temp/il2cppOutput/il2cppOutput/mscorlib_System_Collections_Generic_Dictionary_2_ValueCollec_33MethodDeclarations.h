#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2499;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2492;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2696;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2493;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18954_gshared (ValueCollection_t2499 * __this, Dictionary_2_t2492 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m18954(__this, ___dictionary, method) (( void (*) (ValueCollection_t2499 *, Dictionary_2_t2492 *, const MethodInfo*))ValueCollection__ctor_m18954_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18955_gshared (ValueCollection_t2499 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18955(__this, ___item, method) (( void (*) (ValueCollection_t2499 *, KeyValuePair_2_t2049 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18955_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18956_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18956(__this, method) (( void (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18956_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18957_gshared (ValueCollection_t2499 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18957(__this, ___item, method) (( bool (*) (ValueCollection_t2499 *, KeyValuePair_2_t2049 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18957_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18958_gshared (ValueCollection_t2499 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18958(__this, ___item, method) (( bool (*) (ValueCollection_t2499 *, KeyValuePair_2_t2049 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18958_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18959_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18959(__this, method) (( Object_t* (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18959_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18960_gshared (ValueCollection_t2499 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18960(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2499 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18960_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18961_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18961(__this, method) (( Object_t * (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18961_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18962_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18962(__this, method) (( bool (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18963_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18963(__this, method) (( bool (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18963_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18964_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18964(__this, method) (( Object_t * (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18965_gshared (ValueCollection_t2499 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18965(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2499 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18965_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2500  ValueCollection_GetEnumerator_m18966_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18966(__this, method) (( Enumerator_t2500  (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_GetEnumerator_m18966_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18967_gshared (ValueCollection_t2499 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18967(__this, method) (( int32_t (*) (ValueCollection_t2499 *, const MethodInfo*))ValueCollection_get_Count_m18967_gshared)(__this, method)
