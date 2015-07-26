#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2531;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2925;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2535;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2539;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1979;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t2929;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2930;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2931;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__28.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19457_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19457(__this, method) (( void (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2__ctor_m19457_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19458_gshared (Dictionary_2_t2531 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19458(__this, ___comparer, method) (( void (*) (Dictionary_2_t2531 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19458_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19460_gshared (Dictionary_2_t2531 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m19460(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2531 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19460_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19462_gshared (Dictionary_2_t2531 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19462(__this, ___capacity, method) (( void (*) (Dictionary_2_t2531 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19462_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19464_gshared (Dictionary_2_t2531 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19464(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2531 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19464_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19466_gshared (Dictionary_2_t2531 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19466(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2531 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m19466_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19468_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19468(__this, method) (( Object_t* (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19468_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19470_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19470(__this, method) (( Object_t* (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19470_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19472_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19472(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19472_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19474_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19474(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2531 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19474_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19476_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19476(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2531 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19476_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19478_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19478(__this, ___key, method) (( bool (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19478_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19480_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19480(__this, ___key, method) (( void (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19480_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19482_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19482(__this, method) (( bool (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19482_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19484_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19484(__this, method) (( Object_t * (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19484_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19486_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19486(__this, method) (( bool (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19488_gshared (Dictionary_2_t2531 * __this, KeyValuePair_2_t2532  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19488(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2531 *, KeyValuePair_2_t2532 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19488_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19490_gshared (Dictionary_2_t2531 * __this, KeyValuePair_2_t2532  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19490(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2531 *, KeyValuePair_2_t2532 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19490_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19492_gshared (Dictionary_2_t2531 * __this, KeyValuePair_2U5BU5D_t2930* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19492(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2531 *, KeyValuePair_2U5BU5D_t2930*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19492_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19494_gshared (Dictionary_2_t2531 * __this, KeyValuePair_2_t2532  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19494(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2531 *, KeyValuePair_2_t2532 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19494_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19496_gshared (Dictionary_2_t2531 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19496(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2531 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19496_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19498_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19498(__this, method) (( Object_t * (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19498_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19500_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19500(__this, method) (( Object_t* (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19500_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19502_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19502(__this, method) (( Object_t * (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19502_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19504_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19504(__this, method) (( int32_t (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_get_Count_m19504_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19506_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19506(__this, ___key, method) (( bool (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19506_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19508_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19508(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2531 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19508_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19510_gshared (Dictionary_2_t2531 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19510(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2531 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19510_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19512_gshared (Dictionary_2_t2531 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19512(__this, ___size, method) (( void (*) (Dictionary_2_t2531 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19512_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19514_gshared (Dictionary_2_t2531 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19514(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2531 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19514_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2532  Dictionary_2_make_pair_m19516_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19516(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2532  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19516_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19518_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19518(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m19518_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19520_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19520(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19520_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19522_gshared (Dictionary_2_t2531 * __this, KeyValuePair_2U5BU5D_t2930* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19522(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2531 *, KeyValuePair_2U5BU5D_t2930*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19522_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19524_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19524(__this, method) (( void (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_Resize_m19524_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19526_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19526(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2531 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19526_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19528_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19528(__this, method) (( void (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_Clear_m19528_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19530_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19530(__this, ___key, method) (( bool (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19530_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19532_gshared (Dictionary_2_t2531 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19532(__this, ___value, method) (( bool (*) (Dictionary_2_t2531 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19532_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19534_gshared (Dictionary_2_t2531 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19534(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2531 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m19534_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19536_gshared (Dictionary_2_t2531 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19536(__this, ___sender, method) (( void (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19536_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19538_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19538(__this, ___key, method) (( bool (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19538_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19540_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19540(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2531 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19540_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2535 * Dictionary_2_get_Keys_m19542_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19542(__this, method) (( KeyCollection_t2535 * (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_get_Keys_m19542_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2539 * Dictionary_2_get_Values_m19544_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19544(__this, method) (( ValueCollection_t2539 * (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_get_Values_m19544_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19546_gshared (Dictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19546(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19546_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19548_gshared (Dictionary_2_t2531 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19548(__this, ___value, method) (( bool (*) (Dictionary_2_t2531 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19548_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19550_gshared (Dictionary_2_t2531 * __this, KeyValuePair_2_t2532  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19550(__this, ___pair, method) (( bool (*) (Dictionary_2_t2531 *, KeyValuePair_2_t2532 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19550_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2537  Dictionary_2_GetEnumerator_m19552_gshared (Dictionary_2_t2531 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19552(__this, method) (( Enumerator_t2537  (*) (Dictionary_2_t2531 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19552_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m19554_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19554(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19554_gshared)(__this /* static, unused */, ___key, ___value, method)
