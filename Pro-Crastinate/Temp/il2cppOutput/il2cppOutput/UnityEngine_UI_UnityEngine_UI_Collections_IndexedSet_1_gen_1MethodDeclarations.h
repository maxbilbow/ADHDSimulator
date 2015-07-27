#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2222;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2006;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Predicate`1<System.Object>
struct Predicate_1_t1971;
// System.Comparison`1<System.Object>
struct Comparison_1_t1977;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14866_gshared (IndexedSet_1_t2222 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m14866(__this, method) (( void (*) (IndexedSet_1_t2222 *, const MethodInfo*))IndexedSet_1__ctor_m14866_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14868_gshared (IndexedSet_1_t2222 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14868(__this, method) (( Object_t * (*) (IndexedSet_1_t2222 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14868_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14870_gshared (IndexedSet_1_t2222 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14870(__this, ___item, method) (( void (*) (IndexedSet_1_t2222 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14870_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14872_gshared (IndexedSet_1_t2222 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14872(__this, ___item, method) (( bool (*) (IndexedSet_1_t2222 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14872_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14874_gshared (IndexedSet_1_t2222 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14874(__this, method) (( Object_t* (*) (IndexedSet_1_t2222 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14874_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14876_gshared (IndexedSet_1_t2222 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14876(__this, method) (( void (*) (IndexedSet_1_t2222 *, const MethodInfo*))IndexedSet_1_Clear_m14876_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14878_gshared (IndexedSet_1_t2222 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14878(__this, ___item, method) (( bool (*) (IndexedSet_1_t2222 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14878_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14880_gshared (IndexedSet_1_t2222 * __this, ObjectU5BU5D_t148* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14880(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2222 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14880_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14882_gshared (IndexedSet_1_t2222 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14882(__this, method) (( int32_t (*) (IndexedSet_1_t2222 *, const MethodInfo*))IndexedSet_1_get_Count_m14882_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14884_gshared (IndexedSet_1_t2222 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14884(__this, method) (( bool (*) (IndexedSet_1_t2222 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14884_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14886_gshared (IndexedSet_1_t2222 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14886(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2222 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14886_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14888_gshared (IndexedSet_1_t2222 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14888(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2222 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14888_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14890_gshared (IndexedSet_1_t2222 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14890(__this, ___index, method) (( void (*) (IndexedSet_1_t2222 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14890_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14892_gshared (IndexedSet_1_t2222 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14892(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2222 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14892_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14894_gshared (IndexedSet_1_t2222 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14894(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2222 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14894_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14895_gshared (IndexedSet_1_t2222 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14895(__this, ___match, method) (( void (*) (IndexedSet_1_t2222 *, Predicate_1_t1971 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14895_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14896_gshared (IndexedSet_1_t2222 * __this, Comparison_1_t1977 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14896(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2222 *, Comparison_1_t1977 *, const MethodInfo*))IndexedSet_1_Sort_m14896_gshared)(__this, ___sortLayoutFunction, method)
