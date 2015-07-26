#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2362;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2843;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2366;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2370;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1979;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2847;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2848;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2849;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m17467_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17467(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2__ctor_m17467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17469_gshared (Dictionary_2_t2362 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17469(__this, ___comparer, method) (( void (*) (Dictionary_2_t2362 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17469_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17471_gshared (Dictionary_2_t2362 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17471(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2362 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17471_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17473_gshared (Dictionary_2_t2362 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17473(__this, ___capacity, method) (( void (*) (Dictionary_2_t2362 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17473_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17475_gshared (Dictionary_2_t2362 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17475(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2362 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17475_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17477_gshared (Dictionary_2_t2362 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17477(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2362 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m17477_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17479_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17479(__this, method) (( Object_t* (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17479_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17481_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17481(__this, method) (( Object_t* (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17481_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17483_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17483(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17483_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17485_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17485(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17485_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17487_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17487(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17487_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17489_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17489(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17489_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17491_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17491(__this, ___key, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17491_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17493_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17493(__this, method) (( bool (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17493_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17495_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17495(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17497_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17497(__this, method) (( bool (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17499_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17499(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17499_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17501_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17501(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17501_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17503_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2U5BU5D_t2848* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17503(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2U5BU5D_t2848*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17503_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17505_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17505(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17505_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17507_gshared (Dictionary_2_t2362 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17507(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17507_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17509_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17509(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17509_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17511_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17511(__this, method) (( Object_t* (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17511_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17513_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17513(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17513_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17515_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17515(__this, method) (( int32_t (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Count_m17515_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m17517_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17517(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17517_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17519_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17519(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m17519_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17521_gshared (Dictionary_2_t2362 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17521(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2362 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17521_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17523_gshared (Dictionary_2_t2362 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17523(__this, ___size, method) (( void (*) (Dictionary_2_t2362 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17523_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17525_gshared (Dictionary_2_t2362 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17525(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17525_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2363  Dictionary_2_make_pair_m17527_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17527(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2363  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m17527_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17529_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17529(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m17529_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m17531_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17531(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m17531_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17533_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2U5BU5D_t2848* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17533(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2U5BU5D_t2848*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17533_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m17535_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17535(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_Resize_m17535_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17537_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17537(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m17537_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m17539_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17539(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_Clear_m17539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17541_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17541(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17541_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17543_gshared (Dictionary_2_t2362 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17543(__this, ___value, method) (( bool (*) (Dictionary_2_t2362 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m17543_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17545_gshared (Dictionary_2_t2362 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17545(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2362 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m17545_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17547_gshared (Dictionary_2_t2362 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17547(__this, ___sender, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17547_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17549_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17549(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17551_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17551(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17551_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2366 * Dictionary_2_get_Keys_m17553_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17553(__this, method) (( KeyCollection_t2366 * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Keys_m17553_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2370 * Dictionary_2_get_Values_m17555_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17555(__this, method) (( ValueCollection_t2370 * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Values_m17555_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17557_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17557(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17557_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m17559_gshared (Dictionary_2_t2362 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17559(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17559_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17561_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17561(__this, ___pair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17561_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2368  Dictionary_2_GetEnumerator_m17563_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17563(__this, method) (( Enumerator_t2368  (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17563_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m17565_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17565(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17565_gshared)(__this /* static, unused */, ___key, ___value, method)
