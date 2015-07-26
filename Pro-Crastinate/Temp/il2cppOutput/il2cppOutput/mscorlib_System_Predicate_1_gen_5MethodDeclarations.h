﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t873;
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

// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m4134(__this, ___object, ___method, method) (( void (*) (Predicate_1_t873 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11335_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T)
#define Predicate_1_Invoke_m19406(__this, ___obj, method) (( bool (*) (Predicate_1_t873 *, BaseInvokableCall_t769 *, const MethodInfo*))Predicate_1_Invoke_m11336_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m19407(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t873 *, BaseInvokableCall_t769 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11337_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m19408(__this, ___result, method) (( bool (*) (Predicate_1_t873 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11338_gshared)(__this, ___result, method)
