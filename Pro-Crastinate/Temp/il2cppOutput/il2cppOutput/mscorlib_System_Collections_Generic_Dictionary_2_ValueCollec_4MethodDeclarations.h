#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>
struct ValueCollection_t1990;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
struct Dictionary_2_t1981;
// System.Collections.Generic.IEnumerator`1<RMX.EventStatus>
struct IEnumerator_1_t2652;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// RMX.EventStatus[]
struct EventStatusU5BU5D_t1976;
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m11961_gshared (ValueCollection_t1990 * __this, Dictionary_2_t1981 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m11961(__this, ___dictionary, method) (( void (*) (ValueCollection_t1990 *, Dictionary_2_t1981 *, const MethodInfo*))ValueCollection__ctor_m11961_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11962_gshared (ValueCollection_t1990 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11962(__this, ___item, method) (( void (*) (ValueCollection_t1990 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11962_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11963_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11963(__this, method) (( void (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11963_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11964_gshared (ValueCollection_t1990 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11964(__this, ___item, method) (( bool (*) (ValueCollection_t1990 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11964_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11965_gshared (ValueCollection_t1990 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11965(__this, ___item, method) (( bool (*) (ValueCollection_t1990 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11965_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11966_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11966(__this, method) (( Object_t* (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m11967_gshared (ValueCollection_t1990 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m11967(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1990 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m11967_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11968_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11968(__this, method) (( Object_t * (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11968_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11969_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11969(__this, method) (( bool (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m11970_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m11970(__this, method) (( bool (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m11970_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m11971_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m11971(__this, method) (( Object_t * (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m11971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m11972_gshared (ValueCollection_t1990 * __this, EventStatusU5BU5D_t1976* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m11972(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1990 *, EventStatusU5BU5D_t1976*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m11972_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::GetEnumerator()
extern "C" Enumerator_t1991  ValueCollection_GetEnumerator_m11973_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m11973(__this, method) (( Enumerator_t1991  (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_GetEnumerator_m11973_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m11974_gshared (ValueCollection_t1990 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m11974(__this, method) (( int32_t (*) (ValueCollection_t1990 *, const MethodInfo*))ValueCollection_get_Count_m11974_gshared)(__this, method)
