#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
struct Dictionary_2_t2062;
// System.Collections.Generic.ICollection`1<Procrastinate.UserData>
struct ICollection_1_t2685;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>
struct KeyCollection_t2069;
// System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>
struct ValueCollection_t2072;
// System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>
struct IEqualityComparer_1_t2065;
// System.Collections.Generic.IDictionary`2<Procrastinate.UserData,System.Object>
struct IDictionary_2_t2686;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>[]
struct KeyValuePair_2U5BU5D_t2687;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>
struct IEnumerator_1_t2688;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1234;
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12990_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12990(__this, method) (( void (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2__ctor_m12990_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12991_gshared (Dictionary_2_t2062 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12991(__this, ___comparer, method) (( void (*) (Dictionary_2_t2062 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12991_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12992_gshared (Dictionary_2_t2062 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12992(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2062 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12992_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12993_gshared (Dictionary_2_t2062 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12993(__this, ___capacity, method) (( void (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12993_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12994_gshared (Dictionary_2_t2062 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12994(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2062 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12994_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12995_gshared (Dictionary_2_t2062 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12995(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2062 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2__ctor_m12995_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12996_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12996(__this, method) (( Object_t* (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12996_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12997_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12997(__this, method) (( Object_t* (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12997_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12998_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12998(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12998_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12999_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12999(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12999_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13000_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13000(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13000_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13001_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13001(__this, ___key, method) (( bool (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13001_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13002_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13002(__this, ___key, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13002_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13003_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13003(__this, method) (( bool (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13003_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13004_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13004(__this, method) (( Object_t * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13004_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13005_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13005(__this, method) (( bool (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13006_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2061  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13006(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2061 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13006_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13007_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2061  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13007(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2061 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13007_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13008_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2U5BU5D_t2687* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13008(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, KeyValuePair_2U5BU5D_t2687*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13008_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13009_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2061  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13009(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2061 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13009_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13010_gshared (Dictionary_2_t2062 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13010(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13010_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13011_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13011(__this, method) (( Object_t * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13011_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13012_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13012(__this, method) (( Object_t* (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13012_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13013_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13013(__this, method) (( Object_t * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13013_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13014_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13014(__this, method) (( int32_t (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_get_Count_m13014_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13015_gshared (Dictionary_2_t2062 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13015(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13015_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13016_gshared (Dictionary_2_t2062 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13017_gshared (Dictionary_2_t2062 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13017(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2062 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13017_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13018_gshared (Dictionary_2_t2062 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13018(__this, ___size, method) (( void (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13018_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13019_gshared (Dictionary_2_t2062 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13019(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13019_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2061  Dictionary_2_make_pair_m13020_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13020(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2061  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13020_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m13021_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13021(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m13021_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13022_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13022(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13022_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13023_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2U5BU5D_t2687* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13023(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, KeyValuePair_2U5BU5D_t2687*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13023_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13024_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13024(__this, method) (( void (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_Resize_m13024_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13025_gshared (Dictionary_2_t2062 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13025(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13025_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13026_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13026(__this, method) (( void (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_Clear_m13026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13027_gshared (Dictionary_2_t2062 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13027(__this, ___key, method) (( bool (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13027_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13028_gshared (Dictionary_2_t2062 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13028(__this, ___value, method) (( bool (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13028_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13029_gshared (Dictionary_2_t2062 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13029(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2062 *, SerializationInfo_t809 *, StreamingContext_t810 , const MethodInfo*))Dictionary_2_GetObjectData_m13029_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13030_gshared (Dictionary_2_t2062 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13030(__this, ___sender, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13030_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13031_gshared (Dictionary_2_t2062 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13031(__this, ___key, method) (( bool (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13031_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13032_gshared (Dictionary_2_t2062 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13032(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2062 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13032_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Keys()
extern "C" KeyCollection_t2069 * Dictionary_2_get_Keys_m13033_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13033(__this, method) (( KeyCollection_t2069 * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_get_Keys_m13033_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Values()
extern "C" ValueCollection_t2072 * Dictionary_2_get_Values_m13034_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13034(__this, method) (( ValueCollection_t2072 * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_get_Values_m13034_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13035_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13035(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13035_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13036_gshared (Dictionary_2_t2062 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13036(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13036_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13037_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2061  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13037(__this, ___pair, method) (( bool (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2061 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13037_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::GetEnumerator()
extern "C" Enumerator_t2063  Dictionary_2_GetEnumerator_m13038_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13038(__this, method) (( Enumerator_t2063  (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13038_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m13039_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13039(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1235  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13039_gshared)(__this /* static, unused */, ___key, ___value, method)
