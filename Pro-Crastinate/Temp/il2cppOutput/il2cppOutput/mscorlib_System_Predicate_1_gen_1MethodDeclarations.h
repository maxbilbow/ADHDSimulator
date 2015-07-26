#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.List`1<System.String>>
struct Predicate_1_t265;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t13;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m927(__this, ___object, ___method, method) (( void (*) (Predicate_1_t265 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11336_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.List`1<System.String>>::Invoke(T)
#define Predicate_1_Invoke_m11675(__this, ___obj, method) (( bool (*) (Predicate_1_t265 *, List_1_t13 *, const MethodInfo*))Predicate_1_Invoke_m11337_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.List`1<System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m11676(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t265 *, List_1_t13 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11338_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.List`1<System.String>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m11677(__this, ___result, method) (( bool (*) (Predicate_1_t265 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11339_gshared)(__this, ___result, method)
