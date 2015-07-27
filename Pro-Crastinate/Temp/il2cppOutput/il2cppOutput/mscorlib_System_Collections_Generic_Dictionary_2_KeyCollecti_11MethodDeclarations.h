#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2199;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2195;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2725;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1037;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m14614_gshared (KeyCollection_t2199 * __this, Dictionary_2_t2195 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m14614(__this, ___dictionary, method) (( void (*) (KeyCollection_t2199 *, Dictionary_2_t2195 *, const MethodInfo*))KeyCollection__ctor_m14614_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14615_gshared (KeyCollection_t2199 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14615(__this, ___item, method) (( void (*) (KeyCollection_t2199 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14615_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14616_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14616(__this, method) (( void (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14617_gshared (KeyCollection_t2199 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14617(__this, ___item, method) (( bool (*) (KeyCollection_t2199 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14617_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14618_gshared (KeyCollection_t2199 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14618(__this, ___item, method) (( bool (*) (KeyCollection_t2199 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14618_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14619_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14619(__this, method) (( Object_t* (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m14620_gshared (KeyCollection_t2199 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m14620(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2199 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m14620_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14621_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14621(__this, method) (( Object_t * (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14621_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14622_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14622(__this, method) (( bool (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14623_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14623(__this, method) (( bool (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14623_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m14624_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m14624(__this, method) (( Object_t * (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m14624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m14625_gshared (KeyCollection_t2199 * __this, Int32U5BU5D_t1037* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m14625(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2199 *, Int32U5BU5D_t1037*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m14625_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2200  KeyCollection_GetEnumerator_m14626_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m14626(__this, method) (( Enumerator_t2200  (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_GetEnumerator_m14626_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m14627_gshared (KeyCollection_t2199 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m14627(__this, method) (( int32_t (*) (KeyCollection_t2199 *, const MethodInfo*))KeyCollection_get_Count_m14627_gshared)(__this, method)
