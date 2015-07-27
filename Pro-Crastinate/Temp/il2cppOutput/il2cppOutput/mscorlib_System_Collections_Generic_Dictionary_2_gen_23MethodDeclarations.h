#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2223;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2024;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2728;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2723;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2727;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2729;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1246;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2227;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2231;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14897_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14897(__this, method) (( void (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2__ctor_m14897_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14898_gshared (Dictionary_2_t2223 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14898(__this, ___comparer, method) (( void (*) (Dictionary_2_t2223 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14898_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14899_gshared (Dictionary_2_t2223 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m14899(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2223 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14899_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14900_gshared (Dictionary_2_t2223 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14900(__this, ___capacity, method) (( void (*) (Dictionary_2_t2223 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14900_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14901_gshared (Dictionary_2_t2223 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14901(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2223 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14901_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14902_gshared (Dictionary_2_t2223 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14902(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2223 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2__ctor_m14902_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14903_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14903(__this, method) (( Object_t* (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14903_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14904_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14904(__this, method) (( Object_t* (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14904_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14905_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14905(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14905_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14906_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14906(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2223 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14906_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14907_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14907(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2223 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14907_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14908_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14908(__this, ___key, method) (( bool (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14908_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14909_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14909(__this, ___key, method) (( void (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14909_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14910_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14910(__this, method) (( bool (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14911_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14911(__this, method) (( Object_t * (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14912_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14912(__this, method) (( bool (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14913_gshared (Dictionary_2_t2223 * __this, KeyValuePair_2_t2225  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14913(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2223 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14913_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14914_gshared (Dictionary_2_t2223 * __this, KeyValuePair_2_t2225  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14914(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2223 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14914_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14915_gshared (Dictionary_2_t2223 * __this, KeyValuePair_2U5BU5D_t2727* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14915(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2223 *, KeyValuePair_2U5BU5D_t2727*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14915_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14916_gshared (Dictionary_2_t2223 * __this, KeyValuePair_2_t2225  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14916(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2223 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14916_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14917_gshared (Dictionary_2_t2223 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14917(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2223 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14917_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14918_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14918(__this, method) (( Object_t * (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14918_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14919_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14919(__this, method) (( Object_t* (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14919_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14920_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14920(__this, method) (( Object_t * (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14920_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14921_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14921(__this, method) (( int32_t (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_get_Count_m14921_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14922_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14922(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14922_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14923_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2223 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14924_gshared (Dictionary_2_t2223 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14924(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2223 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14924_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14925_gshared (Dictionary_2_t2223 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14925(__this, ___size, method) (( void (*) (Dictionary_2_t2223 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14925_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14926_gshared (Dictionary_2_t2223 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14926(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2223 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14926_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2225  Dictionary_2_make_pair_m14927_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14927(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2225  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14927_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14928_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14928(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m14928_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14929_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14929(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14929_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14930_gshared (Dictionary_2_t2223 * __this, KeyValuePair_2U5BU5D_t2727* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14930(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2223 *, KeyValuePair_2U5BU5D_t2727*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14930_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14931_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14931(__this, method) (( void (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_Resize_m14931_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14932_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14932(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2223 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14932_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14933_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14933(__this, method) (( void (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_Clear_m14933_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14934_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14934(__this, ___key, method) (( bool (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14934_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14935_gshared (Dictionary_2_t2223 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14935(__this, ___value, method) (( bool (*) (Dictionary_2_t2223 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14935_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14936_gshared (Dictionary_2_t2223 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14936(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2223 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2_GetObjectData_m14936_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14937_gshared (Dictionary_2_t2223 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14937(__this, ___sender, method) (( void (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14937_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14938_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14938(__this, ___key, method) (( bool (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14938_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14939_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14939(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2223 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14939_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2227 * Dictionary_2_get_Keys_m14940_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14940(__this, method) (( KeyCollection_t2227 * (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_get_Keys_m14940_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2231 * Dictionary_2_get_Values_m14941_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14941(__this, method) (( ValueCollection_t2231 * (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_get_Values_m14941_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14942_gshared (Dictionary_2_t2223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14942(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14942_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14943_gshared (Dictionary_2_t2223 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14943(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2223 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14943_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14944_gshared (Dictionary_2_t2223 * __this, KeyValuePair_2_t2225  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14944(__this, ___pair, method) (( bool (*) (Dictionary_2_t2223 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14944_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2229  Dictionary_2_GetEnumerator_m14945_gshared (Dictionary_2_t2223 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14945(__this, method) (( Enumerator_t2229  (*) (Dictionary_2_t2223 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14945_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m14946_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14946(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1247  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14946_gshared)(__this /* static, unused */, ___key, ___value, method)
