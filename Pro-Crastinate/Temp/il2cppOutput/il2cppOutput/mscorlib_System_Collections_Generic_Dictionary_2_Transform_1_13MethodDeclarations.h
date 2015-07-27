#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>
struct Transform_1_t2122;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13417_gshared (Transform_1_t2122 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13417(__this, ___object, ___method, method) (( void (*) (Transform_1_t2122 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13417_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2112  Transform_1_Invoke_m13418_gshared (Transform_1_t2122 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13418(__this, ___key, ___value, method) (( KeyValuePair_2_t2112  (*) (Transform_1_t2122 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m13418_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13419_gshared (Transform_1_t2122 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13419(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2122 *, int32_t, Object_t *, AsyncCallback_t391 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13419_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2112  Transform_1_EndInvoke_m13420_gshared (Transform_1_t2122 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13420(__this, ___result, method) (( KeyValuePair_2_t2112  (*) (Transform_1_t2122 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13420_gshared)(__this, ___result, method)
