#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>
struct Transform_1_t2071;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13078_gshared (Transform_1_t2071 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13078(__this, ___object, ___method, method) (( void (*) (Transform_1_t2071 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13078_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m13079_gshared (Transform_1_t2071 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13079(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2071 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m13079_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13080_gshared (Transform_1_t2071 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13080(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2071 *, int32_t, Object_t *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13080_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m13081_gshared (Transform_1_t2071 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13081(__this, ___result, method) (( int32_t (*) (Transform_1_t2071 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13081_gshared)(__this, ___result, method)
