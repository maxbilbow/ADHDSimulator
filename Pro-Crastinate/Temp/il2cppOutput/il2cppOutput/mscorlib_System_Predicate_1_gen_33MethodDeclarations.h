#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2396;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17578_gshared (Predicate_1_t2396 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17578(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2396 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17578_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17579_gshared (Predicate_1_t2396 * __this, UICharInfo_t531  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17579(__this, ___obj, method) (( bool (*) (Predicate_1_t2396 *, UICharInfo_t531 , const MethodInfo*))Predicate_1_Invoke_m17579_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17580_gshared (Predicate_1_t2396 * __this, UICharInfo_t531  ___obj, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17580(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2396 *, UICharInfo_t531 , AsyncCallback_t391 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17580_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17581_gshared (Predicate_1_t2396 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17581(__this, ___result, method) (( bool (*) (Predicate_1_t2396 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17581_gshared)(__this, ___result, method)
