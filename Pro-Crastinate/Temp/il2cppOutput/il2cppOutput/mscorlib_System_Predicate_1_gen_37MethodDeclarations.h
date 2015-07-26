#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t2615;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1718;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m20146(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2615 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11332_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::Invoke(T)
#define Predicate_1_Invoke_m20147(__this, ___obj, method) (( bool (*) (Predicate_1_t2615 *, StrongName_t1718 *, const MethodInfo*))Predicate_1_Invoke_m11333_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Security.Policy.StrongName>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m20148(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2615 *, StrongName_t1718 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11334_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m20149(__this, ___result, method) (( bool (*) (Predicate_1_t2615 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11335_gshared)(__this, ___result, method)
