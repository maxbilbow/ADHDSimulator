#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2447;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2446;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t2775;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t2776;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t2774;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t2777;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1246;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t2452;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t2456;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m18187_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18187(__this, method) (( void (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2__ctor_m18187_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18189_gshared (Dictionary_2_t2447 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18189(__this, ___comparer, method) (( void (*) (Dictionary_2_t2447 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18189_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18191_gshared (Dictionary_2_t2447 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18191(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2447 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18191_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18193_gshared (Dictionary_2_t2447 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18193(__this, ___capacity, method) (( void (*) (Dictionary_2_t2447 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18193_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18195_gshared (Dictionary_2_t2447 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18195(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2447 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18195_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18197_gshared (Dictionary_2_t2447 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18197(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2447 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2__ctor_m18197_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18199_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18199(__this, method) (( Object_t* (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18199_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18201_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18201(__this, method) (( Object_t* (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18201_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18203_gshared (Dictionary_2_t2447 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18203(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2447 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18203_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18205_gshared (Dictionary_2_t2447 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18205(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2447 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18205_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18207_gshared (Dictionary_2_t2447 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18207(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2447 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18207_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18209_gshared (Dictionary_2_t2447 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18209(__this, ___key, method) (( bool (*) (Dictionary_2_t2447 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18209_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18211_gshared (Dictionary_2_t2447 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18211(__this, ___key, method) (( void (*) (Dictionary_2_t2447 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18211_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18213_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18213(__this, method) (( bool (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18215_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18215(__this, method) (( Object_t * (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18215_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18217_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18217(__this, method) (( bool (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18219_gshared (Dictionary_2_t2447 * __this, KeyValuePair_2_t2449  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18219(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2447 *, KeyValuePair_2_t2449 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18219_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18221_gshared (Dictionary_2_t2447 * __this, KeyValuePair_2_t2449  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18221(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2447 *, KeyValuePair_2_t2449 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18221_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18223_gshared (Dictionary_2_t2447 * __this, KeyValuePair_2U5BU5D_t2774* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18223(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2447 *, KeyValuePair_2U5BU5D_t2774*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18223_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18225_gshared (Dictionary_2_t2447 * __this, KeyValuePair_2_t2449  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18225(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2447 *, KeyValuePair_2_t2449 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18225_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18227_gshared (Dictionary_2_t2447 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18227(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2447 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18227_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18229_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18229(__this, method) (( Object_t * (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18229_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18231_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18231(__this, method) (( Object_t* (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18231_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18233_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18233(__this, method) (( Object_t * (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18235_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18235(__this, method) (( int32_t (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_get_Count_m18235_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m18237_gshared (Dictionary_2_t2447 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18237(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2447 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m18237_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18239_gshared (Dictionary_2_t2447 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18239(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2447 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m18239_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18241_gshared (Dictionary_2_t2447 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18241(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2447 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18241_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18243_gshared (Dictionary_2_t2447 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18243(__this, ___size, method) (( void (*) (Dictionary_2_t2447 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18243_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18245_gshared (Dictionary_2_t2447 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18245(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2447 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18245_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2449  Dictionary_2_make_pair_m18247_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18247(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2449  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m18247_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m18249_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18249(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m18249_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m18251_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18251(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m18251_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18253_gshared (Dictionary_2_t2447 * __this, KeyValuePair_2U5BU5D_t2774* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18253(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2447 *, KeyValuePair_2U5BU5D_t2774*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18253_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m18255_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18255(__this, method) (( void (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_Resize_m18255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18257_gshared (Dictionary_2_t2447 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18257(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2447 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m18257_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m18259_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18259(__this, method) (( void (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_Clear_m18259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18261_gshared (Dictionary_2_t2447 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18261(__this, ___key, method) (( bool (*) (Dictionary_2_t2447 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m18261_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18263_gshared (Dictionary_2_t2447 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18263(__this, ___value, method) (( bool (*) (Dictionary_2_t2447 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m18263_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18265_gshared (Dictionary_2_t2447 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18265(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2447 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2_GetObjectData_m18265_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18267_gshared (Dictionary_2_t2447 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18267(__this, ___sender, method) (( void (*) (Dictionary_2_t2447 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18267_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18269_gshared (Dictionary_2_t2447 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18269(__this, ___key, method) (( bool (*) (Dictionary_2_t2447 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m18269_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18271_gshared (Dictionary_2_t2447 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18271(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2447 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m18271_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t2452 * Dictionary_2_get_Keys_m18273_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18273(__this, method) (( KeyCollection_t2452 * (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_get_Keys_m18273_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t2456 * Dictionary_2_get_Values_m18275_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18275(__this, method) (( ValueCollection_t2456 * (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_get_Values_m18275_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m18277_gshared (Dictionary_2_t2447 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18277(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2447 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18277_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m18279_gshared (Dictionary_2_t2447 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18279(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2447 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18279_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18281_gshared (Dictionary_2_t2447 * __this, KeyValuePair_2_t2449  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18281(__this, ___pair, method) (( bool (*) (Dictionary_2_t2447 *, KeyValuePair_2_t2449 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18281_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t2454  Dictionary_2_GetEnumerator_m18283_gshared (Dictionary_2_t2447 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18283(__this, method) (( Enumerator_t2454  (*) (Dictionary_2_t2447 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18283_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m18285_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18285(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1247  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18285_gshared)(__this /* static, unused */, ___key, ___value, method)
