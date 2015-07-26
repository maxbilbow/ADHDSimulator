#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<RMX.Bugger/Log>
struct Comparison_1_t1961;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"

// System.Void System.Comparison`1<RMX.Bugger/Log>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m11552_gshared (Comparison_1_t1961 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m11552(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1961 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m11552_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<RMX.Bugger/Log>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11553_gshared (Comparison_1_t1961 * __this, Log_t6  ___x, Log_t6  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11553(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1961 *, Log_t6 , Log_t6 , const MethodInfo*))Comparison_1_Invoke_m11553_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<RMX.Bugger/Log>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11554_gshared (Comparison_1_t1961 * __this, Log_t6  ___x, Log_t6  ___y, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11554(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1961 *, Log_t6 , Log_t6 , AsyncCallback_t382 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11554_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<RMX.Bugger/Log>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11555_gshared (Comparison_1_t1961 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11555(__this, ___result, method) (( int32_t (*) (Comparison_1_t1961 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11555_gshared)(__this, ___result, method)
