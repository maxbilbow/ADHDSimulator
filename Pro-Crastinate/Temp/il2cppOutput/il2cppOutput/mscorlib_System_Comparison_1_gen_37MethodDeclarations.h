#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t2519;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t769;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m19413(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2519 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m11358_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m19414(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2519 *, BaseInvokableCall_t769 *, BaseInvokableCall_t769 *, const MethodInfo*))Comparison_1_Invoke_m11359_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m19415(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2519 *, BaseInvokableCall_t769 *, BaseInvokableCall_t769 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11360_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m19416(__this, ___result, method) (( int32_t (*) (Comparison_1_t2519 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11361_gshared)(__this, ___result, method)
