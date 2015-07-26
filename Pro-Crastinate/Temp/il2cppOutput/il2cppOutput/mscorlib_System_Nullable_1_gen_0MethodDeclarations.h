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
extern "C" void Nullable_1__ctor_m11109_gshared (Nullable_1_t1895 * __this, TimeSpan_t1144  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11109(__this, ___value, method) (( void (*) (Nullable_1_t1895 *, TimeSpan_t1144 , const MethodInfo*))Nullable_1__ctor_m11109_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11110_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11110(__this, method) (( bool (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_get_HasValue_m11110_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1144  Nullable_1_get_Value_m11111_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11111(__this, method) (( TimeSpan_t1144  (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_get_Value_m11111_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m20209_gshared (Nullable_1_t1895 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20209(__this, ___other, method) (( bool (*) (Nullable_1_t1895 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m20209_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m20210_gshared (Nullable_1_t1895 * __this, Nullable_1_t1895  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20210(__this, ___other, method) (( bool (*) (Nullable_1_t1895 *, Nullable_1_t1895 , const MethodInfo*))Nullable_1_Equals_m20210_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m20211_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m20211(__this, method) (( int32_t (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_GetHashCode_m20211_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t1144  Nullable_1_GetValueOrDefault_m20212_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m20212(__this, method) (( TimeSpan_t1144  (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m20212_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m20213_gshared (Nullable_1_t1895 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m20213(__this, method) (( String_t* (*) (Nullable_1_t1895 *, const MethodInfo*))Nullable_1_ToString_m20213_gshared)(__this, method)
