#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2405;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17726_gshared (Predicate_1_t2405 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17726(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2405 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17726_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17727_gshared (Predicate_1_t2405 * __this, UILineInfo_t529  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17727(__this, ___obj, method) (( bool (*) (Predicate_1_t2405 *, UILineInfo_t529 , const MethodInfo*))Predicate_1_Invoke_m17727_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17728_gshared (Predicate_1_t2405 * __this, UILineInfo_t529  ___obj, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17728(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2405 *, UILineInfo_t529 , AsyncCallback_t391 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17728_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17729_gshared (Predicate_1_t2405 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17729(__this, ___result, method) (( bool (*) (Predicate_1_t2405 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17729_gshared)(__this, ___result, method)
