#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t517;
// UnityEngine.UI.Graphic
struct Graphic_t358;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t2770;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2222;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2224;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t361;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m2409(__this, method) (( void (*) (IndexedSet_1_t517 *, const MethodInfo*))IndexedSet_1__ctor_m14604_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15545(__this, method) (( Object_t * (*) (IndexedSet_1_t517 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14606_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m15546(__this, ___item, method) (( void (*) (IndexedSet_1_t517 *, Graphic_t358 *, const MethodInfo*))IndexedSet_1_Add_m14608_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m15547(__this, ___item, method) (( bool (*) (IndexedSet_1_t517 *, Graphic_t358 *, const MethodInfo*))IndexedSet_1_Remove_m14610_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m15548(__this, method) (( Object_t* (*) (IndexedSet_1_t517 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14612_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m15549(__this, method) (( void (*) (IndexedSet_1_t517 *, const MethodInfo*))IndexedSet_1_Clear_m14614_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m15550(__this, ___item, method) (( bool (*) (IndexedSet_1_t517 *, Graphic_t358 *, const MethodInfo*))IndexedSet_1_Contains_m14616_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m15551(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t517 *, GraphicU5BU5D_t2222*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m15552(__this, method) (( int32_t (*) (IndexedSet_1_t517 *, const MethodInfo*))IndexedSet_1_get_Count_m14620_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m15553(__this, method) (( bool (*) (IndexedSet_1_t517 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14622_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m15554(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t517 *, Graphic_t358 *, const MethodInfo*))IndexedSet_1_IndexOf_m14624_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m15555(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t517 *, int32_t, Graphic_t358 *, const MethodInfo*))IndexedSet_1_Insert_m14626_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m15556(__this, ___index, method) (( void (*) (IndexedSet_1_t517 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14628_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m15557(__this, ___index, method) (( Graphic_t358 * (*) (IndexedSet_1_t517 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14630_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m15558(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t517 *, int32_t, Graphic_t358 *, const MethodInfo*))IndexedSet_1_set_Item_m14632_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m15559(__this, ___match, method) (( void (*) (IndexedSet_1_t517 *, Predicate_1_t2224 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14633_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m15560(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t517 *, Comparison_1_t361 *, const MethodInfo*))IndexedSet_1_Sort_m14634_gshared)(__this, ___sortLayoutFunction, method)
