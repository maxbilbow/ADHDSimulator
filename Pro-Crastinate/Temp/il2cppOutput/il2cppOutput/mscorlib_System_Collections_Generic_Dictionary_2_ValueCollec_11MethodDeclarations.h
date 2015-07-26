#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>
struct ValueCollection_t2072;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
struct Dictionary_2_t2062;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1962;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13073_gshared (ValueCollection_t2072 * __this, Dictionary_2_t2062 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m13073(__this, ___dictionary, method) (( void (*) (ValueCollection_t2072 *, Dictionary_2_t2062 *, const MethodInfo*))ValueCollection__ctor_m13073_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13074_gshared (ValueCollection_t2072 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13074(__this, ___item, method) (( void (*) (ValueCollection_t2072 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13074_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13075_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13075(__this, method) (( void (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13075_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13076_gshared (ValueCollection_t2072 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13076(__this, ___item, method) (( bool (*) (ValueCollection_t2072 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13077_gshared (ValueCollection_t2072 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13077(__this, ___item, method) (( bool (*) (ValueCollection_t2072 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13077_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13078_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13078(__this, method) (( Object_t* (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13078_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13079_gshared (ValueCollection_t2072 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m13079(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2072 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13079_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13080_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13080(__this, method) (( Object_t * (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13081_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13081(__this, method) (( bool (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13081_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13082_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13082(__this, method) (( bool (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13082_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13083_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13083(__this, method) (( Object_t * (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13083_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13084_gshared (ValueCollection_t2072 * __this, ObjectU5BU5D_t146* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m13084(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2072 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m13084_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::GetEnumerator()
extern "C" Enumerator_t2073  ValueCollection_GetEnumerator_m13085_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m13085(__this, method) (( Enumerator_t2073  (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_GetEnumerator_m13085_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13086_gshared (ValueCollection_t2072 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m13086(__this, method) (( int32_t (*) (ValueCollection_t2072 *, const MethodInfo*))ValueCollection_get_Count_m13086_gshared)(__this, method)
