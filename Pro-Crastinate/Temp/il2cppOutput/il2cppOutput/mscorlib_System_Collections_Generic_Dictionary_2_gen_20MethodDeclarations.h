﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2005;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2008;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2012;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1979;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2656;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2443;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2657;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12055_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12055(__this, method) (( void (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2__ctor_m12055_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12057_gshared (Dictionary_2_t2005 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12057(__this, ___comparer, method) (( void (*) (Dictionary_2_t2005 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12057_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12059_gshared (Dictionary_2_t2005 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12059(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2005 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12059_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12061_gshared (Dictionary_2_t2005 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12061(__this, ___capacity, method) (( void (*) (Dictionary_2_t2005 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12061_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12063_gshared (Dictionary_2_t2005 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12063(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2005 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12063_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12065_gshared (Dictionary_2_t2005 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12065(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2005 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m12065_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12067_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12067(__this, method) (( Object_t* (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12067_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12069_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12069(__this, method) (( Object_t* (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12069_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12071_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12071(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12071_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12073_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12073(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12073_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12075_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12075(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12075_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12077_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12077(__this, ___key, method) (( bool (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12077_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12079_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12079(__this, ___key, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12079_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12081_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12081(__this, method) (( bool (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12081_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12083_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12083(__this, method) (( Object_t * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12085_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12085(__this, method) (( bool (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12085_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12087_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12087(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12087_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12089_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12089(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12089_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12091_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2U5BU5D_t2443* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12091(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, KeyValuePair_2U5BU5D_t2443*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12091_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12093_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12093(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12093_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12095_gshared (Dictionary_2_t2005 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12095(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12095_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12097_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12097(__this, method) (( Object_t * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12097_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12099_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12099(__this, method) (( Object_t* (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12099_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12101_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12101(__this, method) (( Object_t * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12101_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12103_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12103(__this, method) (( int32_t (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_get_Count_m12103_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12105_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12105(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12105_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12107_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12107(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12107_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12109_gshared (Dictionary_2_t2005 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12109(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2005 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12109_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12111_gshared (Dictionary_2_t2005 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12111(__this, ___size, method) (( void (*) (Dictionary_2_t2005 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12111_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12113_gshared (Dictionary_2_t2005 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12113(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12113_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2006  Dictionary_2_make_pair_m12115_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12115(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2006  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12115_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12117_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12117(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m12117_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12119_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12119(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12119_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12121_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2U5BU5D_t2443* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12121(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, KeyValuePair_2U5BU5D_t2443*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12121_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12123_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12123(__this, method) (( void (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_Resize_m12123_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12125_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12125(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m12125_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12127_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12127(__this, method) (( void (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_Clear_m12127_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12129_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12129(__this, ___key, method) (( bool (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12129_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12131_gshared (Dictionary_2_t2005 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12131(__this, ___value, method) (( bool (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12131_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12133_gshared (Dictionary_2_t2005 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12133(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2005 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m12133_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12135_gshared (Dictionary_2_t2005 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12135(__this, ___sender, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12135_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12137_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12137(__this, ___key, method) (( bool (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12137_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12139_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12139(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2005 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12139_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2008 * Dictionary_2_get_Keys_m12140_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12140(__this, method) (( KeyCollection_t2008 * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_get_Keys_m12140_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2012 * Dictionary_2_get_Values_m12141_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12141(__this, method) (( ValueCollection_t2012 * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_get_Values_m12141_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12143_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12143(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12143_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12145_gshared (Dictionary_2_t2005 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12145(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12145_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12147_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12147(__this, ___pair, method) (( bool (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12147_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2010  Dictionary_2_GetEnumerator_m12148_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12148(__this, method) (( Enumerator_t2010  (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12148_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m12150_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12150(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12150_gshared)(__this /* static, unused */, ___key, ___value, method)
