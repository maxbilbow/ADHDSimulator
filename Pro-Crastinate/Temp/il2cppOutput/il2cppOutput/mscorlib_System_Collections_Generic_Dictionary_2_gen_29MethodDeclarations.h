#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2492;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2024;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t2798;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2799;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t2797;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t2800;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1246;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t2495;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2499;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m18820_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18820(__this, method) (( void (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2__ctor_m18820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18822_gshared (Dictionary_2_t2492 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18822(__this, ___comparer, method) (( void (*) (Dictionary_2_t2492 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18822_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18824_gshared (Dictionary_2_t2492 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18824(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2492 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18824_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18826_gshared (Dictionary_2_t2492 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18826(__this, ___capacity, method) (( void (*) (Dictionary_2_t2492 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18826_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18828_gshared (Dictionary_2_t2492 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18828(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2492 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18828_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18830_gshared (Dictionary_2_t2492 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18830(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2492 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2__ctor_m18830_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18832_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18832(__this, method) (( Object_t* (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18832_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18834_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18834(__this, method) (( Object_t* (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18834_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18836_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18836(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18838_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18838(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18840_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18840(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18840_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18842_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18842(__this, ___key, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18842_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18844_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18844(__this, ___key, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18844_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18846_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18846(__this, method) (( bool (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18848_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18848(__this, method) (( Object_t * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18848_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18850_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18850(__this, method) (( bool (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18850_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18852_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18852(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2468 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18852_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18854_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18854(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2468 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18854_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18856_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2797* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18856(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2797*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18856_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18858_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18858(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2468 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18858_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18860_gshared (Dictionary_2_t2492 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18860(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18860_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18862_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18862(__this, method) (( Object_t * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18862_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18864_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18864(__this, method) (( Object_t* (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18864_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18866_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18866(__this, method) (( Object_t * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18866_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18868_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18868(__this, method) (( int32_t (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_get_Count_m18868_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2049  Dictionary_2_get_Item_m18870_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18870(__this, ___key, method) (( KeyValuePair_2_t2049  (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18870_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18872_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18872(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_set_Item_m18872_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18874_gshared (Dictionary_2_t2492 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18874(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2492 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18874_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18876_gshared (Dictionary_2_t2492 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18876(__this, ___size, method) (( void (*) (Dictionary_2_t2492 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18876_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18878_gshared (Dictionary_2_t2492 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18878(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18878_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2468  Dictionary_2_make_pair_m18880_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18880(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2468  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_make_pair_m18880_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18882_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18882(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_pick_key_m18882_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2049  Dictionary_2_pick_value_m18884_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18884(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2049  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_pick_value_m18884_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18886_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2797* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18886(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2797*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18886_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m18888_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18888(__this, method) (( void (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_Resize_m18888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18890_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18890(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_Add_m18890_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m18892_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18892(__this, method) (( void (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_Clear_m18892_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18894_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18894(__this, ___key, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18894_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18896_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18896(__this, ___value, method) (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_ContainsValue_m18896_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18898_gshared (Dictionary_2_t2492 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18898(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2492 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2_GetObjectData_m18898_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18900_gshared (Dictionary_2_t2492 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18900(__this, ___sender, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18900_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18902_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18902(__this, ___key, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18902_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18904_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, KeyValuePair_2_t2049 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18904(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, KeyValuePair_2_t2049 *, const MethodInfo*))Dictionary_2_TryGetValue_m18904_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2495 * Dictionary_2_get_Keys_m18906_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18906(__this, method) (( KeyCollection_t2495 * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_get_Keys_m18906_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2499 * Dictionary_2_get_Values_m18908_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18908(__this, method) (( ValueCollection_t2499 * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_get_Values_m18908_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18910_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18910(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18910_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2049  Dictionary_2_ToTValue_m18912_gshared (Dictionary_2_t2492 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18912(__this, ___value, method) (( KeyValuePair_2_t2049  (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18912_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18914_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18914(__this, ___pair, method) (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2468 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18914_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2497  Dictionary_2_GetEnumerator_m18916_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18916(__this, method) (( Enumerator_t2497  (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18916_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m18918_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18918(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1247  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18918_gshared)(__this /* static, unused */, ___key, ___value, method)
