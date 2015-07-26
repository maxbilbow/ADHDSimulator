﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2087;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t234;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m13361(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2087 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11335_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T)
#define Predicate_1_Invoke_m13362(__this, ___obj, method) (( bool (*) (Predicate_1_t2087 *, Entry_t234 *, const MethodInfo*))Predicate_1_Invoke_m11336_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m13363(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2087 *, Entry_t234 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11337_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m13364(__this, ___result, method) (( bool (*) (Predicate_1_t2087 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11338_gshared)(__this, ___result, method)
