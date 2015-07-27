#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2195;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2194;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2723;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2721;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2724;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1246;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2199;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2203;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14506_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14506(__this, method) (( void (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2__ctor_m14506_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14508_gshared (Dictionary_2_t2195 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14508(__this, ___comparer, method) (( void (*) (Dictionary_2_t2195 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14508_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14510_gshared (Dictionary_2_t2195 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m14510(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2195 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14510_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14512_gshared (Dictionary_2_t2195 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14512(__this, ___capacity, method) (( void (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14512_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14514_gshared (Dictionary_2_t2195 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14514(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2195 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14514_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14516_gshared (Dictionary_2_t2195 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14516(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2195 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2__ctor_m14516_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14518_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14518(__this, method) (( Object_t* (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14518_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14520_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14520(__this, method) (( Object_t* (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14520_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14522_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14522(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14522_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14524_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14524(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14524_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14526_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14526(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14526_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14528_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14528(__this, ___key, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14528_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14530_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14530(__this, ___key, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14530_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14532_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14532(__this, method) (( bool (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14532_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14534_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14534(__this, method) (( Object_t * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14534_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14536_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14536(__this, method) (( bool (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14536_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14538_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14538(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14538_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14540_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14540(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14540_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14542_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14542(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14542_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14544_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14544(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14544_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14546_gshared (Dictionary_2_t2195 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14546(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14546_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14548_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14548(__this, method) (( Object_t * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14548_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14550_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14550(__this, method) (( Object_t* (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14550_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14552_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14552(__this, method) (( Object_t * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14552_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14554_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14554(__this, method) (( int32_t (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_get_Count_m14554_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14556_gshared (Dictionary_2_t2195 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14556(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m14556_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14558_gshared (Dictionary_2_t2195 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14558(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14558_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14560_gshared (Dictionary_2_t2195 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14560(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2195 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14560_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14562_gshared (Dictionary_2_t2195 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14562(__this, ___size, method) (( void (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14562_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14564_gshared (Dictionary_2_t2195 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14564_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2197  Dictionary_2_make_pair_m14566_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14566(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2197  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14566_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m14568_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14568(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m14568_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14570_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14570(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14570_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14572_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14572(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14572_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14574_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14574(__this, method) (( void (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_Resize_m14574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14576_gshared (Dictionary_2_t2195 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14576(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m14576_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14578_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14578(__this, method) (( void (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_Clear_m14578_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14580_gshared (Dictionary_2_t2195 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14580(__this, ___key, method) (( bool (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m14580_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14582_gshared (Dictionary_2_t2195 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14582(__this, ___value, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14582_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14584_gshared (Dictionary_2_t2195 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14584(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2195 *, SerializationInfo_t818 *, StreamingContext_t819 , const MethodInfo*))Dictionary_2_GetObjectData_m14584_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14586_gshared (Dictionary_2_t2195 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14586(__this, ___sender, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14586_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14588_gshared (Dictionary_2_t2195 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14588(__this, ___key, method) (( bool (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m14588_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14590_gshared (Dictionary_2_t2195 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14590(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2195 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14590_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2199 * Dictionary_2_get_Keys_m14592_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14592(__this, method) (( KeyCollection_t2199 * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_get_Keys_m14592_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2203 * Dictionary_2_get_Values_m14593_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14593(__this, method) (( ValueCollection_t2203 * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_get_Values_m14593_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m14595_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14595(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14595_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14597_gshared (Dictionary_2_t2195 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14597(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14597_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14599_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14599(__this, ___pair, method) (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14599_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2201  Dictionary_2_GetEnumerator_m14600_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14600(__this, method) (( Enumerator_t2201  (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14600_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m14602_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14602(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1247  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14602_gshared)(__this /* static, unused */, ___key, ___value, method)
