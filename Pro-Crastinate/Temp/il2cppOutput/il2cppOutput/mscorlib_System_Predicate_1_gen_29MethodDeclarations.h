#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte[]>
struct Predicate_1_t2330;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m17057(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2330 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11335_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte[]>::Invoke(T)
#define Predicate_1_Invoke_m17058(__this, ___obj, method) (( bool (*) (Predicate_1_t2330 *, ByteU5BU5D_t616*, const MethodInfo*))Predicate_1_Invoke_m11336_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m17059(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2330 *, ByteU5BU5D_t616*, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11337_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m17060(__this, ___result, method) (( bool (*) (Predicate_1_t2330 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11338_gshared)(__this, ___result, method)
