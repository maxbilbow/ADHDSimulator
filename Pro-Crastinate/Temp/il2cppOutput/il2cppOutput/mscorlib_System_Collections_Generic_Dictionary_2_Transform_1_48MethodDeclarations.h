#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t2452;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18713_gshared (Transform_1_t2452 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18713(__this, ___object, ___method, method) (( void (*) (Transform_1_t2452 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18713_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2006  Transform_1_Invoke_m18714_gshared (Transform_1_t2452 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18714(__this, ___key, ___value, method) (( KeyValuePair_2_t2006  (*) (Transform_1_t2452 *, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))Transform_1_Invoke_m18714_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18715_gshared (Transform_1_t2452 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18715(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2452 *, Object_t *, KeyValuePair_2_t2006 , AsyncCallback_t382 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18715_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2006  Transform_1_EndInvoke_m18716_gshared (Transform_1_t2452 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18716(__this, ___result, method) (( KeyValuePair_2_t2006  (*) (Transform_1_t2452 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18716_gshared)(__this, ___result, method)
