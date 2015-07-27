#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>
struct Transform_1_t2118;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13386_gshared (Transform_1_t2118 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13386(__this, ___object, ___method, method) (( void (*) (Transform_1_t2118 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13386_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m13387_gshared (Transform_1_t2118 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13387(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2118 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m13387_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13388_gshared (Transform_1_t2118 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13388(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2118 *, int32_t, Object_t *, AsyncCallback_t391 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13388_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m13389_gshared (Transform_1_t2118 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13389(__this, ___result, method) (( int32_t (*) (Transform_1_t2118 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13389_gshared)(__this, ___result, method)
