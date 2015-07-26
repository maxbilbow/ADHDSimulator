#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.String,System.String>
struct Func_2_t18;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m461(__this, ___object, ___method, method) (( void (*) (Func_2_t18 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m11576_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.String,System.String>::Invoke(T)
#define Func_2_Invoke_m11577(__this, ___arg1, method) (( String_t* (*) (Func_2_t18 *, String_t*, const MethodInfo*))Func_2_Invoke_m11578_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.String,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m11579(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t18 *, String_t*, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m11580_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.String,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m11581(__this, ___result, method) (( String_t* (*) (Func_2_t18 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m11582_gshared)(__this, ___result, method)
