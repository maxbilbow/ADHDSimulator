#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Char>
struct Nullable_1_t165;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Char>::.ctor(T)
extern "C" void Nullable_1__ctor_m472_gshared (Nullable_1_t165 * __this, uint16_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m472(__this, ___value, method) (( void (*) (Nullable_1_t165 *, uint16_t, const MethodInfo*))Nullable_1__ctor_m472_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m477_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m477(__this, method) (( bool (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_get_HasValue_m477_gshared)(__this, method)
// T System.Nullable`1<System.Char>::get_Value()
extern "C" uint16_t Nullable_1_get_Value_m11680_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11680(__this, method) (( uint16_t (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_get_Value_m11680_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m11681_gshared (Nullable_1_t165 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m11681(__this, ___other, method) (( bool (*) (Nullable_1_t165 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m11681_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m11682_gshared (Nullable_1_t165 * __this, Nullable_1_t165  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m11682(__this, ___other, method) (( bool (*) (Nullable_1_t165 *, Nullable_1_t165 , const MethodInfo*))Nullable_1_Equals_m11682_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Char>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m11683_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m11683(__this, method) (( int32_t (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_GetHashCode_m11683_gshared)(__this, method)
// T System.Nullable`1<System.Char>::GetValueOrDefault()
extern "C" uint16_t Nullable_1_GetValueOrDefault_m476_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m476(__this, method) (( uint16_t (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m476_gshared)(__this, method)
// System.String System.Nullable`1<System.Char>::ToString()
extern "C" String_t* Nullable_1_ToString_m11684_gshared (Nullable_1_t165 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m11684(__this, method) (( String_t* (*) (Nullable_1_t165 *, const MethodInfo*))Nullable_1_ToString_m11684_gshared)(__this, method)
