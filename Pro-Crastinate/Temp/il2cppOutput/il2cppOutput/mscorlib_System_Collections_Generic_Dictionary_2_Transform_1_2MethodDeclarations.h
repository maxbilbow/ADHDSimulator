#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>
struct Transform_1_t2037;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12262_gshared (Transform_1_t2037 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12262(__this, ___object, ___method, method) (( void (*) (Transform_1_t2037 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12262_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2025  Transform_1_Invoke_m12263_gshared (Transform_1_t2037 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12263(__this, ___key, ___value, method) (( KeyValuePair_2_t2025  (*) (Transform_1_t2037 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m12263_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12264_gshared (Transform_1_t2037 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12264(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2037 *, Object_t *, int32_t, AsyncCallback_t391 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12264_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2025  Transform_1_EndInvoke_m12265_gshared (Transform_1_t2037 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12265(__this, ___result, method) (( KeyValuePair_2_t2025  (*) (Transform_1_t2037 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12265_gshared)(__this, ___result, method)
