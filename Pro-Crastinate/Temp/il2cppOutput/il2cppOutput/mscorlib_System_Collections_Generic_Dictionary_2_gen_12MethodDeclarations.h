#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t789;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t798;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2325;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t2326;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2002;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t835;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t2828;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t2829;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"
#define Dictionary_2__ctor_m4023(__this, method) (( void (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2__ctor_m12059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16872(__this, ___comparer, method) (( void (*) (Dictionary_2_t789 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12061_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m16873(__this, ___dictionary, method) (( void (*) (Dictionary_2_t789 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12063_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m16874(__this, ___capacity, method) (( void (*) (Dictionary_2_t789 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12065_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16875(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t789 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12067_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m16876(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t789 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m12069_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16877(__this, method) (( Object_t* (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12071_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16878(__this, method) (( Object_t* (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12073_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16879(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t789 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12075_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16880(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t789 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12077_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m16881(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t789 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12079_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m16882(__this, ___key, method) (( bool (*) (Dictionary_2_t789 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12081_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m16883(__this, ___key, method) (( void (*) (Dictionary_2_t789 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12083_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16884(__this, method) (( bool (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12085_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16885(__this, method) (( Object_t * (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12087_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16886(__this, method) (( bool (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12089_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t789 *, KeyValuePair_2_t822 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12091_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16888(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t789 *, KeyValuePair_2_t822 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12093_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16889(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t789 *, KeyValuePair_2U5BU5D_t2828*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12095_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16890(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t789 *, KeyValuePair_2_t822 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12097_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t789 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12099_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16892(__this, method) (( Object_t * (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12101_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16893(__this, method) (( Object_t* (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12103_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16894(__this, method) (( Object_t * (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m16895(__this, method) (( int32_t (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_get_Count_m12107_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m16896(__this, ___key, method) (( String_t* (*) (Dictionary_2_t789 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m12109_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m16897(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t789 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_set_Item_m12111_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m16898(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t789 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12113_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m16899(__this, ___size, method) (( void (*) (Dictionary_2_t789 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12115_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m16900(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t789 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12117_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m16901(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t822  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_make_pair_m12119_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m16902(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_key_m12121_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m16903(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_value_m12123_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m16904(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t789 *, KeyValuePair_2U5BU5D_t2828*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12125_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m16905(__this, method) (( void (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_Resize_m12127_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m16906(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t789 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_Add_m12129_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m16907(__this, method) (( void (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_Clear_m12131_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m16908(__this, ___key, method) (( bool (*) (Dictionary_2_t789 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m12133_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m16909(__this, ___value, method) (( bool (*) (Dictionary_2_t789 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m12135_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m16910(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t789 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m12137_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m16911(__this, ___sender, method) (( void (*) (Dictionary_2_t789 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12139_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m16912(__this, ___key, method) (( bool (*) (Dictionary_2_t789 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m12141_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m16913(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t789 *, String_t*, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m12143_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m16914(__this, method) (( KeyCollection_t2325 * (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_get_Keys_m12144_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m16915(__this, method) (( ValueCollection_t2326 * (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_get_Values_m12145_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m16916(__this, ___key, method) (( String_t* (*) (Dictionary_2_t789 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12147_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m16917(__this, ___value, method) (( String_t* (*) (Dictionary_2_t789 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12149_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m16918(__this, ___pair, method) (( bool (*) (Dictionary_2_t789 *, KeyValuePair_2_t822 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12151_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m4017(__this, method) (( Enumerator_t823  (*) (Dictionary_2_t789 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12152_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m16919(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12154_gshared)(__this /* static, unused */, ___key, ___value, method)
