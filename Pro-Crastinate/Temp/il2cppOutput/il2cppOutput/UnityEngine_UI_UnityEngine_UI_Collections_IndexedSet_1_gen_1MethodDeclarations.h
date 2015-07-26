#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2174;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1962;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Predicate`1<System.Object>
struct Predicate_1_t1941;
// System.Comparison`1<System.Object>
struct Comparison_1_t1947;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14607_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m14607(__this, method) (( void (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1__ctor_m14607_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14609_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14609(__this, method) (( Object_t * (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14609_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14611_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14611(__this, ___item, method) (( void (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14611_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14613_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14613(__this, ___item, method) (( bool (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14613_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14615_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14615(__this, method) (( Object_t* (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14615_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14617_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14617(__this, method) (( void (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_Clear_m14617_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14619_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14619(__this, ___item, method) (( bool (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14619_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14621_gshared (IndexedSet_1_t2174 * __this, ObjectU5BU5D_t146* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14621(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2174 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14621_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14623_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14623(__this, method) (( int32_t (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_get_Count_m14623_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14625_gshared (IndexedSet_1_t2174 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14625(__this, method) (( bool (*) (IndexedSet_1_t2174 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14625_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14627_gshared (IndexedSet_1_t2174 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14627(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2174 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14627_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14629_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14629(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2174 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14629_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14631_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14631(__this, ___index, method) (( void (*) (IndexedSet_1_t2174 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14631_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14633_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14633(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2174 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14633_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14635_gshared (IndexedSet_1_t2174 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14635(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2174 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14635_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14636_gshared (IndexedSet_1_t2174 * __this, Predicate_1_t1941 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14636(__this, ___match, method) (( void (*) (IndexedSet_1_t2174 *, Predicate_1_t1941 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14636_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14637_gshared (IndexedSet_1_t2174 * __this, Comparison_1_t1947 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14637(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2174 *, Comparison_1_t1947 *, const MethodInfo*))IndexedSet_1_Sort_m14637_gshared)(__this, ___sortLayoutFunction, method)
