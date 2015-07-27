#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2579;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2024;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t2813;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2814;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2812;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2815;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1246;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2584;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2588;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__28.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19719_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19719(__this, method) (( void (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2__ctor_m19719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19720_gshared (Dictionary_2_t2579 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19720(__this, ___comparer, method) (( void (*) (Dictionary_2_t2579 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19720_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19722_gshared (Dictionary_2_t2579 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m19722(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2579 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19722_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19724_gshared (Dictionary_2_t2579 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19724(__this, ___capacity, method) (( void (*) (Dictionary_2_t2579 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19724_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19726_gshared (Dictionary_2_t2579 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19726(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2579 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19726_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19728_gshared (Dictionary_2_t2579 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19728(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2579 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2__ctor_m19728_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19730_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19730(__this, method) (( Object_t* (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19730_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19732_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19732(__this, method) (( Object_t* (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19732_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19734_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19734(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19734_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19736_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19736(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2579 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19736_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19738_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19738(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2579 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19738_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19740_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19740(__this, ___key, method) (( bool (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19740_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19742_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19742(__this, ___key, method) (( void (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19742_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19744_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19744(__this, method) (( bool (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19744_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19746_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19746(__this, method) (( Object_t * (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19748_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19748(__this, method) (( bool (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19750_gshared (Dictionary_2_t2579 * __this, KeyValuePair_2_t2581  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19750(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2579 *, KeyValuePair_2_t2581 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19750_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19752_gshared (Dictionary_2_t2579 * __this, KeyValuePair_2_t2581  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19752(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2579 *, KeyValuePair_2_t2581 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19752_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19754_gshared (Dictionary_2_t2579 * __this, KeyValuePair_2U5BU5D_t2812* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19754(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2579 *, KeyValuePair_2U5BU5D_t2812*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19754_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19756_gshared (Dictionary_2_t2579 * __this, KeyValuePair_2_t2581  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19756(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2579 *, KeyValuePair_2_t2581 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19756_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19758_gshared (Dictionary_2_t2579 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19758(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2579 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19758_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19760_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19760(__this, method) (( Object_t * (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19760_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19762_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19762(__this, method) (( Object_t* (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19762_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19764_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19764(__this, method) (( Object_t * (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19764_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19766_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19766(__this, method) (( int32_t (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_get_Count_m19766_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19768_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19768(__this, ___key, method) (( bool (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19768_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19770_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19770(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2579 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19770_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19772_gshared (Dictionary_2_t2579 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19772(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2579 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19772_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19774_gshared (Dictionary_2_t2579 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19774(__this, ___size, method) (( void (*) (Dictionary_2_t2579 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19774_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19776_gshared (Dictionary_2_t2579 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19776(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2579 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19776_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2581  Dictionary_2_make_pair_m19778_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19778(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2581  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19778_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19780_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19780(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m19780_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19782_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19782(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19782_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19784_gshared (Dictionary_2_t2579 * __this, KeyValuePair_2U5BU5D_t2812* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19784(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2579 *, KeyValuePair_2U5BU5D_t2812*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19784_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19786_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19786(__this, method) (( void (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_Resize_m19786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19788_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19788(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2579 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19788_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19790_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19790(__this, method) (( void (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_Clear_m19790_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19792_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19792(__this, ___key, method) (( bool (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19792_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19794_gshared (Dictionary_2_t2579 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19794(__this, ___value, method) (( bool (*) (Dictionary_2_t2579 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19794_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19796_gshared (Dictionary_2_t2579 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19796(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2579 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2_GetObjectData_m19796_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19798_gshared (Dictionary_2_t2579 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19798(__this, ___sender, method) (( void (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19798_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19800_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19800(__this, ___key, method) (( bool (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19800_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19802_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19802(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2579 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19802_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2584 * Dictionary_2_get_Keys_m19804_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19804(__this, method) (( KeyCollection_t2584 * (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_get_Keys_m19804_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2588 * Dictionary_2_get_Values_m19806_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19806(__this, method) (( ValueCollection_t2588 * (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_get_Values_m19806_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19808_gshared (Dictionary_2_t2579 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19808(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19808_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19810_gshared (Dictionary_2_t2579 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19810(__this, ___value, method) (( bool (*) (Dictionary_2_t2579 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19810_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19812_gshared (Dictionary_2_t2579 * __this, KeyValuePair_2_t2581  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19812(__this, ___pair, method) (( bool (*) (Dictionary_2_t2579 *, KeyValuePair_2_t2581 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19812_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2586  Dictionary_2_GetEnumerator_m19814_gshared (Dictionary_2_t2579 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19814(__this, method) (( Enumerator_t2586  (*) (Dictionary_2_t2579 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19814_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m19816_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19816(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1247  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19816_gshared)(__this /* static, unused */, ___key, ___value, method)
