#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2470;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadSafeDictionaryValueFactory_2__ctor_m18473_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2__ctor_m18473(__this, ___object, ___method, method) (( void (*) (ThreadSafeDictionaryValueFactory_2_t2470 *, Object_t *, IntPtr_t, const MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m18473_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m18475_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_Invoke_m18475(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t2470 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m18475_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m18477_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___key, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m18477(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t2470 *, Object_t *, AsyncCallback_t391 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m18477_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m18479_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___result, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m18479(__this, ___result, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t2470 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m18479_gshared)(__this, ___result, method)
