#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack
struct Stack_t792;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;

// System.Void System.Collections.Stack::.ctor()
extern "C" void Stack__ctor_m4161 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
extern "C" void Stack_Resize_m7805 (Stack_t792 * __this, int32_t ___ncapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
extern "C" int32_t Stack_get_Count_m7806 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
extern "C" bool Stack_get_IsSynchronized_m7807 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
extern "C" Object_t * Stack_get_SyncRoot_m7808 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
extern "C" void Stack_Clear_m7809 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
extern "C" void Stack_CopyTo_m7810 (Stack_t792 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
extern "C" Object_t * Stack_GetEnumerator_m7811 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
extern "C" Object_t * Stack_Peek_m7812 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
extern "C" Object_t * Stack_Pop_m7813 (Stack_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
extern "C" void Stack_Push_m7814 (Stack_t792 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
