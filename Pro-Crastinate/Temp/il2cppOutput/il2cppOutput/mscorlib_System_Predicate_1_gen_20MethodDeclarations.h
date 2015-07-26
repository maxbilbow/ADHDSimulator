#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2206;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15114_gshared (Predicate_1_t2206 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15114(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2206 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15114_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15115_gshared (Predicate_1_t2206 * __this, UIVertex_t390  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15115(__this, ___obj, method) (( bool (*) (Predicate_1_t2206 *, UIVertex_t390 , const MethodInfo*))Predicate_1_Invoke_m15115_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15116_gshared (Predicate_1_t2206 * __this, UIVertex_t390  ___obj, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15116(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2206 *, UIVertex_t390 , AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15116_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15117_gshared (Predicate_1_t2206 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15117(__this, ___result, method) (( bool (*) (Predicate_1_t2206 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15117_gshared)(__this, ___result, method)
