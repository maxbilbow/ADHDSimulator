#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2423;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2421;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2443;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2657;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m18206_gshared (ThreadSafeDictionary_2_t2423 * __this, ThreadSafeDictionaryValueFactory_2_t2421 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m18206(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2423 *, ThreadSafeDictionaryValueFactory_2_t2421 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m18206_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18208_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18208(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18208_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m18210_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m18210(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m18210_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m18212_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m18212(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m18212_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m18214_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m18214(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m18214_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m18216_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m18216(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2423 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m18216_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m18218_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m18218(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m18218_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m18220_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m18220(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2423 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m18220_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m18222_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m18222(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m18222_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m18224_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m18224(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m18224_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m18226_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m18226(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2423 *, KeyValuePair_2_t2006 , const MethodInfo*))ThreadSafeDictionary_2_Add_m18226_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m18228_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m18228(__this, method) (( void (*) (ThreadSafeDictionary_2_t2423 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m18228_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m18230_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m18230(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2423 *, KeyValuePair_2_t2006 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m18230_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m18232_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2U5BU5D_t2443* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m18232(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2423 *, KeyValuePair_2U5BU5D_t2443*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m18232_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m18234_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m18234(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2423 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m18234_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m18236_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m18236(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2423 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m18236_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m18238_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m18238(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2423 *, KeyValuePair_2_t2006 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m18238_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m18240_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m18240(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2423 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m18240_gshared)(__this, method)
