#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2538;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2529;
// System.Collections.Generic.IEnumerator`1<UnityEngine.TextEditor/TextEditOp>
struct IEnumerator_1_t2808;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Object
struct Object_t;
// UnityEngine.TextEditor/TextEditOp[]
struct TextEditOpU5BU5D_t2526;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_37.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m19355_gshared (ValueCollection_t2538 * __this, Dictionary_2_t2529 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m19355(__this, ___dictionary, method) (( void (*) (ValueCollection_t2538 *, Dictionary_2_t2529 *, const MethodInfo*))ValueCollection__ctor_m19355_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19356_gshared (ValueCollection_t2538 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19356(__this, ___item, method) (( void (*) (ValueCollection_t2538 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19357_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19357(__this, method) (( void (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19358_gshared (ValueCollection_t2538 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19358(__this, ___item, method) (( bool (*) (ValueCollection_t2538 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19358_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19359_gshared (ValueCollection_t2538 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19359(__this, ___item, method) (( bool (*) (ValueCollection_t2538 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19359_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19360_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19360(__this, method) (( Object_t* (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m19361_gshared (ValueCollection_t2538 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m19361(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2538 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m19361_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19362_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19362(__this, method) (( Object_t * (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19362_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19363_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19363(__this, method) (( bool (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19364_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19364(__this, method) (( bool (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19364_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m19365_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m19365(__this, method) (( Object_t * (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m19365_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m19366_gshared (ValueCollection_t2538 * __this, TextEditOpU5BU5D_t2526* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m19366(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2538 *, TextEditOpU5BU5D_t2526*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m19366_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2539  ValueCollection_GetEnumerator_m19367_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m19367(__this, method) (( Enumerator_t2539  (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_GetEnumerator_m19367_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m19368_gshared (ValueCollection_t2538 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m19368(__this, method) (( int32_t (*) (ValueCollection_t2538 *, const MethodInfo*))ValueCollection_get_Count_m19368_gshared)(__this, method)
