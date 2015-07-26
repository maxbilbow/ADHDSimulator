#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t598;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t798;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2725;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t2321;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2322;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2002;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t2823;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2824;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t2825;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_23MethodDeclarations.h"
#define Dictionary_2__ctor_m16773(__this, method) (( void (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2__ctor_m14635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16774(__this, ___comparer, method) (( void (*) (Dictionary_2_t598 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m16775(__this, ___dictionary, method) (( void (*) (Dictionary_2_t598 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14637_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m5105(__this, ___capacity, method) (( void (*) (Dictionary_2_t598 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16776(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t598 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14639_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m16777(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t598 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m14640_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16778(__this, method) (( Object_t* (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14641_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16779(__this, method) (( Object_t* (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14642_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16780(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t598 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14643_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16781(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t598 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14644_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m16782(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t598 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14645_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m16783(__this, ___key, method) (( bool (*) (Dictionary_2_t598 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14646_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m16784(__this, ___key, method) (( void (*) (Dictionary_2_t598 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14647_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16785(__this, method) (( bool (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14648_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16786(__this, method) (( Object_t * (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14649_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16787(__this, method) (( bool (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16788(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t598 *, KeyValuePair_2_t2320 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14651_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16789(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t598 *, KeyValuePair_2_t2320 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14652_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16790(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t598 *, KeyValuePair_2U5BU5D_t2824*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14653_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16791(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t598 *, KeyValuePair_2_t2320 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14654_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16792(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t598 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14655_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16793(__this, method) (( Object_t * (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14656_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16794(__this, method) (( Object_t* (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14657_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16795(__this, method) (( Object_t * (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14658_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m16796(__this, method) (( int32_t (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_get_Count_m14659_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m16797(__this, ___key, method) (( int32_t (*) (Dictionary_2_t598 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m14660_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m16798(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t598 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14661_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m16799(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t598 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14662_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m16800(__this, ___size, method) (( void (*) (Dictionary_2_t598 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14663_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m16801(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t598 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14664_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m16802(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2320  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14665_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m16803(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_key_m14666_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m16804(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14667_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m16805(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t598 *, KeyValuePair_2U5BU5D_t2824*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14668_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m16806(__this, method) (( void (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_Resize_m14669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m16807(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t598 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m14670_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m16808(__this, method) (( void (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_Clear_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m16809(__this, ___key, method) (( bool (*) (Dictionary_2_t598 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m14672_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m16810(__this, ___value, method) (( bool (*) (Dictionary_2_t598 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14673_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m16811(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t598 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m14674_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m16812(__this, ___sender, method) (( void (*) (Dictionary_2_t598 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14675_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m16813(__this, ___key, method) (( bool (*) (Dictionary_2_t598 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m14676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m16814(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t598 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14677_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m16815(__this, method) (( KeyCollection_t2321 * (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_get_Keys_m14678_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m16816(__this, method) (( ValueCollection_t2322 * (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_get_Values_m14679_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m16817(__this, ___key, method) (( String_t* (*) (Dictionary_2_t598 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14680_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m16818(__this, ___value, method) (( int32_t (*) (Dictionary_2_t598 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14681_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m16819(__this, ___pair, method) (( bool (*) (Dictionary_2_t598 *, KeyValuePair_2_t2320 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14682_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m16820(__this, method) (( Enumerator_t2323  (*) (Dictionary_2_t598 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14683_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m16821(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14684_gshared)(__this /* static, unused */, ___key, ___value, method)
