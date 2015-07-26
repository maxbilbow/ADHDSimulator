#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t162;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m11578_gshared (Func_2_t162 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m11578(__this, ___object, ___method, method) (( void (*) (Func_2_t162 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m11578_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m11580_gshared (Func_2_t162 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m11580(__this, ___arg1, method) (( Object_t * (*) (Func_2_t162 *, Object_t *, const MethodInfo*))Func_2_Invoke_m11580_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m11582_gshared (Func_2_t162 * __this, Object_t * ___arg1, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m11582(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t162 *, Object_t *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m11582_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m11584_gshared (Func_2_t162 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m11584(__this, ___result, method) (( Object_t * (*) (Func_2_t162 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m11584_gshared)(__this, ___result, method)
