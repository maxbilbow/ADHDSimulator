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
extern "C" void Dictionary_2__ctor_m17482_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17482(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2__ctor_m17482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17484_gshared (Dictionary_2_t2362 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17484(__this, ___comparer, method) (( void (*) (Dictionary_2_t2362 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17484_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17486_gshared (Dictionary_2_t2362 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17486(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2362 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17486_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17488_gshared (Dictionary_2_t2362 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17488(__this, ___capacity, method) (( void (*) (Dictionary_2_t2362 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17488_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17490_gshared (Dictionary_2_t2362 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17490(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2362 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17490_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17492_gshared (Dictionary_2_t2362 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17492(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2362 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m17492_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17494_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17494(__this, method) (( Object_t* (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17494_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17496_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17496(__this, method) (( Object_t* (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17496_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17498_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17498(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17498_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17500_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17500(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17500_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17502_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17502(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17502_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17504_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17504(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17504_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17506_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17506(__this, ___key, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17506_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17508_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17508(__this, method) (( bool (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17508_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17510_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17510(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17512_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17512(__this, method) (( bool (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17512_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17514_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17514(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17514_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17516_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17516(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17518_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2U5BU5D_t2848* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17518(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2U5BU5D_t2848*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17518_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17520_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17520(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17520_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17522_gshared (Dictionary_2_t2362 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17522(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17522_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17524_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17524(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17524_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17526_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17526(__this, method) (( Object_t* (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17526_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17528_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17528(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17528_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17530_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17530(__this, method) (( int32_t (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Count_m17530_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m17532_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17532(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17532_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17534_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17534(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m17534_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17536_gshared (Dictionary_2_t2362 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17536(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2362 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17536_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17538_gshared (Dictionary_2_t2362 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17538(__this, ___size, method) (( void (*) (Dictionary_2_t2362 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17538_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17540_gshared (Dictionary_2_t2362 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17540_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2363  Dictionary_2_make_pair_m17542_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17542(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2363  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m17542_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17544_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17544(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m17544_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m17546_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17546(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m17546_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17548_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2U5BU5D_t2848* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17548(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2U5BU5D_t2848*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17548_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m17550_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17550(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_Resize_m17550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17552_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m17552_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m17554_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17554(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_Clear_m17554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17556_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17556(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17556_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17558_gshared (Dictionary_2_t2362 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17558(__this, ___value, method) (( bool (*) (Dictionary_2_t2362 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m17558_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17560_gshared (Dictionary_2_t2362 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17560(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2362 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m17560_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17562_gshared (Dictionary_2_t2362 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17562(__this, ___sender, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17562_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17564_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17564(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17564_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17566_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17566(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17566_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2366 * Dictionary_2_get_Keys_m17568_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17568(__this, method) (( KeyCollection_t2366 * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Keys_m17568_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2370 * Dictionary_2_get_Values_m17570_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17570(__this, method) (( ValueCollection_t2370 * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Values_m17570_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17572_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17572(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17572_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m17574_gshared (Dictionary_2_t2362 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17574(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17574_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17576_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2363  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17576(__this, ___pair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17576_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2368  Dictionary_2_GetEnumerator_m17578_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17578(__this, method) (( Enumerator_t2368  (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17578_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m17580_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17580(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17580_gshared)(__this /* static, unused */, ___key, ___value, method)
