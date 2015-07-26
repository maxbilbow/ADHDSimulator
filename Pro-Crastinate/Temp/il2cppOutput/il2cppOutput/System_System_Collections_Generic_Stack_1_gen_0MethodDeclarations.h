#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2112;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1962;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m13725_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1__ctor_m13725(__this, method) (( void (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1__ctor_m13725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m13726_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m13726(__this, method) (( bool (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m13726_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m13727_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m13727(__this, method) (( Object_t * (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m13727_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m13728_gshared (Stack_1_t2112 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m13728(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2112 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m13728_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13729_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13729(__this, method) (( Object_t* (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13729_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m13730_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m13730(__this, method) (( Object_t * (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m13730_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m13731_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_Peek_m13731(__this, method) (( Object_t * (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_Peek_m13731_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m13732_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_Pop_m13732(__this, method) (( Object_t * (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_Pop_m13732_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m13733_gshared (Stack_1_t2112 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m13733(__this, ___t, method) (( void (*) (Stack_1_t2112 *, Object_t *, const MethodInfo*))Stack_1_Push_m13733_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m13734_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m13734(__this, method) (( int32_t (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_get_Count_m13734_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2114  Stack_1_GetEnumerator_m13735_gshared (Stack_1_t2112 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m13735(__this, method) (( Enumerator_t2114  (*) (Stack_1_t2112 *, const MethodInfo*))Stack_1_GetEnumerator_m13735_gshared)(__this, method)
