#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2472;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2470;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t810;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2493;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2696;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m18480_gshared (ThreadSafeDictionary_2_t2472 * __this, ThreadSafeDictionaryValueFactory_2_t2470 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m18480(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2472 *, ThreadSafeDictionaryValueFactory_2_t2470 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m18480_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18482_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18482(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18482_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m18484_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m18484(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m18484_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m18486_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m18486(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m18486_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m18488_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m18488(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m18488_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m18490_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m18490(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2472 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m18490_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m18492_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m18492(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m18492_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m18494_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m18494(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2472 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m18494_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m18496_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m18496(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m18496_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m18498_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m18498(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m18498_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m18500_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m18500(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2472 *, KeyValuePair_2_t2049 , const MethodInfo*))ThreadSafeDictionary_2_Add_m18500_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m18502_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m18502(__this, method) (( void (*) (ThreadSafeDictionary_2_t2472 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m18502_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m18504_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m18504(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2472 *, KeyValuePair_2_t2049 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m18504_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m18506_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m18506(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2472 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m18506_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m18508_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m18508(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2472 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m18508_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m18510_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m18510(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2472 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m18510_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m18512_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m18512(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2472 *, KeyValuePair_2_t2049 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m18512_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m18514_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m18514(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2472 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m18514_gshared)(__this, method)
