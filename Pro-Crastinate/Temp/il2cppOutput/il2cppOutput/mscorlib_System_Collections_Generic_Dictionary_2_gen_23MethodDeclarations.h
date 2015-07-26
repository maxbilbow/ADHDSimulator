#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2173;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2725;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2178;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2182;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1979;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2740;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2741;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2742;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14635_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14635(__this, method) (( void (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2__ctor_m14635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14636_gshared (Dictionary_2_t2173 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14636(__this, ___comparer, method) (( void (*) (Dictionary_2_t2173 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14637_gshared (Dictionary_2_t2173 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m14637(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2173 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14637_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14638_gshared (Dictionary_2_t2173 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14638(__this, ___capacity, method) (( void (*) (Dictionary_2_t2173 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14639_gshared (Dictionary_2_t2173 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14639(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2173 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14639_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14640_gshared (Dictionary_2_t2173 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14640(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2173 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m14640_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14641_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14641(__this, method) (( Object_t* (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14641_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14642_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14642(__this, method) (( Object_t* (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14642_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14643_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14643(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14643_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14644_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14644(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2173 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14644_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14645_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14645(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2173 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14645_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14646_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14646(__this, ___key, method) (( bool (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14646_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14647_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14647(__this, ___key, method) (( void (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14647_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14648_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14648(__this, method) (( bool (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14648_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14649_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14649(__this, method) (( Object_t * (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14649_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14650_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14650(__this, method) (( bool (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14651_gshared (Dictionary_2_t2173 * __this, KeyValuePair_2_t2176  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14651(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2173 *, KeyValuePair_2_t2176 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14651_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14652_gshared (Dictionary_2_t2173 * __this, KeyValuePair_2_t2176  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14652(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2173 *, KeyValuePair_2_t2176 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14652_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14653_gshared (Dictionary_2_t2173 * __this, KeyValuePair_2U5BU5D_t2741* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14653(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2173 *, KeyValuePair_2U5BU5D_t2741*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14653_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14654_gshared (Dictionary_2_t2173 * __this, KeyValuePair_2_t2176  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14654(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2173 *, KeyValuePair_2_t2176 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14654_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14655_gshared (Dictionary_2_t2173 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14655(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2173 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14655_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14656_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14656(__this, method) (( Object_t * (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14656_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14657_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14657(__this, method) (( Object_t* (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14657_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14658_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14658(__this, method) (( Object_t * (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14658_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14659_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14659(__this, method) (( int32_t (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_get_Count_m14659_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14660_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14660(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14660_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14661_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14661(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2173 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14661_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14662_gshared (Dictionary_2_t2173 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14662(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2173 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14662_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14663_gshared (Dictionary_2_t2173 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14663(__this, ___size, method) (( void (*) (Dictionary_2_t2173 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14663_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14664_gshared (Dictionary_2_t2173 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14664(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2173 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14664_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2176  Dictionary_2_make_pair_m14665_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14665(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2176  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14665_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14666_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14666(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m14666_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14667_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14667(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14667_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14668_gshared (Dictionary_2_t2173 * __this, KeyValuePair_2U5BU5D_t2741* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14668(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2173 *, KeyValuePair_2U5BU5D_t2741*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14668_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14669_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14669(__this, method) (( void (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_Resize_m14669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14670_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14670(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2173 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14670_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14671_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14671(__this, method) (( void (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_Clear_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14672_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14672(__this, ___key, method) (( bool (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14672_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14673_gshared (Dictionary_2_t2173 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14673(__this, ___value, method) (( bool (*) (Dictionary_2_t2173 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14673_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14674_gshared (Dictionary_2_t2173 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14674(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2173 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m14674_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14675_gshared (Dictionary_2_t2173 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14675(__this, ___sender, method) (( void (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14675_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14676_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14676(__this, ___key, method) (( bool (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14677_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14677(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2173 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14677_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2178 * Dictionary_2_get_Keys_m14678_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14678(__this, method) (( KeyCollection_t2178 * (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_get_Keys_m14678_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2182 * Dictionary_2_get_Values_m14679_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14679(__this, method) (( ValueCollection_t2182 * (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_get_Values_m14679_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14680_gshared (Dictionary_2_t2173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14680(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14680_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14681_gshared (Dictionary_2_t2173 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14681(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2173 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14681_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14682_gshared (Dictionary_2_t2173 * __this, KeyValuePair_2_t2176  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14682(__this, ___pair, method) (( bool (*) (Dictionary_2_t2173 *, KeyValuePair_2_t2176 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14682_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2180  Dictionary_2_GetEnumerator_m14683_gshared (Dictionary_2_t2173 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14683(__this, method) (( Enumerator_t2180  (*) (Dictionary_2_t2173 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14683_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m14684_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14684(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14684_gshared)(__this /* static, unused */, ___key, ___value, method)
