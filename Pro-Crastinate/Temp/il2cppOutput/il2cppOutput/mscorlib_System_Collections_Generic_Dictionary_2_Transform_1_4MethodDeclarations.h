#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t2011;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12197_gshared (Transform_1_t2011 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12197(__this, ___object, ___method, method) (( void (*) (Transform_1_t2011 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12197_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m12198_gshared (Transform_1_t2011 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12198(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2011 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m12198_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12199_gshared (Transform_1_t2011 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12199(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2011 *, Object_t *, Object_t *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12199_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m12200_gshared (Transform_1_t2011 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12200(__this, ___result, method) (( Object_t * (*) (Transform_1_t2011 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12200_gshared)(__this, ___result, method)
