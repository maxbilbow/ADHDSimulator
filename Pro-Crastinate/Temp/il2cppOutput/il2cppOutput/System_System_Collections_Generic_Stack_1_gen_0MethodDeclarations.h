#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2162;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2006;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m13987_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1__ctor_m13987(__this, method) (( void (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1__ctor_m13987_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m13988_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m13988(__this, method) (( bool (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m13988_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m13989_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m13989(__this, method) (( Object_t * (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m13989_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m13990_gshared (Stack_1_t2162 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m13990(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2162 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m13990_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13991_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13991(__this, method) (( Object_t* (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13991_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m13992_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m13992(__this, method) (( Object_t * (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m13992_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m13993_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_Peek_m13993(__this, method) (( Object_t * (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_Peek_m13993_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m13994_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_Pop_m13994(__this, method) (( Object_t * (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_Pop_m13994_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m13995_gshared (Stack_1_t2162 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m13995(__this, ___t, method) (( void (*) (Stack_1_t2162 *, Object_t *, const MethodInfo*))Stack_1_Push_m13995_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m13996_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m13996(__this, method) (( int32_t (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_get_Count_m13996_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2163  Stack_1_GetEnumerator_m13997_gshared (Stack_1_t2162 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m13997(__this, method) (( Enumerator_t2163  (*) (Stack_1_t2162 *, const MethodInfo*))Stack_1_GetEnumerator_m13997_gshared)(__this, method)
