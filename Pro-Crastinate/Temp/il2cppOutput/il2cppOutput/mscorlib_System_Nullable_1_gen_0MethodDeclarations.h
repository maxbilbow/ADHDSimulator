﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1895;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11106_gshared (Nullable_1_t1895 * __this, TimeSpan_t1144  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11106(__this, ___value, method) (( void (*) (Nullable_1_t1895 *, TimeSpan_t1144 , const MethodInfo*))Nullable_1__ctor_m11106_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11107_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11107(__this, method) (( bool (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_get_HasValue_m11107_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1144  Nullable_1_get_Value_m11108_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11108(__this, method) (( TimeSpan_t1144  (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_get_Value_m11108_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m20194_gshared (Nullable_1_t1895 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20194(__this, ___other, method) (( bool (*) (Nullable_1_t1895 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m20194_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m20195_gshared (Nullable_1_t1895 * __this, Nullable_1_t1895  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20195(__this, ___other, method) (( bool (*) (Nullable_1_t1895 *, Nullable_1_t1895 , const MethodInfo*))Nullable_1_Equals_m20195_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m20196_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m20196(__this, method) (( int32_t (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_GetHashCode_m20196_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t1144  Nullable_1_GetValueOrDefault_m20197_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m20197(__this, method) (( TimeSpan_t1144  (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m20197_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m20198_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m20198(__this, method) (( String_t* (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_ToString_m20198_gshared)(__this, method)
