#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11189_gshared (Nullable_1_t1919 * __this, TimeSpan_t1156  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11189(__this, ___value, method) (( void (*) (Nullable_1_t1919 *, TimeSpan_t1156 , const MethodInfo*))Nullable_1__ctor_m11189_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11190_gshared (Nullable_1_t1919 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11190(__this, method) (( bool (*) (Nullable_1_t1919 *, const MethodInfo*))Nullable_1_get_HasValue_m11190_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1156  Nullable_1_get_Value_m11191_gshared (Nullable_1_t1919 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11191(__this, method) (( TimeSpan_t1156  (*) (Nullable_1_t1919 *, const MethodInfo*))Nullable_1_get_Value_m11191_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m20473_gshared (Nullable_1_t1919 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20473(__this, ___other, method) (( bool (*) (Nullable_1_t1919 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m20473_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m20474_gshared (Nullable_1_t1919 * __this, Nullable_1_t1919  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20474(__this, ___other, method) (( bool (*) (Nullable_1_t1919 *, Nullable_1_t1919 , const MethodInfo*))Nullable_1_Equals_m20474_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m20475_gshared (Nullable_1_t1919 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m20475(__this, method) (( int32_t (*) (Nullable_1_t1919 *, const MethodInfo*))Nullable_1_GetHashCode_m20475_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t1156  Nullable_1_GetValueOrDefault_m20476_gshared (Nullable_1_t1919 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m20476(__this, method) (( TimeSpan_t1156  (*) (Nullable_1_t1919 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m20476_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m20477_gshared (Nullable_1_t1919 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m20477(__this, method) (( String_t* (*) (Nullable_1_t1919 *, const MethodInfo*))Nullable_1_ToString_m20477_gshared)(__this, method)
