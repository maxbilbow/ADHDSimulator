﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Type>
struct Predicate_1_t2471;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m18906(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2471 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11332_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Type>::Invoke(T)
#define Predicate_1_Invoke_m18907(__this, ___obj, method) (( bool (*) (Predicate_1_t2471 *, Type_t *, const MethodInfo*))Predicate_1_Invoke_m11333_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Type>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m18908(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2471 *, Type_t *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11334_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Type>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m18909(__this, ___result, method) (( bool (*) (Predicate_1_t2471 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11335_gshared)(__this, ___result, method)
