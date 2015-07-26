#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>
struct Transform_1_t2075;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13106_gshared (Transform_1_t2075 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13106(__this, ___object, ___method, method) (( void (*) (Transform_1_t2075 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13106_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2061  Transform_1_Invoke_m13107_gshared (Transform_1_t2075 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13107(__this, ___key, ___value, method) (( KeyValuePair_2_t2061  (*) (Transform_1_t2075 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m13107_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13108_gshared (Transform_1_t2075 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13108(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2075 *, int32_t, Object_t *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13108_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2061  Transform_1_EndInvoke_m13109_gshared (Transform_1_t2075 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13109(__this, ___result, method) (( KeyValuePair_2_t2061  (*) (Transform_1_t2075 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13109_gshared)(__this, ___result, method)
