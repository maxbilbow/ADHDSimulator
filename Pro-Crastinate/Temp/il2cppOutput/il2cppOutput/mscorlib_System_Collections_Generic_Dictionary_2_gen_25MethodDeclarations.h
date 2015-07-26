#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2399;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t2859;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t2403;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t2407;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2396;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t2864;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t2865;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t2866;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m17913_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17913(__this, method) (( void (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2__ctor_m17913_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17915_gshared (Dictionary_2_t2399 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17915(__this, ___comparer, method) (( void (*) (Dictionary_2_t2399 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17915_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17917_gshared (Dictionary_2_t2399 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17917(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2399 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17917_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17919_gshared (Dictionary_2_t2399 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17919(__this, ___capacity, method) (( void (*) (Dictionary_2_t2399 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17919_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17921_gshared (Dictionary_2_t2399 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17921(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2399 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17921_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17923_gshared (Dictionary_2_t2399 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17923(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2399 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m17923_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17925_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17925(__this, method) (( Object_t* (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17925_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17927_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17927(__this, method) (( Object_t* (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17929_gshared (Dictionary_2_t2399 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17929(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2399 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17929_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17931_gshared (Dictionary_2_t2399 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17931(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2399 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17931_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17933_gshared (Dictionary_2_t2399 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17933(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2399 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17933_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17935_gshared (Dictionary_2_t2399 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17935(__this, ___key, method) (( bool (*) (Dictionary_2_t2399 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17935_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17937_gshared (Dictionary_2_t2399 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17937(__this, ___key, method) (( void (*) (Dictionary_2_t2399 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17937_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17939_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17939(__this, method) (( bool (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17939_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17941_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17941(__this, method) (( Object_t * (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17941_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17943_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17943(__this, method) (( bool (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17945_gshared (Dictionary_2_t2399 * __this, KeyValuePair_2_t2400  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17945(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2399 *, KeyValuePair_2_t2400 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17945_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17947_gshared (Dictionary_2_t2399 * __this, KeyValuePair_2_t2400  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17947(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2399 *, KeyValuePair_2_t2400 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17947_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17949_gshared (Dictionary_2_t2399 * __this, KeyValuePair_2U5BU5D_t2865* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17949(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2399 *, KeyValuePair_2U5BU5D_t2865*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17949_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17951_gshared (Dictionary_2_t2399 * __this, KeyValuePair_2_t2400  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17951(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2399 *, KeyValuePair_2_t2400 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17951_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17953_gshared (Dictionary_2_t2399 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17953(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2399 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17953_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17955_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17955(__this, method) (( Object_t * (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17955_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17957_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17957(__this, method) (( Object_t* (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17957_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17959_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17959(__this, method) (( Object_t * (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17959_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17961_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17961(__this, method) (( int32_t (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_get_Count_m17961_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m17963_gshared (Dictionary_2_t2399 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17963(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2399 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m17963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17965_gshared (Dictionary_2_t2399 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17965(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2399 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17967_gshared (Dictionary_2_t2399 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17967(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2399 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17967_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17969_gshared (Dictionary_2_t2399 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17969(__this, ___size, method) (( void (*) (Dictionary_2_t2399 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17969_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17971_gshared (Dictionary_2_t2399 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17971(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2399 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17971_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2400  Dictionary_2_make_pair_m17973_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17973(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2400  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17973_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m17975_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17975(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17975_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17977_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17977(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17977_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17979_gshared (Dictionary_2_t2399 * __this, KeyValuePair_2U5BU5D_t2865* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17979(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2399 *, KeyValuePair_2U5BU5D_t2865*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17979_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17981_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17981(__this, method) (( void (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_Resize_m17981_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17983_gshared (Dictionary_2_t2399 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17983(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2399 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m17983_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17985_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17985(__this, method) (( void (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_Clear_m17985_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17987_gshared (Dictionary_2_t2399 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17987(__this, ___key, method) (( bool (*) (Dictionary_2_t2399 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m17987_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17989_gshared (Dictionary_2_t2399 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17989(__this, ___value, method) (( bool (*) (Dictionary_2_t2399 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17989_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17991_gshared (Dictionary_2_t2399 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17991(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2399 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m17991_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17993_gshared (Dictionary_2_t2399 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17993(__this, ___sender, method) (( void (*) (Dictionary_2_t2399 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17993_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17995_gshared (Dictionary_2_t2399 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17995(__this, ___key, method) (( bool (*) (Dictionary_2_t2399 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m17995_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17997_gshared (Dictionary_2_t2399 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17997(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2399 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17997_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t2403 * Dictionary_2_get_Keys_m17999_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17999(__this, method) (( KeyCollection_t2403 * (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_get_Keys_m17999_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t2407 * Dictionary_2_get_Values_m18001_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18001(__this, method) (( ValueCollection_t2407 * (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_get_Values_m18001_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m18003_gshared (Dictionary_2_t2399 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18003(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2399 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18003_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m18005_gshared (Dictionary_2_t2399 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18005(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2399 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18005_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18007_gshared (Dictionary_2_t2399 * __this, KeyValuePair_2_t2400  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18007(__this, ___pair, method) (( bool (*) (Dictionary_2_t2399 *, KeyValuePair_2_t2400 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18007_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t2405  Dictionary_2_GetEnumerator_m18009_gshared (Dictionary_2_t2399 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18009(__this, method) (( Enumerator_t2405  (*) (Dictionary_2_t2399 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18009_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m18011_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18011(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18011_gshared)(__this /* static, unused */, ___key, ___value, method)
