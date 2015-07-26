#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2445;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2898;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t2446;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2450;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1979;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t2899;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t2900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t2901;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m18561_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18561(__this, method) (( void (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2__ctor_m18561_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18563_gshared (Dictionary_2_t2445 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18563(__this, ___comparer, method) (( void (*) (Dictionary_2_t2445 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18563_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18565_gshared (Dictionary_2_t2445 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18565(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2445 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18565_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18567_gshared (Dictionary_2_t2445 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18567(__this, ___capacity, method) (( void (*) (Dictionary_2_t2445 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18569_gshared (Dictionary_2_t2445 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18569(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2445 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18569_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18571_gshared (Dictionary_2_t2445 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18571(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2445 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m18571_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18573_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18573(__this, method) (( Object_t* (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18573_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18575_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18575(__this, method) (( Object_t* (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18575_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18577_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18577(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18577_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18579_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18579(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2445 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18579_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18581_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2445 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18581_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18583_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18583(__this, ___key, method) (( bool (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18583_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18585_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18585(__this, ___key, method) (( void (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18585_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18587_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18587(__this, method) (( bool (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18587_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18589_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18589(__this, method) (( Object_t * (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18589_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18591_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18591(__this, method) (( bool (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18593_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18593(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2419 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18593_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18595_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18595(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2419 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18595_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18597_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2U5BU5D_t2900* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18597(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2900*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18597_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18599_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18599(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2419 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18599_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18601_gshared (Dictionary_2_t2445 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18601(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18601_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18603_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18603(__this, method) (( Object_t * (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18603_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18605_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18605(__this, method) (( Object_t* (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18605_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18607_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18607(__this, method) (( Object_t * (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18607_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18609_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18609(__this, method) (( int32_t (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_get_Count_m18609_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2006  Dictionary_2_get_Item_m18611_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18611(__this, ___key, method) (( KeyValuePair_2_t2006  (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18611_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18613_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18613(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2445 *, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_set_Item_m18613_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18615_gshared (Dictionary_2_t2445 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18615(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2445 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18615_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18617_gshared (Dictionary_2_t2445 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18617(__this, ___size, method) (( void (*) (Dictionary_2_t2445 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18617_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18619_gshared (Dictionary_2_t2445 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18619(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18619_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2419  Dictionary_2_make_pair_m18621_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18621(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2419  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_make_pair_m18621_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18623_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18623(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_pick_key_m18623_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2006  Dictionary_2_pick_value_m18625_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18625(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2006  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_pick_value_m18625_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18627_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2U5BU5D_t2900* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18627(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2900*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18627_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m18629_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18629(__this, method) (( void (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_Resize_m18629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18631_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18631(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2445 *, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_Add_m18631_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m18633_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18633(__this, method) (( void (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_Clear_m18633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18635_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18635(__this, ___key, method) (( bool (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18635_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18637_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18637(__this, ___value, method) (( bool (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_ContainsValue_m18637_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18639_gshared (Dictionary_2_t2445 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18639(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2445 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m18639_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18641_gshared (Dictionary_2_t2445 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18641(__this, ___sender, method) (( void (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18641_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18643_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18643(__this, ___key, method) (( bool (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18643_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18645_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, KeyValuePair_2_t2006 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18645(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2445 *, Object_t *, KeyValuePair_2_t2006 *, const MethodInfo*))Dictionary_2_TryGetValue_m18645_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2446 * Dictionary_2_get_Keys_m18647_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18647(__this, method) (( KeyCollection_t2446 * (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_get_Keys_m18647_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2450 * Dictionary_2_get_Values_m18649_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18649(__this, method) (( ValueCollection_t2450 * (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_get_Values_m18649_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18651_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18651(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18651_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2006  Dictionary_2_ToTValue_m18653_gshared (Dictionary_2_t2445 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18653(__this, ___value, method) (( KeyValuePair_2_t2006  (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18653_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18655_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18655(__this, ___pair, method) (( bool (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2419 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18655_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2448  Dictionary_2_GetEnumerator_m18657_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18657(__this, method) (( Enumerator_t2448  (*) (Dictionary_2_t2445 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18657_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m18659_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18659(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18659_gshared)(__this /* static, unused */, ___key, ___value, method)
