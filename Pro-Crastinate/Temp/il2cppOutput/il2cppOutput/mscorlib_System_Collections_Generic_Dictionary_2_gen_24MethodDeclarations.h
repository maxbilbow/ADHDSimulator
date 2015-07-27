#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2410;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2024;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2767;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2768;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2766;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2769;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1246;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2415;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2419;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m17741_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17741(__this, method) (( void (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2__ctor_m17741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17743_gshared (Dictionary_2_t2410 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17743(__this, ___comparer, method) (( void (*) (Dictionary_2_t2410 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17743_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17745_gshared (Dictionary_2_t2410 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17745(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2410 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17745_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17747_gshared (Dictionary_2_t2410 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17747(__this, ___capacity, method) (( void (*) (Dictionary_2_t2410 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17747_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17749_gshared (Dictionary_2_t2410 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17749(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2410 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17749_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17751_gshared (Dictionary_2_t2410 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17751(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2410 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2__ctor_m17751_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17753_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17753(__this, method) (( Object_t* (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17753_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17755_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17755(__this, method) (( Object_t* (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17755_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17757_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17757(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17757_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17759_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17759(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2410 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17759_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17761_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17761(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2410 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17761_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17763_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17763(__this, ___key, method) (( bool (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17765_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17765(__this, ___key, method) (( void (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17767_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17767(__this, method) (( bool (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17767_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17769_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17769(__this, method) (( Object_t * (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17769_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17771_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17771(__this, method) (( bool (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17773_gshared (Dictionary_2_t2410 * __this, KeyValuePair_2_t2412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17773(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2410 *, KeyValuePair_2_t2412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17773_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17775_gshared (Dictionary_2_t2410 * __this, KeyValuePair_2_t2412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17775(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2410 *, KeyValuePair_2_t2412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17775_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17777_gshared (Dictionary_2_t2410 * __this, KeyValuePair_2U5BU5D_t2766* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17777(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2410 *, KeyValuePair_2U5BU5D_t2766*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17777_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17779_gshared (Dictionary_2_t2410 * __this, KeyValuePair_2_t2412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17779(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2410 *, KeyValuePair_2_t2412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17779_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17781_gshared (Dictionary_2_t2410 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17781(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2410 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17781_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17783_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17783(__this, method) (( Object_t * (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17783_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17785_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17785(__this, method) (( Object_t* (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17785_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17787_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17787(__this, method) (( Object_t * (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17787_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17789_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17789(__this, method) (( int32_t (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_get_Count_m17789_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m17791_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17791(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17791_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17793_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17793(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2410 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m17793_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17795_gshared (Dictionary_2_t2410 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17795(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2410 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17795_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17797_gshared (Dictionary_2_t2410 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17797(__this, ___size, method) (( void (*) (Dictionary_2_t2410 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17797_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17799_gshared (Dictionary_2_t2410 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17799(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2410 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17799_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2412  Dictionary_2_make_pair_m17801_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17801(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2412  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m17801_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17803_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17803(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m17803_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m17805_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17805(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m17805_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17807_gshared (Dictionary_2_t2410 * __this, KeyValuePair_2U5BU5D_t2766* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17807(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2410 *, KeyValuePair_2U5BU5D_t2766*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17807_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m17809_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17809(__this, method) (( void (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_Resize_m17809_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17811_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17811(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2410 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m17811_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m17813_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17813(__this, method) (( void (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_Clear_m17813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17815_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17815(__this, ___key, method) (( bool (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17815_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17817_gshared (Dictionary_2_t2410 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17817(__this, ___value, method) (( bool (*) (Dictionary_2_t2410 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m17817_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17819_gshared (Dictionary_2_t2410 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17819(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2410 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2_GetObjectData_m17819_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17821_gshared (Dictionary_2_t2410 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17821(__this, ___sender, method) (( void (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17821_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17823_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17823(__this, ___key, method) (( bool (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17823_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17825_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17825(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2410 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17825_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2415 * Dictionary_2_get_Keys_m17827_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17827(__this, method) (( KeyCollection_t2415 * (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_get_Keys_m17827_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2419 * Dictionary_2_get_Values_m17829_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17829(__this, method) (( ValueCollection_t2419 * (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_get_Values_m17829_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17831_gshared (Dictionary_2_t2410 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17831(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17831_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m17833_gshared (Dictionary_2_t2410 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17833(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2410 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17833_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17835_gshared (Dictionary_2_t2410 * __this, KeyValuePair_2_t2412  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17835(__this, ___pair, method) (( bool (*) (Dictionary_2_t2410 *, KeyValuePair_2_t2412 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17835_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2417  Dictionary_2_GetEnumerator_m17837_gshared (Dictionary_2_t2410 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17837(__this, method) (( Enumerator_t2417  (*) (Dictionary_2_t2410 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17837_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m17839_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17839(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1247  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17839_gshared)(__this /* static, unused */, ___key, ___value, method)
